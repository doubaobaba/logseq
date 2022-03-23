title:: extern "C"

- 原理
	- 定义了一个 test.h 的头文件，里面有 show 方法，
	  ```C
	  #pragma once
	  #include <stdio.h>
	  - void show();
	  ```
	- 然后在源文件新建 test.c 文件，那么 show 就是一个全局函数了
	  ```c
	  #include "test.h"
	  - void show() {
	  	printf("hello world.\n");
	  }
	  ```
	- 在源文件中新建 .cpp 文件，如果像之前一样引用头文件，会报错
	  > 1 个无法解析的外部命令
	  
	  ```c++
	  using namespace std;
	  #include "test.h"//要调用得先引用头文件
	  - int main()
	  {
	  	show();//在 C++ 中函数是可以发生重载的，编译器会把这个函数名称偷偷改变
	  - system("pause");
	  	return 0;
	  }
	  ```
	- 这是因为 C++ 为了支持函数重载，C 和 C++ 中对同一个函数经过编译后生成的函数名是不同的，所以如果在 C++ 中调用一个使用 C 语言编写模块中的某个函数，那么 C++ 是根据 C++ 的名称修饰方式来查找并链接这个函数，那么就会发生链接错误：
	  ```C++
	  c函数: void MyFunc(){} ,被编译成函数: MyFunc
	  c++函数:void MyFunc(){},被编译成函数: _Z6Myfuncv
	  ```
- extern "C" 的主要作用就是为了实现 C++ 代码能够调用其他 C 语言代码。加上extern "C" 后，这部分代码编译器就能按 C 语言的方式进行编译和链接了。
- 但每调用一个 C 语言的函数就得加一次 extern "C" 太麻烦，所以可以在 C 语言中头文件进行修改
  ```C
  #pragma once //防止头文件重复编译
  
  #ifdef __cplusplus //有两个 _ 下划线
  extern "C" {
  #endif //!__cplusplus
  
  #include <stdio.h>
  
  void show();
  
  
  #ifdef __cplusplus //有两个 _ 下划线
  }
  #endif //!__cplusplus
  ```
- 在里面写的函数就都能默认用 C 语言的方式进行编译和链接了。
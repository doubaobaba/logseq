- **while** 反复执行一段代码，直到给定条件为假为止
- while 语句的句式：
  ```
  while (condition)
  	statement
  ```
- while 语句交替检测 condition 条件和执行关联的语句 statement，直至 condition 为假时停止
- int 转 string 打印案例
  ```C++
   int n = 325;
      std::string s;
      while(n > 0){
          int d = n%10;
          s = std::to_string(d) + s;
          n = n/10;
      }
      std::cout << s << std::endl;
  ```
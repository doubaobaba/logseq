- # **！！待完善**
- 头文件：`#include <fstream>`
- 输出文件：`std::ofstream fout("prime.txt");`
	- 输入内容到文件中：`fout << x << std::endl;`
- 输入文件：`std::ifstream fin("input.txt");`
	- 从输入文件中读数据：`fin >> n;`
- 写二进制文件：`std::ofstream  fbin("primes.dat", std::ios::binary);`
	- 用二进制的原因：Linux 和 Windows 的换行不一样，Linux 是 `\` ，Windows 是 `\n` ，所以 Windows 每一行会比 Linux 多一个字符，主要是跨平台的考虑
	- 输入内容到二进制文件中：`fbin.write(reinterpret_cast<const char *>(&x), sizeof(x));`
	- 二进制文件中，每个数字都是 4 字节，不管是多大的数字，都是 4 字节，所以也方便了找到第几个数字的位置
	- 根据位置找到文件：`seekg`
	- 写文件：`seekt`
	- 告诉你文件目前在哪个位置：`tellg`
- ```
  {
          int n;
          std::fstream fin("/media/doubao/Doubaobao/Coding-Practice/JiRenGu_C++/2-5/primes.dat", std::ios::in | std::ios::out);
          fin.seekg(99*sizeof(int));
          fin.read(reinterpret_cast<char *>(&n), sizeof(int));
          std::cout << n << std::endl;
      }
  ```
- `istream & read(char* buffer, int count);` 其中 buffer 用于指定读取字节的起始位置，count 指定读取字节的个数。该方法会返回一个调用该方法对象的引用
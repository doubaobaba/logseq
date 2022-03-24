- 先把循环体内部执行一遍，执行完之后才判断条件是否成立
	- 如果成立就继续循环
	- 否则停止循环
- int 转二进制 string 打印案例
  ```C++
  	  int n = 0;
  	      std::string s;
  	      do{
  	          int d = n%10;
  	          s = std::to_string(d) + s;
  	          n = n/10;
  	      }while(n > 0);
  	      std::cout << s << std::endl;
  ```
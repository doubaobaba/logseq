- if 语句统计在输入中每个值连续出现了多少次
- ```C++
  #include <iostream>
  int main()
  {
  	//currVal 是我们正在统计的数；我们将读入的新值存入 val
      int currVal = 0, val = 0;
      if（std::cin >> currVal){
      	int cnt = 1;//保存我们正在处理的当前值的个数
      	while(std::cin >> val){
            if(val == currVal)
                ++cnt;
            else{
                std::cout << currVal << "occurs"
                          << cnt << "times" << std::endl;
                currVal = val; //记住新值
                cnt = 1;//重置计数器
          	}
          }//while 循环结束
          //记住打印文件中最后一个值的个数
          std::cout << currVal << "occurs"
          		  << cnt << "times" << std::endl;
      }//最外层的 if 语句在这里结束
      return 0;
  }
  ```
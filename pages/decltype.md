- 运算符
- `decltype(x)` y ，推导括号对象 `x` 的类型，然后定义 `y`
- 可以用于对象，也可以用于表达式
	- eg:
	  ```C++
	  decltype(vc.size()) vd;
	  ```
	- vd 的类型就是 `unsigned long`
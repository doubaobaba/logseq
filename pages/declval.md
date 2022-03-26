- 提供一个类型，返回一个对象
- 是一个模板函数，调用`std::declval<类型>(值)`
- [[decltype]] 也可以作为类型写入
- eg:
  ```C++
  auto j = std::declval<std::vector<int>>();
  auto k = std::declval<decltype(vc.size())>();
  ```
-
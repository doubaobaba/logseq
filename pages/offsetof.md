- C 库宏 `offsetof(type, member-designator)` 会生成一个类型为 size_t 的整形常量
- # 声明
	- `offsetof(type, member-designator)`
- # 参数
	- `type` -- 这是一个 class 类型，其中，member-designator 是一个有效的成员指示器
	- `member-designator` -- 这是一个 class 类型的成员指示器
- # 返回值
	- 返回类型为 `size_t` 的值，表示 type 中成员的**偏移量**
	-
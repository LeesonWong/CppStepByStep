C++的面向对象

1、class和struct的区别
class默认权限private
struct默认权限public

2、构造和析构函数
C++中class一定会有构造和析构，未声明则编译器自动添加空实现
析构函数的调用时机：
栈上的变量被释放时，手动释放时


构造函数的分类
1、有参、无参构造
2、普通、拷贝构造


构造函数的调用方式
1、括号
注意：不能用括号法调用无参构造
Person p();
会被识别成函数声明，Person是返回类型，p是函数名

2、显示
Person p = Person();
右边会被认为是一个匿名对象，同一行里赋值给了p
如果没有接收这个匿名对象，会马上被析构掉

注意：不要用拷贝构造函数初始化匿名对象，编译器会认为是声明
Person p1;
Person(p1); --> Person p1;// 括号被去掉了，认为是重声明

3、隐式转换
隐式转换会将其他类型，改成调用有参构造的语法糖
Person p = 10; --> Person p = Person(10);
Person p2 = {10, "aaa"}; --> Person(10, "aaa");

所以最常见的写法，其实是一个拷贝构造函数
Person p1 = p2; --> Person p1 = Person(p2);

如果要禁止隐式转换，在构造函数上使用explicit关键字



4、拷贝构造

拷贝构造的基础形式如下
```c++
Person p;

Person p1(p);
Person p2 = Person(p1);
Person p3 = p1;
```

拷贝构造函数被调用的几种情况
1、用一个对象创建另一个对象
2、函数调用参数值传递
3、函数调用返回值值传递


继承
菱形继承问题

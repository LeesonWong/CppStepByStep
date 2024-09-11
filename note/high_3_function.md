C++函数

1、函数默认参数
```c++
void func(int a = 10, int b = 3) {
}
```


2、函数占位参数(可以使用默认参数)
```c++
void func(int a, int = 20) {
}
```


3、函数重载
重载的范围，只要在相同的作用域即可。其他重载特性与其他语言之间没有区别，即函数名相同的情况下，参数不同
```c++
void func(int a) {
}

void func(int a, int b) {
}
```

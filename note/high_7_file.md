文件操作

文件操作的流程
打开  操作  关闭

一般引用 fstream 实现，读文件引用 ifstream，写文件引用 ofstream
```c++
#include <fstream>
#include <ifstream>
#include <ofstream>
```

操作
    读 >> getline()
    写 << write()
    文件定位 seekg seekp
    文件状态监测 isopen() fail() eof() good()

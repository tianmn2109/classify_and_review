###c++ 资料
    http://www.cnblogs.com/nzbbody/category/518367.html 134个c++问题

1：new, delete, malloc, free, operator new, placement new.</br>
     http://www.cnblogs.com/fly1988happy/archive/2012/04/26/2470542.html</br>
     http://blog.csdn.net/huazhongkejidaxuezpp/article/details/20731797#0-tsina-1-23003-397232819ff9a47a7b7e80a40613cfe1</br>
     http://blog.csdn.net/wudaijun/article/details/9273339#0-tsina-1-59546-397232819ff9a47a7b7e80a40613cfe1 </br>
     http://www.relisoft.com/book/tech/9new.html</br>

2：异常处理</br>
    http://www.cnblogs.com/ggjucheng/archive/2011/12/18/2292089.html</br>
    http://www.cnblogs.com/nzbbody/p/3418989.html</br>
     
3：overload, override, overwrite. </br>
   http://blog.csdn.net/jszhangyili/article/details/7570311</br>
   有无virtual关键字的区别</br>
   '''
   class A{virtual void f(){cout << "A" << endl;};};
   class B: public A{void f(){cout << "B" << endl;}};
   A *a = new B();
   a->f(); // 输出B  运行时决定调用哪个函数   是多态
   class A{void f(){cout << "A" << endl;};};
   class B: public A{void f(){cout << "B" << endl;}};
   A *a = new B(); // 输出 A  编译时确定
   '''
   
4：static_cast, dynamic_cast, const_cast, reinterpret_cast</br>
    http://www.cnblogs.com/jerry19880126/archive/2012/08/14/2638192.html</br>
    http://www.cnblogs.com/chio/archive/2007/07/18/822389.html</br>
    
5：volatile</br>
    http://www.cnblogs.com/chio/archive/2007/11/24/970632.html</br>
    
6：const,volatile,restrict的用法总结</br>
   http://www.jb51.net/article/42348.htm#50347-tsina-1-93488-fe90445b441dc02e06e924681e164bcd</br>
   
7：c++ union </br>
   http://blog.chinaunix.net/uid-21754115-id-187514.html#0-tsina-1-80275-397232819ff9a47a7b7e80a40613cfe1</br>
   http://bbs.csdn.net/topics/390408109</br>
   
8：explicit</br>
   http://www.cnblogs.com/dwdxdy/archive/2012/07/17/2595479.html</br>
   
9：static, const, const static,数据成员初始化</br>
   http://blog.csdn.net/liuxialong/article/details/6573025#0-tsina-1-21588-397232819ff9a47a7b7e80a40613cfe1</br>
   
10：sizeof</br>
   http://blog.csdn.net/freefalcon/article/details/54839#0-tsina-1-40985-397232819ff9a47a7b7e80a40613cfe1</br>
   #pragma pack(4)  // gcc忽略pragma</br>
   gcc 下通过__attribute__((packed, aligned(8))) 设置默认对齐大小</br>
   gcc默认对齐大小为4， vc为8</br>
   
11： vector为什么每次增长两倍</br>
   http://stackoverflow.com/questions/1424826/why-is-vector-array-doubled</br>
   
12; c和c++中struct 的却别</br>
   http://blog.csdn.net/yangzhiloveyou/article/details/8536793#0-tsina-1-20230-397232819ff9a47a7b7e80a40613cfe1</br>
   http://www.cnblogs.com/stonehat/archive/2011/10/07/2200629.html</br>
   
13： 虚析构函数</br>
   http://www.cnblogs.com/kanego/archive/2011/10/03/virtual_destructor.html</br>
   
14：c++虚函数引出的问题　　包含内存布局等　　没看完，</br>
　　http://blog.csdn.net/yangzhiloveyou/article/details/8536686</br>
　　
15：数组名和数组名取地址的区别</br>
   http://blog.csdn.net/daniel_ice/article/details/6857019#0-tsina-1-30862-397232819ff9a47a7b7e80a40613cfe1</br>
   
16：#error</br>
   http://baike.baidu.com/link?url=Q7UNuIuvZpjgTIcVFwBDV83uyqdA1GcEH3w282kR8-CHBoni0qxluZLKyIQBtxYbonVttdK160VaJN6CPNRy9a</br>
   
17： static</br>
   http://blog.csdn.net/keyeagle/article/details/6708077#0-tsina-1-97004-397232819ff9a47a7b7e80a40613cfe1</br>
   http://www.cnblogs.com/yezhenhan/archive/2011/10/31/2229724.html</br>
   http://www.cnblogs.com/BeyondAnyTime/archive/2012/06/08/2542315.html</br>
   
18：虚函数的原理及实现</br>
   http://blog.csdn.net/digu/article/details/1892581#0-tsina-1-35885-397232819ff9a47a7b7e80a40613cfe1</br>
   http://blog.csdn.net/wuchuanpingstone/article/details/6742465#0-tsina-1-29761-397232819ff9a47a7b7e80a40613cfe1</br>
   

c++ 资料
    http://www.cnblogs.com/nzbbody/category/518367.html [link](http://www.cnblogs.com/nzbbody/category/518367.html)   134个c++问题

1: new, delete, malloc, free, operator new, placement new.
     http://www.cnblogs.com/fly1988happy/archive/2012/04/26/2470542.html [link](http://www.cnblogs.com/fly1988happy/archive/2012/04/26/2470542.html)
     http://blog.csdn.net/huazhongkejidaxuezpp/article/details/20731797#0-tsina-1-23003-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/huazhongkejidaxuezpp/article/details/20731797#0-tsina-1-23003-397232819ff9a47a7b7e80a40613cfe1)
     http://blog.csdn.net/wudaijun/article/details/9273339#0-tsina-1-59546-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/wudaijun/article/details/9273339#0-tsina-1-59546-397232819ff9a47a7b7e80a40613cfe1)
     http://www.relisoft.com/book/tech/9new.html [link](http://www.relisoft.com/book/tech/9new.html)
     
2: 异常处理
    http://www.cnblogs.com/ggjucheng/archive/2011/12/18/2292089.html [link](http://www.cnblogs.com/ggjucheng/archive/2011/12/18/2292089.html)
    http://www.cnblogs.com/nzbbody/p/3418989.html [link](http://www.cnblogs.com/nzbbody/p/3418989.html)
     
     
3: overload, override, overwrite. 
   http://blog.csdn.net/jszhangyili/article/details/7570311 [link](http://blog.csdn.net/jszhangyili/article/details/7570311)
   有无virtual关键字的区别
   class A{virtual void f(){cout << "A" << endl;};};
   class B: public A{void f(){cout << "B" << endl;}};
   A *a = new B();
   a->f(); // 输出B  运行时决定调用哪个函数   是多态
   class A{void f(){cout << "A" << endl;};};
   class B: public A{void f(){cout << "B" << endl;}};
   A *a = new B(); // 输出 A  编译时确定
   
 4： static_cast, dynamic_cast, const_cast, reinterpret_cast
    http://www.cnblogs.com/jerry19880126/archive/2012/08/14/2638192.html [link](http://www.cnblogs.com/jerry19880126/archive/2012/08/14/2638192.html)
    http://www.cnblogs.com/chio/archive/2007/07/18/822389.html [link](http://www.cnblogs.com/chio/archive/2007/07/18/822389.html)
    
 5: volatile
    http://www.cnblogs.com/chio/archive/2007/11/24/970632.html [link](http://www.cnblogs.com/chio/archive/2007/11/24/970632.html)
    
6: const,volatile,restrict的用法总结
   http://www.jb51.net/article/42348.htm#50347-tsina-1-93488-fe90445b441dc02e06e924681e164bcd [link](http://www.jb51.net/article/42348.htm#50347-tsina-1-93488-fe90445b441dc02e06e924681e164bcd)
7: c++ union 
   http://blog.chinaunix.net/uid-21754115-id-187514.html#0-tsina-1-80275-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.chinaunix.net/uid-21754115-id-187514.html#0-tsina-1-80275-397232819ff9a47a7b7e80a40613cfe1)
   http://bbs.csdn.net/topics/390408109 [link](http://bbs.csdn.net/topics/390408109)
8: explicit
   http://www.cnblogs.com/dwdxdy/archive/2012/07/17/2595479.html [link](http://www.cnblogs.com/dwdxdy/archive/2012/07/17/2595479.html)
9: static, const, const static,数据成员初始化
   http://blog.csdn.net/liuxialong/article/details/6573025#0-tsina-1-21588-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/liuxialong/article/details/6573025#0-tsina-1-21588-397232819ff9a47a7b7e80a40613cfe1)
10:sizeof
   http://blog.csdn.net/freefalcon/article/details/54839#0-tsina-1-40985-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/freefalcon/article/details/54839#0-tsina-1-40985-397232819ff9a47a7b7e80a40613cfe1)
   #pragma pack(4)  // gcc忽略pragma
   gcc 下通过__attribute__((packed, aligned(8))) 设置默认对齐大小
   gcc默认对齐大小为4， vc为8
11： vector为什么每次增长两倍
   http://stackoverflow.com/questions/1424826/why-is-vector-array-doubled [link](http://stackoverflow.com/questions/1424826/why-is-vector-array-doubled)
12; c和c++中struct 的却别
   http://blog.csdn.net/yangzhiloveyou/article/details/8536793#0-tsina-1-20230-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/yangzhiloveyou/article/details/8536793#0-tsina-1-20230-397232819ff9a47a7b7e80a40613cfe1)
   http://www.cnblogs.com/stonehat/archive/2011/10/07/2200629.html [link](http://www.cnblogs.com/stonehat/archive/2011/10/07/2200629.html)
13： 虚析构函数
   http://www.cnblogs.com/kanego/archive/2011/10/03/virtual_destructor.html [link](http://www.cnblogs.com/kanego/archive/2011/10/03/virtual_destructor.html)
14：c++虚函数引出的问题　　包含内存布局等　　没看完，
　　http://blog.csdn.net/yangzhiloveyou/article/details/8536686 [link](http://blog.csdn.net/yangzhiloveyou/article/details/8536686)
15: 数组名和数组名取地址的区别
   http://blog.csdn.net/daniel_ice/article/details/6857019#0-tsina-1-30862-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/daniel_ice/article/details/6857019#0-tsina-1-30862-397232819ff9a47a7b7e80a40613cfe1)
16：#error
   http://baike.baidu.com/link?url=Q7UNuIuvZpjgTIcVFwBDV83uyqdA1GcEH3w282kR8-CHBoni0qxluZLKyIQBtxYbonVttdK160VaJN6CPNRy9a [link](http://baike.baidu.com/link?url=Q7UNuIuvZpjgTIcVFwBDV83uyqdA1GcEH3w282kR8-CHBoni0qxluZLKyIQBtxYbonVttdK160VaJN6CPNRy9a)
17： static
   http://blog.csdn.net/keyeagle/article/details/6708077#0-tsina-1-97004-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/keyeagle/article/details/6708077#0-tsina-1-97004-397232819ff9a47a7b7e80a40613cfe1)
   http://www.cnblogs.com/yezhenhan/archive/2011/10/31/2229724.html [link](http://www.cnblogs.com/yezhenhan/archive/2011/10/31/2229724.html)
   http://www.cnblogs.com/BeyondAnyTime/archive/2012/06/08/2542315.html [link](http://www.cnblogs.com/BeyondAnyTime/archive/2012/06/08/2542315.html)
18: 虚函数的原理及实现
   http://blog.csdn.net/digu/article/details/1892581#0-tsina-1-35885-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/digu/article/details/1892581#0-tsina-1-35885-397232819ff9a47a7b7e80a40613cfe1)
   http://blog.csdn.net/wuchuanpingstone/article/details/6742465#0-tsina-1-29761-397232819ff9a47a7b7e80a40613cfe1 [link](http://blog.csdn.net/wuchuanpingstone/article/details/6742465#0-tsina-1-29761-397232819ff9a47a7b7e80a40613cfe1)
   

c++ 资料
    http://www.cnblogs.com/nzbbody/category/518367.html   134个c++问题

1: new, delete, malloc, free, operator new, placement new.
     http://www.cnblogs.com/fly1988happy/archive/2012/04/26/2470542.html
     http://blog.csdn.net/huazhongkejidaxuezpp/article/details/20731797#0-tsina-1-23003-397232819ff9a47a7b7e80a40613cfe1
     http://blog.csdn.net/wudaijun/article/details/9273339#0-tsina-1-59546-397232819ff9a47a7b7e80a40613cfe1
     http://www.relisoft.com/book/tech/9new.html
     
2: 异常处理
    http://www.cnblogs.com/ggjucheng/archive/2011/12/18/2292089.html
    http://www.cnblogs.com/nzbbody/p/3418989.html
    
3: overload, override, overwrite. 
   http://blog.csdn.net/jszhangyili/article/details/7570311
   有无virtual关键字的区别
   class A{virtual void f(){cout << "A" << endl;};};
   class B: public A{void f(){cout << "B" << endl;}};
   A *a = new B();
   a->f(); // 输出B  运行时决定调用哪个函数   是多态
   class A{void f(){cout << "A" << endl;};};
   class B: public A{void f(){cout << "B" << endl;}};
   A *a = new B(); // 输出 A  编译时确定
   
 4： static_cast, dynamic_cast, const_cast, reinterpret_cast
    http://www.cnblogs.com/jerry19880126/archive/2012/08/14/2638192.html
    
 5: volatile
    http://www.cnblogs.com/chio/archive/2007/11/24/970632.html
   

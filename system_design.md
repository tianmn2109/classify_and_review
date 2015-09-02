 1: 入门级别的文章</br>
   1.http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones</br>
   &nbsp;&nbsp;  总结：1：任何应用服务器只包含相同的代码，不包含任何与用户相关的数据</br>
   &nbsp;&nbsp;&nbsp;     2：session应该被存储在应用服务器的外面，所用的应用服务器都可以访问他，可以存储在数据库,</br>
   &nbsp;&nbsp;&nbsp;       或者一致性缓存中,在一致性缓存中性能比在数据库中性能好，如Redis。</br>
   &nbsp;&nbsp;&nbsp;     3：强=将一台机器的代码打包成镜像，部署在新的机器上，有工具可以将改动的代码部署到所有服务器上。</br>
   </br>
   2：http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database</br>
   &nbsp;&nbsp;   总结：</br>
   &nbsp;&nbsp;&nbsp;        相关资料 1: sharding: http://blog.csdn.net/bluishglc/article/details/6161475/</br>
   &nbsp;&nbsp;&nbsp;                 2: Denormalization: http://www.daniel-journey.com/archives/519</br>
   &nbsp;&nbsp;&nbsp;&nbsp;                    总结： 1：对不可改变数据的反模式设计。</br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;                     2： 将多张表合并成一张。</br>
   &nbsp;&nbsp;&nbsp;                    1NF 2NF 3NF BCNF: http://www.daniel-journey.com/archives/518</br>
   &nbsp;&nbsp;&nbsp;                    总结1:1NF 列字段不能再分</br>
   &nbsp;&nbsp;&nbsp;                 3：提升数据库性能： 索引、物化视图、缓存等技术。</br>
   &nbsp;&nbsp;&nbsp;                  　SQL tuning</br>
   &nbsp;&nbsp;&nbsp;                 4: SQL Join http://www.w3school.com.cn/sql/sql_join.asp</br>
   &nbsp;&nbsp;&nbsp;         了解： Redis， memchched， MongoDB， CouchDB， LevelDB.</br>
        
         
   3： 1： 缓存 http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache</br>
          2： 服务器端缓存策略： 页缓存和对象缓存，优缺点</br>
          3：　http://quyennt.com/web-development/server-side-caching-strategies/</br>
          4:　对象缓存 http://quyennt.com/web-development/object-caching-strategy/</br>
   4: 异步： http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism</br>
           ```
          总结： 方法1：提前完成耗时的工作，以低请求时间提供服务。</br>
                        通常： 网页中动态内容转换成静态内容。周期性的执行计算工作。</br>
          　　   方法2： 用户提交任务计算量大，前端通知任务已经提交，后端计算，有任务队列，计算完通知前端</br>。
          　　RabbitMQ网站手册前三章，深入研究这种设计技术。</br>
          　　  此种问题基本思想是有一个任务队列和一个处理任务的进程</br>。
           ```

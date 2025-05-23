//int i, *const cp;
//int *p1, *const p2;
//const int ic, &r = ic;
//const int *const p3;
//const int *p;
//（a）是非法的，cp 是一个常量指针，因其值（指针存储的那个地址）不能被改变，所以必须被初始化。
//
//（b）是非法的，cp2 是一个常量指针，因其值不能被改变，所以必须被初始化。
//
//（c）是非法的，ic 是一个常量，因其值不能被改变，所以必须被初始化。
//
//（d）是非法的，p3 是一个常量指针，因其值不能被改变，所以必须被初始化；同时 p3 所指向的是常量，即我们不能通过 p3 改变所指对象的值。
//
//（e）是合法的，但是 p 没有指向任何实际的对象。

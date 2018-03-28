////this指针加深理解
//#include<iostream>  
//using namespace std;
//class Test {
//
//public:
//	//构造函数  
//	Test(int i = 0, double j = 0.0) : m_i(i), m_j(j) {
//
//	}
//
//	//赋值构造函数  
//	Test& operator=(Test &rhs) {
//		this->m_i = rhs.m_i;
//		this->m_j = rhs.m_j;
//		return *this;
//	}
//	int m_i;
//	double m_j;
//
//};
//
//
//int main() {
//
//	//1、赋初值，输出 1  2.3  
//	Test obj1(1, 2.3);
//	cout << obj1.m_i << "\t" << obj1.m_j << endl;
//	cout << endl << "-------------------" << endl;
//
//	//2、未赋初值，输出0 0  
//	Test obj2;
//	cout << obj2.m_i << "\t" << obj2.m_j << endl;
//	cout << endl << "-------------------" << endl;
//
//	//3、未赋初值，但是通过赋值构造函数进行了赋初值，但是注意是重复调用赋值构造函数赋初值。  
//	Test obj3;
//	obj3 = obj2 = obj1;//这里，先进性obj2 = obj1 的操作, (赋值成功后通过return *this，返回obj2对象), 然后进行 obj3 = obj2 的操作。  
//	cout << obj2.m_i << "\t" << obj2.m_j << endl;
//	cout << endl << "-------------------" << endl;
//	cout << obj3.m_i << "\t" << obj3.m_j << endl;
//	cout << endl << "-------------------" << endl;
//
//	/****
//	通过示例3，你会发现，如果没有return * this，你不能够返回obj2对象，
//	那么在进行 obj3=obj2 操作的时候，赋值构造函数就不能用了。
//
//	C++ 为了方便我们使用类似于 int i=j=k=5这种赋值方式，
//	就必须在从右向左赋值过程中，每次执行完一个赋值操作，返回该对象，然后继续向左执行。
//	*****/
//	system("pause");
//	return 0;
//}

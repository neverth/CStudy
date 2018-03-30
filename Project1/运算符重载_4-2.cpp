//////运算符重载的方式->重载为类的成员函数
//#include <iostream>
//using namespace std;
//class A {
//private:
//	int x, y;
//public:
//	A(int x1 = 0, int y1 = 0) :x(x1), y(y1) {}
//	void show() const;
//	A operator++();
//	A operator++(int);
//};
//void A::show() const  {
//	cout << "(x, y) = ( " << x << ", " << y << ")" << endl;
//}
//A A::operator++() {
//	++x;
//	++y;
//	return *this;
//}
//A A::operator++(int) {
//	A a = *this;
//	++(*this);
//	return a;
//}
//int main() {
//	A a1(1, 2), a2(3, 4);
//	(a1++).show();
//	(++a2).show();
//	system("pause");
//	return 0;
//}
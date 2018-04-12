//#运算符的重载方式
#include <iostream>
using namespace std;
class A {
private:
	int x, y;
public:
	A(int x1 = 0, int x2 = 0);
	void show() const;
	~A() {}
	A operator++();
	A operator++(int);
};
A::A(int x1, int x2) :x(x1), y(x2) {}
void A::show() const {
	cout << "(x, y) = " << "(" << x << ", " << y << ")" << endl;
}
A A::operator++() {
	++x;
	++y;
	return *this;
}
A A::operator++(int) {

	A a ;
	++(a);
	return a;
}
int main() {
	A a1(1, 2), a2(3, 4);
	cout << "没有改变之前" << endl;
	a1.show();
	a2.show();
	cout << "改变之后" << endl;
	(a1++).show();
	(++a1).show();
	system("pause");
	return 0;
}
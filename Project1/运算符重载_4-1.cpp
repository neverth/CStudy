//类对象的四则运算
//#include <iostream>
//using namespace std;
//class A {
//private:
//	int x, y;
//public:
//	A(int x1 = 0, int y1 = 0) :x(x1), y(y1) {}
//	void show() const;
//	A operator+ (const A &a) const;
//	A operator- (const A &a) const;
//};
//void A::show() const {
//	cout << "(x, y) = " << "(" << x << ", " << y << ")" << endl;
//}
//A A::operator+(const A &a) const {
//	return A(x + a.x, y + a.y);
//}
//A A::operator-(const A &a) const {
//	return A(x - a.x, y - a.y);
//}
//int main(){
//	A a1(1, 2), a2(4, 5);
//	A a;
//	cout << "a1 ";
//	a1.show();
//	cout << "a2 ";
//	a2.show();
//	cout << "a  ";
//	a.show();
//	a = a1 + a2;
//	cout << "加法" << endl;
//	cout << "a  ";
//	a.show();
//	cout << "减法" << endl;
//	cout << "a  ";
//	(a1 - a2).show();
//	system("pause");
//	return 0;
//}
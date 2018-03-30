////运算符的重载方式->重载为类的友元函数
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(int x1 = 0, int y1 = 0) :x(x1), y(y1) {}
//	void show() {
//		cout << "(x, y) = (" << x << ", " << y << ")" << endl;
//	}
//	friend A operator+ (const A &a1, const A &a2);
//	friend A operator- (const A &a1, const A &a2);
//	~A() {}
//
//private:
//	int x, y;
//};
//A operator+ (const A &a1, const A &a2) {
//	return A(a1.x + a2.x, a1.y + a2.y);
//}
//A operator- (const A &a1, const A &a2) {
//	return A(a1.x - a2.x, a1.y - a2.y);
//}
//int main() {
//	A a1(1, 2);
//	A a2(4, 5);
//	A a;
//	cout << "a1: ";
//	a1.show();
//	cout << "a2: ";
//	a2.show();
//	cout << "a1 + a2 :";
//	(a1 + a2).show();
//	cout << "a1 + a2 :";
//	a = a1 - a2;
//	a.show();
//	system("pause");
//	return 0;
//}
//

//输入输出运算符重载
#include <iostream>
using namespace std;
class A {
private :
	int x, y;
public :
	A(int x1 = 0, int y1 = 0) :x(x1), y(y1) {}
	friend ostream &operator<< (ostream &os, const A &a);
	friend istream &operator>> (istream &os, A &a);
};
ostream &operator<< (ostream &os, const A &a) {
	os << "(" << a.x << ", " << a.y << ")";
	return os;
}
istream &operator>> (istream &is, A &a) { 
	is >> a.x >> a.y;
	return is;
}
int main() {
	A a1(88, 99), a2(78, 98);
	cout << "a1 = " << a1 << endl << "a2  = " << a2 << endl;
	cout << "please input " << endl;
	cin >> a1;
	cout << "改变之后为a1 = ";
	cout << a1;
	system("pause");
	return 0;

}
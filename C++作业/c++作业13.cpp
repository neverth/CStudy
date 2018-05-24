/*
*c++作业13
*先建立一个Point（点）类，包含数据成员x，y（坐标点）。
*以它为基类，派生出一个Circle（圆）类，增加数据成员r（半径），
*再以Circle类为直接基类，派生出一个Cylinder（圆柱体）类，
*在增加数据成员h（高）。编写程序，重载运算符“ << ”和“ >> ”，
*使之能够用于输出以上类对象。
*/

#include <iostream>
#include <windows.h>
using namespace std;
const double PI = 3.14;
class Point {
private:
	double x, y;
public:
	Point(int t_x = 0, int t_y = 0) :
		x(t_x), y(t_y) {}
	friend ostream &operator<<(ostream &os, const Point &p) {
		os << "(x = " << p.x << ", y = " << p.y << ")";
		return os;
	}
	friend istream &operator>>(istream &is, Point &p) {
		is >> p.x >> p.y;
		return is;
	}
	double getX() { return x; }
	double getY() { return y; }
};
class Circle :public Point {
private:
	double r;
public:
	Circle(int t_x, int t_y, int t_r) :
		r(t_r), Point(t_x, t_y) {}
	double getArea() {
		return PI * r * r;
	}
	friend ostream &operator<<(ostream &os, Circle &a) {
		os << "(x = " << a.getX() << ", y = " << a.getY() << ")"
			<< "\tr = " << a.r << "\tarea = " << a.getArea();
		return os;
	}
	friend istream &operator>>(istream &is, Circle &a) {
		is >> a.r;
		return is;
	}
	double getR() { return r; }
};
class Cylinder :public Circle {
private:
	double h;
public:
	Cylinder(int t_x, int t_y, int t_r, int t_h) :
		h(t_h), Circle(t_x, t_y, t_r) {}
	double getV() {
		return Circle::getArea() * h;
	}
	friend ostream &operator<<(ostream &os, Cylinder &b) {
		os << "(x = " << b.getX() << ", y = " << b.getY() << ")"
			<< "\tr = " << b.getR() << "\th = " << b.h << "\tV = " << b.getV();
		return os;
	}
	friend istream &operator>>(istream &is, Cylinder &b) {
		is >> b.h;
		return is;
	}
	double getH() { return h; }
};
int main() {
	Cylinder a(1, 2, 3, 4);
	cout << a << endl;
	cin >> a;
	cout << a << endl;
	system("pause");
	return 0;
}
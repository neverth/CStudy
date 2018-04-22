/*
*C++作业09
*定义一个point类，包含私有数据成员x，y，成员函数包括无参构造函数，带参构造函数，
*set和get属性函数。定义circle类，从point类公有派生，增加数据成员半径r，
*成员函数包括无参构造函数，带参构造函数，计算面积函数getarea。
*在main函数中定义一个circle的对象，并计算其面积。
*2018/04/22
*/
#include <iostream>
using namespace std;
const float PI = 3.1415926;
class Point {
private:
	int x, y;
public:
	Point() {}
	Point(int t_x, int t_y):x(t_x), y(t_y){}
	void set_x(const int &t_x) {
		x = t_x;
	}
	void set_y(const int &t_y) {
		x = t_y;
	}
	int get_x() { 
		return x;
	}
	int get_y() {
		return y;
	}
};
class Circle :public Point {
private:
	float r;
public:
	Circle() {}
	Circle(int t_x, int t_y, float t_r) :Point(t_x, t_y), r(t_r) {}
	float get_area() {
		return r * r * PI;
	}
};
int main() {
	Circle a(88, 99, 18);
	cout << "面积为： " << a.get_area() << endl;
	cout << "其坐标为：（" << a.get_x() << ", " << a.get_y() << ")" << endl;
	a.set_x(55);
	a.set_y(66);
	cout << "更改之后其坐标为：（" << a.get_x() << ", " << a.get_y() << ")" << endl;
	system("pause");
	return 0;
}
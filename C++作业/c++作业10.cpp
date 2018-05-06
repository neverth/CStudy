/*先建立一个Point（点）类，包含数据成员x，y（坐标点）。
以它为基类，派生出一个Circle（圆）类，增加数据成员r（半径），
再以Circle类为直接基类，派生出一个Cylinder（圆柱体）类，
在增加数据成员h（高）。各类中都有一个cal函数
（其中point中为虚函数，circle中为求面积，cylinder中为求体积），
通过使用point类的指针来指向不同对象，来输出不同结果*/

#include<iostream>
using namespace std;
const double PI = 3.1415926;
class Point {
private:
	int x, y;
public:
	Point(int t_x = 0, int t_y = 0):
	x(t_x), y(t_y){}
	virtual double cal() {
		return x;
	}
};
class Circle:public Point {
private:
	double r;
public:
	Circle(int t_x = 0, int t_y = 0, double t_r = 0):
	r(t_r), Point(t_x, t_y) {}
	double cal() {
		return r * r * PI;
	}
};
class Cylinder :public Circle {
private:
	double h;
public:
	Cylinder(int t_x = 0, int t_y = 0, double t_r = 0, double t_h = 0):
	h(t_h), Circle(t_x, t_y, t_r){}
	double cal() {
		return Circle::cal() * h;
	}
};
int main(){	
	Point *p;
	Cylinder a1(1, 2, 3, 4);
	p = &a1;
	cout << "体积为：" << p->cal() << endl;
	Circle a2(1, 2, 3);
	p = &a2;
	cout << "面积为：" << p->cal() << endl;
	Point a3(1, 2);
	p = &a3;
	cout << "x = " << p->cal() << endl;
	system("pause");
	return 0;
}
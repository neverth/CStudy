///*编写一个带默认形参值函数，求两个点的距离（默认为到原点（0，0）的距离），并通过主函数输入两个点，完成不同的调用。
//提示：float distance(float x1, float y1, float x2, float y2)*/
//
////这道题的简单解法如下
//#include<iostream>
//#include<cmath>
//using namespace std;
//float distance(float x1, float y1, float x2 = 0, float y2 = 0) {
//	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//}
//int main() {
//	cout << "两点间的距离：" << distance(7, 8, 9, 10) << endl;
//	cout << "点到原点的距离：" << distance(88, 99) << endl;
//	system("pause");
//	return 0;
//}
//
//
///*这道题的更高级解法如下*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//class Point {
//private:
//	float x, y;
//public:
//	Point(float t_x = 0, float t_y = 0)
//		:x(t_x), y(t_y) {}//构造函数
//	~Point() {}	  //析构函数
//	float distance(Point t_d1, Point t_d2);
//	friend ostream &operator<< (ostream &os, const Point &d);//<< 运算符重载
//	friend istream &operator>> (istream &is, Point &d);// >> 运算符重载
//};
//ostream &operator<< (ostream &os, const Point &d) {
//	os << "(" << d.x << ", " << d.y << ")";
//	return os;
//}
//istream &operator>> (istream &is, Point &d) {
//	cout << "x = ";
//	is >> d.x;
//	cout << "y = ";
//	is >> d.y;
//	return is;
//}
//float Point::distance(Point t_d1, Point t_d2) {
//	return sqrt((t_d1.x - t_d2.x)*(t_d1.x - t_d2.x) + (t_d1.y - t_d2.y)*(t_d1.y - t_d2.y));
//}
//
//int main() {
//	cout << "请输入第一个点的坐标" << endl;
//	Point d1;
//	cin >> d1;
//	cout << "你输入的点为：" << d1 << endl;
//	cout << endl << "请输入第二个点的坐标" << endl;
//	Point d2;
//	cin >> d2;
//	cout << "你输入的点为：" << d2 << endl;
//	cout << "两点间的距离为： " << d1.distance(d1, d2) << endl;
//	system("pause");
//	return 0;
//}

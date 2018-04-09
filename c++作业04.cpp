///*类与对象使用初步：设计一个point类，含相关的数据成员和成员函数，
//完成一个类对象的创建，显示等基本功能*/
//#include <iostream>
//using namespace std;
//class Point {
//private:
//	float x, y;
//public:
//	Point(float t_x = 0, float t_y = 0)
//			:x(t_x), y(t_y) {}//构造函数
//	~Point() {}
//	void setx(float t_x) {
//		x = t_x;
//	}
//	void sety(float t_y) {
//		y = t_y;
//	}
//	void show();
//};
//void Point::show() {
//	cout << "x = " << x << "\t";
//	cout << "y = " << y << endl;
//}
//int main() {
//	Point b1;
//	b1.show();
//	Point b2(3, 4);
//	b2.show();
//	Point b3(99);
//	b3.show();
//	b3.setx(250);
//	b3.sety(520);
//	b3.show();
//	system("pause");
//	return 0;
//}
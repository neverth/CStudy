/*有两个长方柱，其长、宽、高分别为：（
1）12，20，25；（2）10，30，20。
分别求他们的体积。
编一个基于对象的程序，且定义两个构造函数，其中一个有参数，一个无参数。*/

//常规解法
#include<iostream>
using namespace std;
class Rectangle{
private:
	float x, y, z;
public:
	Rectangle();
	Rectangle(float t_x, float t_y, float t_z);
	float getVolume();
	~Rectangle();
};
Rectangle::Rectangle() {}
Rectangle::Rectangle(float t_x, float t_y, float t_z):
			x(t_x), y(t_y), z(t_z){}
float Rectangle::getVolume() {
	return x * y * z;
}
Rectangle::~Rectangle() {}
int main() {
	Rectangle rectangle1(12, 20, 25);
	Rectangle rectangle2(10, 30, 20);
	cout << "rectangle1 的体积为： " << rectangle1.getVolume()
		<< "\nrectangle2 的体积为： " << rectangle2.getVolume()
		<< endl;
	system("pause");
	return 0;
}



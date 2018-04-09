//用const修饰数据成员
#include<iostream>
using namespace std;
class Circle
{
public:
	Circle(double con_radius);
	double circumference();
	~Circle();

private:
	double m_fRadius;
	const double PI;
};

Circle::Circle(double con_radius):PI(3.14){
	m_fRadius = con_radius;
}
double Circle::circumference() {
	return 2 * PI *m_fRadius;
}

Circle::~Circle(){
}
int main() {
	Circle c1(2);
	cout << "circumference : " << c1.circumference() << endl;
	system("pause");
	return 0;
}
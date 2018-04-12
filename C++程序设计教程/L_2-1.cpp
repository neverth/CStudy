/*对象的创建于使用*/
#include<iostream>
using namespace std;
class Car														
{
public:
	void disp_welcomemsg();
	int get_wheels();
	void set_wheels(int n );
private:
	int m_nwheels;
};
void Car::disp_welcomemsg() {
	cout << "welcome to the car world !" << endl;
}
int Car::get_wheels() {
	return m_nwheels;
}
void Car::set_wheels(int n) {
	m_nwheels = n;
}
int main() {
	Car mycar;
	mycar.disp_welcomemsg();
	mycar.set_wheels(4);
	cout << "wheels = " << mycar.get_wheels() << endl;
	system("pause");
	return 0;
}

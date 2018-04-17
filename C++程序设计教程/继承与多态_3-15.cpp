//多重继承引起的二义性————派生类中访问公有成员时唱产生二义性
#include <iostream>
using namespace std;
class Animal {
protected :
	int age;
public:
	Animal(int con_age):age(con_age) {}
};
class Bird:public Animal {
private:
	int m_nFlightAltitude;
public:
	Bird(int fh, int age):m_nFlightAltitude(fh), Animal(age){
		cout << "bird 构造函数" << endl;
	}
	int get_flightAltitude() {
		return m_nFlightAltitude;
	}
};
class Fish:public Animal {
private:
	int m_nSwimSpeed;
public:
	Fish(int sp, int age) :m_nSwimSpeed(sp), Animal(age) {
		cout << "fish 构造函数" << endl;
	}
	int get_swimSpeed() {
		return m_nSwimSpeed;
	}
};
class WaterBird :public Bird, public Fish {
public:
	WaterBird(int age1, int age2, int fh, int speed):
		Bird(fh, age1), Fish(speed, age2)  {
		cout << "waterbird 构造函数" << endl;
	}
	void print_animalAge() {
		cout << "age = " << Bird::age << endl;
		cout << "age = " << Fish::age << endl;
	}
};
int main() {
	WaterBird waterbird(5, 6, 20, 30);
	cout << "flightAltitude = " << waterbird.get_flightAltitude() << endl;
	cout << "swimSpeed = " << waterbird.get_swimSpeed() << endl;
	waterbird.print_animalAge();
	system("pause");
	return 0;
}
//多重继承————带有对象成员的派生类构造函数的定义及使用方法
#include <iostream>
using namespace std;
class Date {
private:
	int year, month, day;
public :
	Date(int con_year, int con_month, int con_day):
	year(con_year), month(con_month), day(con_year){
		cout << "正在执行date构造函数" << endl;
	}
	void print_date() {
		cout << year << "/" << month << "/" << day << endl;
	}
	~Date() {
		cout << "正在执行date析构函数" << endl;
	}
};
class Bird {
private:
	int m_nFlightAltitude;
public:
	Bird(int fh):m_nFlightAltitude(fh){
		cout << "bird 构造函数" << endl;
	}
 	void fly_in_shy() {
		cout << "bird fiy in shy" << endl;
	}
	void breath() {
		cout << "bird breath " << endl;
	}
	int get_flightAltitude() {
		return m_nFlightAltitude;
	}
	~Bird() {
		cout << "正在执行bird析构函数" << endl;
		system("pause");
	}
	
};
class Fish {
private:
	int m_nSwimSpeed;
public:
	Fish(int sp) :m_nSwimSpeed(sp){
		cout << "fish 构造函数" << endl;
	}
	void swim_in_water() {
		cout << "fish swim in water" << endl;
	}
	void breath() {
		cout << "fish breath" << endl;
	}
	int get_swimSpeed() {
		return m_nSwimSpeed;
	}
	~Fish() {
		cout << "正在执行fish析构函数" << endl;
	}
};
class WaterBird :public Bird, public Fish {
public:
	WaterBird(int year, int month, int day, int fh, int speed):
		Bird(fh), Fish(speed), birthday(year, month, day)  {
		cout << "waterbird 构造函数" << endl;
	}
	void fly_swim() {
		cout << "waterbird can fly and swim" << endl;
	}
	void breath() {
		cout << "waterbird breath" << endl;
	}
	void print_birthday() {
		birthday.print_date();
	}
	~WaterBird() {
		cout << "正在执行waterbird析构函数" << endl;
	}
private:
	Date birthday;
};
int main() {
	WaterBird waterbird(1998, 12, 88, 20, 30);
	waterbird.fly_in_shy();
	waterbird.fly_swim();
	waterbird.Fish::breath();
	waterbird.Bird::breath();
	waterbird.swim_in_water();
	cout << "waterbird flight altitude: " << waterbird.get_flightAltitude() << endl;
	cout << "waterbird swimspeed: " << waterbird.get_swimSpeed() << endl;
	waterbird.print_birthday();
	//system("pause");
	return 0;
}
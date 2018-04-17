//多重继承————声明多重继承的方式
#include <iostream>
using namespace std;
class Bird {
public:
	void fly_in_shy() {
		cout << "bird fiy in shy" << endl;
	}
	void breath() {
		cout << "bird breath " << endl;
	}
};
class Fish {
public:
	void swim_in_water() {
		cout << "fish swim in water" << endl;
	}
	void breath() {
		cout << "fish breath" << endl;
	}
};
class WaterBird :public Bird, public Fish {
public:
	void fly_swim() {
		cout << "waterbird can fly and swim" << endl;
	}
};
int main() {
	WaterBird waterbird;
	waterbird.fly_in_shy();
	waterbird.fly_swim();
	waterbird.Fish::breath();
	waterbird.Bird::breath();
	waterbird.swim_in_water();
	system("pause");
	return 0;
}
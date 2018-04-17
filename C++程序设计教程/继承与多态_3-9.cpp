//派生类——隐藏基类函数
#include <iostream>
using namespace std;
class Animal {
public:
	void speak() {
		cout << "animal language! " << endl;
	}
};
class Cat:public Animal{
public :
	void speak() {
		cout << "cat language: miaomiao!" << endl;
	}
};
int main() {
	Animal *p;
	Cat cat;
	p = &cat;
	p->speak();
	cat.speak();
	cat.Animal::speak();
	system("pause");
	return 0;
}
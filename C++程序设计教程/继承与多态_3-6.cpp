//继承与多态——类型兼容
#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	int get_age() {
		return m_nAge;
	}
	int get_weight() {
		return m_nWeight;
	}
	void set_age(int param_age) {
		m_nAge = param_age;
	}
	void set_weight(int param_weight) {
		m_nWeight = param_weight;
	}
	void speak() {
		cout << "animal language" << endl;
  	}
private:
	int m_nWeight;
	int m_nAge;
};
class Cat:public Animal{
private:
	string m_strName;
public :
	void set_name(string param_name) {
		m_strName = param_name;
	}
	void speak() {
		cout << "cat language: miaomiao" << endl;
	}
};
int main() {
	Cat cat;
	Animal *pAnimal = &cat;
	pAnimal->set_age(5);
	cout << "base type:age = " << pAnimal->get_age() << endl;
	cat.speak();
	pAnimal->speak();
	system("pause");
	return 0;
}
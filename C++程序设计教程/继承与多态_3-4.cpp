//继承与多态――保护继承――protected方式

#include <iostream>
#include <string>
using namespace std;
class Animal{
public:
	void set_weightBase(int weight) {
		m_nWeightBase = weight;
	}
	int get_weightBase() {
		return m_nWeightBase;
	}
	void set_AgeBase(int age) {
		m_nAgeBase = age;
	}
private:
	int m_nWeightBase;
protected:
	int m_nAgeBase;
};
class Cat :protected Animal {
private:
	string m_nName;
public:
	Cat(string con_name) :m_nName(con_name) {
	}
	void set_print_weight() {
		set_weightBase(6);
		cout << m_nName << "  weight = " << get_weightBase() << endl;
	}
};
class PersianCat :protected Cat {
private:
public:
	PersianCat() :Cat("persian cat") {}
	void persion_set_print_age() {
		set_AgeBase(5);
		cout << "persion cat, age = " << m_nAgeBase << endl;
	}
};
int main() {
	PersianCat persian_cat;
	persian_cat.persion_set_print_age();
	system("pause");
	return 0;
}
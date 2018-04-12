//继承权限
#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	void set_weight(int weight) {
		m_nWeightBase = weight;
	}
	int get_weight() {
		return m_nWeightBase;
	}
	void set_age(int age) {
		m_nAgeBase = age;
	}
private:
	int m_nWeightBase;
protected:
	int m_nAgeBase;
};
class Cat :public Animal {
public:
	Cat(string con_name) :m_strName(con_name) {}
	void print_age() {
		cout << m_strName << "  age = " << m_nAgeBase << endl;
	}
private:
	string m_strName;
};
int main() {
	Cat cat("liyang");
	cat.set_age(5);
	cat.set_weight(6);
	cat.print_age();
	cout << "cat weight = " << cat.get_weight() << endl;
	system("pause");
	return 0;
}
//继承与多态
#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	void speak() {
		cout << "animal language!" << endl;
	}
};
class Cat :public Animal {
public:
	Cat(string con_name) :m_strName(con_name) {}
	void print_name() {
		cout << "cat name: " << m_strName << endl;
	}
private:
	string m_strName;
};
int main() {
	Cat cat("liyang");
	cat.print_name();
	cat.speak();
	system("pause");
	return 0;
}
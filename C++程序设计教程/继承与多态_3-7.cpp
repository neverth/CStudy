//派生类——构造函数
#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	Animal(int con_weight, int con_age):
		m_nWeight(con_weight), m_nAge(con_age){
		cout << "正在执行animal构造函数" << endl;
	}
private:
	int m_nWeight;
	int m_nAge;
};
class Cat:public Animal{
private:
	string m_strName;
public ://派生类的构造函数在前再后都可以
	Cat(string con_name, int con_weight, int con_age):
		Animal(con_weight, con_age), m_strName(con_name){
		cout << "正在执行cat构造函数" << endl;
	}
};
int main() {
	Cat cat("persian", 5, 7);
	system("pause");
	return 0;
}
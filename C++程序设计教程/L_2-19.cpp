//用const修饰的成员函数
#include <iostream>
#include <string>
using namespace std;
class Student{
public:
	Student(string con_name, int con_id) :
		m_strName(con_name), m_nID(con_id) {}
	~Student() {}
	string get_stdname() const {
		return m_strName;
	}
	void print_strname() {
		cout << "std's nama: " << m_strName << endl;
	}
private:
	string m_strName;
	int m_nID;
};

int main() {
	Student std_tom("tom", 20);
	std_tom.print_strname();
	cout << std_tom.get_stdname() << endl;
	system("pause");
	return 0;
}
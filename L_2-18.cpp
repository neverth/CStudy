//静态成员函数
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student(string con_name, int con_id);
	~Student();
	string get_stdname();
	static int get_totalnum();
	static int get_totalnum(Student &stdref);

private:
	static int s_nTotalNum;
	string m_strName;
	int m_nID;
};

Student::Student(string con_name, int con_id)/*:m_strName(con_name)*/ {
	s_nTotalNum++;
	m_nID = con_id;
	m_strName = con_name;
}
string get_stdname() {
	
}

Student::~Student(){
	s_nTotalNum--;
	cout << "析构函数执行" << "s_nTotalNum = " << endl;
	if (s_nTotalNum == 0 )
		system("pause");
}
string Student::get_stdname() {
	return m_strName;
}
int Student::get_totalnum(Student &stdref) {
	cout << stdref.m_strName << "enter the school!" << endl;
	return s_nTotalNum;
}
int Student::get_totalnum() {
	return s_nTotalNum;
}
int Student::s_nTotalNum = 0;
int main() {
	
}


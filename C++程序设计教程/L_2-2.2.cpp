#include<iostream>  
#include<string>  
using namespace std;
class Stu_Info_Mange
{
private:
	int sno;
	string sname;
	int age;
	int grade;
public:
	Stu_Info_Mange(int s = 0, string n = "", int a = 0, int g = 0)
	{
		sno = s;
		sname = n;
		age = a;
		grade = g;
	}
	Stu_Info_Mange &Setsname(string s)   //所有的相关函数，都返回该对象的引用，这样就可以实现级联，方便编码</span>  
	{
		this->sname = s;
		return (*this);
	}
	Stu_Info_Mange &Setsno(int sno)
	{
		this->sno = sno;
		return *this;
	}
	Stu_Info_Mange &Setgrade(int grade)
	{
		this->grade = grade;
		return *this; 
	}
	Stu_Info_Mange &Setage(int age)
	{
		this->age = age;
		return *this; 
	}
	void print()
	{
		cout << "the sname is " << this->sname << endl;
		cout << "the sno   is " << this->sno << endl;
		cout << "the age   is " << this->age << endl;
		cout << "the grade is " << this->grade << endl << endl;

	}
};
int main()
{
	Stu_Info_Mange sim;//  使用默认参数  
	sim.Setsname("张三").Setsno(457).Setgrade(2012).Setage(20);  //级联  
																					  //使用this指针使串联的函数调用成为可能  
	sim.print();
	system("pause");

	return 0;

}
/*
*声明一个教师（Teacher）类和一个学生（Student）类，
*用多重继承的方式声明一个研究生（Graduate）派生类。
*教师类中包括数据成员name（姓名），age（年龄），title（职称）。
*学生类中包括数据成员name（姓名），age（年龄），score（成绩）。
*在定义派生类对象时给出初始化的数据（自已定），然后输出这些数据。
*初值自拟
*/

#include<iostream>
#include<string>
using namespace std;
class Teacher {
private:
	string tea_name;
	int tea_age;
	string title;
public:
	Teacher(string tea_name_, int tea_age_, string title_) :
	tea_name(tea_name_), tea_age(tea_age_), title(title_){}
	void tea_show() {
		cout << "老师姓名：" << tea_name << endl;
		cout << "老师年龄：" << tea_age << endl;
		cout << "老师职位：" << title << endl;
	}
};
class Student {
private:
	string stu_name;
	int stu_age;
	string socre;
public:
	Student(string stu_name_, int stu_age_, string socre_):
	stu_name(stu_name_), stu_age(stu_age_), socre(socre_){}
	void stu_show() {
		cout << "学生姓名：" << stu_name << endl;
		cout << "学生年龄：" << stu_age << endl;
		cout << "学生成绩：" << socre << endl;
	}
};
class Graduate:public Teacher, public Student {
private:
	string major;
public:
	Graduate(string major_, string tea_name_, int tea_age_, string title_,
		string stu_name_, int stu_age_, string socre_) :
	major(major_), Teacher(tea_name_, tea_age_, title_), 
	Student(stu_name_, stu_age_, socre_){}
	void gra_show() {
		cout << "专业：" << major << endl;
	}
};
int main(){	
	Graduate gra1("软件", "小明", 44, "院长", "小花", 20, "59");
	gra1.tea_show();
	gra1.gra_show();
	gra1.stu_show();
	system("pause");
	return 0;
}
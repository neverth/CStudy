////this 指针加深理解练习
//#include<iostream>  
//#include<string>  
//using namespace std;
//class Stu_Info_Mange{
//public:
//	Stu_Info_Mange(int s = 0, string n = "", int a = 0, int g = 0)
//	{
//		sno = s;
//		sname = n;
//		age = a;
//		grade = g;
//	}
//	void Setsname(string sn)   //使用this指针进行赋值  
//	{
//		sname = sn;
//	}
//	int  Setage(int a)
//	{
//		age = a;
//		return age; //使用this指针返回该对象的年龄  
//	}
//	void print()
//	{
//		cout << "the sname is " << sname << endl;  //显式this指针通过箭头操作符访问  
//		cout << "the sno   is " << sno << endl;//隐式使用this指针打印  
//		cout << "the age   is " << age << endl;//显式使用this指针通过远点操作符  
//		cout << "the grade is " << grade << endl << endl;
//	}
//private:
//	int sno;
//	string sname;
//	int age;
//	int grade;
//
//};
//int main()
//{
//	Stu_Info_Mange sim1(761, "张三", 19, 3);
//	sim1.print();      //输出信息  
//	sim1.Setage(12);  //使用this指针修改年龄  
//	sim1.Setsname("李四");
//	sim1.print();     //再次输出 
//	Stu_Info_Mange sim2(677, "王五", 88, 3);
//	sim2.print();
//	sim2.Setage(99);
//	sim2.print();
//	system("pause");
//	return 0;
//}
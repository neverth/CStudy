//
///*定义一个基类本科学生Student类，有学号number和英语成绩english，
//计算机成绩computer、平均成绩average四个数据成员，定义多个构造函数
//（以便实现多样化构建）、一个析构函数，一个可计算平均成绩的函数Getaverge, 
//一个可显示其学号和平均成绩的函数Show。并在主函数中完成调用测试。*/
//
////常规解法
//#include<iostream>
//using namespace std;
//class Student {
//private:
//	int number;
//	float sco_eng;
//	float sco_com;
//	float sco_ave;
//public:
//	Student() {}
//	Student(int t_number, float t_eng, float t_com) :
//		number(t_number), sco_eng(t_eng), sco_com(t_com) {}
//	Student(Student &t_stu) {
//		number = t_stu.number;
//		sco_eng = t_stu.sco_eng;
//		sco_com = t_stu.sco_com;
//	}
//	void show() {
//		cout << "number:" << number << endl;
//		cout << "english:" << sco_eng << endl;
//		cout << "computer:" << sco_com << endl;
//		cout << "average:" << getAverage() << endl;
//	}
//	float getAverage() {
//		sco_ave = (sco_eng + sco_com) / 2;
//		return (sco_eng + sco_com) / 2;
//	}
//	~Student() {
//		static int i = 0;
//		if (i == 2)
//			system("pause");
//		i++;
//	}
//};
//int main() {
//	Student stu1;
//	stu1.show();
//	cout << endl;
//	Student stu2(1, 99.99, 88.88);
//	cout << endl;
//	stu2.show();
//	Student stu3(stu2);
//	cout << endl;
//	stu3.show();
//	cout << endl << stu3.getAverage() << endl;
//	return 0;
//}
//
//
////更深入的理解
//#include<iostream>
//using namespace std;
//static int arr[10];//用于存储this指针的int数值
//static int num = 0;//用于计算this指针创建的数目,全局静态变量
//class Student {
//private:
//	int number;
//	float sco_eng;
//	float sco_com;
//	float sco_ave;
//public:
//	Student();
//	Student(int t_number, float t_eng, float t_com);
//	Student(Student &t_stu);
//	void show();
//	float getAverage();
//	~Student();
//};
//Student::Student() {
//	cout << "这是在执行无参构造函数, ";
//	cout << "这个无参构造函数“" << num + 1 << "”的指针为 " << this << endl;
//	arr[num] = (int)(this);
//	num++;
//}
//Student::Student(int t_number, float t_eng, float t_com):
//	number(t_number), sco_eng(t_eng), sco_com(t_com){
//	cout << "这是在执行构造函数, ";
//	cout << "这个构造函数“" << num + 1 << "”的指针为 " << this << endl;
//	arr[num] = (int)(this);
//	num++;
//}
//Student::Student(Student &t_stu) {//这是浅拷贝
//	cout << "正在执行拷贝构造函数, ";
//	cout << "这个拷贝构造函数“" << num + 1 << "”的指针为 " << this << endl;
//	arr[num] = (int)this;
//	number = t_stu.number;
//	sco_eng = t_stu.sco_eng;
//	sco_com = t_stu.sco_com;
//	num++;
//}
//void Student::show() {
//	cout << "number:" << number << endl;
//	cout << "english:" << sco_eng << endl;
//	cout << "computer:" << sco_com << endl;
//	cout << "average:" << getAverage() << endl;
//}
//float Student::getAverage() {
//	sco_ave = (sco_eng + sco_com) / 2;
//	return (sco_eng + sco_com) / 2;
//}
//Student::~Student() {
//	static int t = 0;//此处请慢慢理解,局部静态变量
//	cout << "\n正在执行析构函数, ";
//	for (int i = 0; i < 10; i++) {
//		if ((int)this == arr[i]) {
//			cout << "当前正在被析构的构造函数为：构造函数 “" << i + 1 << "” 其指针为 " << this << endl;
//			break;
//		}
//	}
//	if (t == 2)
//		system("pause");//如果此处不这样设置运行之后窗口将一闪而过
//	t++;
//}
//int main() {
//	cout << "\n构建学生对象 1 " << endl;
//	Student stu1;
//	cout << "\n学生1数据为：" << endl;
//	stu1.show();
//	cout << "\n构建学生对象 2 " << endl;
//	Student stu2(1, 99.99, 88.88);
//	cout << "\n学生2数据为：" << endl;
//	stu2.show();
//	cout << "\n构建学生对象 3 " << endl;
//	Student stu3(stu2);
//	cout << "\n学生3数据为：" << endl;
//	stu3.show();
//	return 0;
//}

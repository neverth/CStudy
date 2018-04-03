//二进制文件的读写
#include <iostream>
#include <fstream>
using namespace std;
struct Student {
	char name[20];
	int age;
	char sex;
};
struct Date {
	int mondy, day, year;
};
int main() { 
	//写文件
	Student stu[3];
	cout << "please input 3 students's data: " << endl;
	for (int i = 0; i < 3; i++)
		cin >> stu[i].name >> stu[i].age >> stu[i].sex;
	ofstream ofs("C:\\Users\\LIYANG\\Desktop\\123.txt", ios::out | ios_base::binary);
	if (!ofs)
		cerr << "open failed" << endl;
}
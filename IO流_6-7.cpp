//精度， 域宽， 填充字符的设置
//ios类重载了两个设置精度的成员函数
// int ios::precision();
// int ios::precision(int n);设置该精度后直到下一次精度设置之前都有效
// 域宽设置类似于精度，只是他只是在下一次格式化输出时有效，其后就没有影响了
#include<iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main() {
	double d = sqrt(2.0);
	cout << "精度设置" << endl;
	for (int i = 0; i < 54; i++) {
		cout.precision(i);
		cout << i << "\t" << d << endl;
	}
	cout << "\n请等待..." << endl;
	Sleep(3000);
	cout << "当前精度为：" << cout.precision() << endl;
	cout << "当前域宽： " << cout.width() << endl;
	cout << " 更改之后" << endl;
	cout.precision(4);
	cout.width(10);
	cout << d << endl;
	cout << d << endl;
	cout << "当前填充字符： " << cout.fill() << "|" << endl;
	cout.width(10);
	cout << setfill('*') << d << endl;
	system("pause");
	return 0;
}
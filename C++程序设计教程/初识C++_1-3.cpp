//const_cast<>
#include <iostream>
using namespace std;
int main() {
	int num1 = 100;
	const int *p = &num;
	int *p2 = const_cast<int*>(p1);//将常量指针p1去掉const属性
	*p2 = 200;
	cout << "num = " << num << endl;
	system("pause");
	return 0;
}
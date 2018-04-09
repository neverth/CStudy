///*用C++语法，改写一个完整的求一元二次方程的根的程序。
//
//要求输入a, b, c三个参数，根据参数判断并输出相应的根的情况。*/
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//int main() {
//	string value, a, b, c;
//	int i;
//	float d;
//	cout << "\t【一元二次方程求根】\n" << endl;
//	cout << "请输入一元二次方程的一般表达式，例（6x^2-5.55x-9.99=0，请勿输入空格且必须写常数项）" << endl;
//	cin >> value;
//	cout << "你输入的方程为: " << value << endl;
//	for (i = 0; i < size(value); i++) {
//		if (value[i] == 'x')
//			break;
//		a += value[i];
//	}
//	for (; i < size(value); i++) {
//		if (value[i + 3] == 'x')
//			break;
//		b += value[i + 3];
//	}
//	for (; i < size(value); i++) {
//		if (value[i + 4] == '=')
//			break;
//		c += value[i + 4];
//	}
//	if (a == "" ||a == "-"||a == "+")
//		a = (a == "") ? a = "1" : a = "-1";
//	if (b == "+" ||b == "-")
//		b = (b == "+") ? b = "1" : b = "-1";
//	cout << " a 的值为 " << atof(a.c_str()) << endl;//atol是std函数库中的函数，作用是把char*转化为float
//	cout << " b 的值为 " << atof(b.c_str()) << endl;//在此例中为string -> char * -> float
//	cout << " c 的值为 " << atof(c.c_str()) << endl;
//	d = atof(b.c_str()) * atof(b.c_str()) - 4 * atof(a.c_str())*atof(c.c_str());
//	if (d < 0)
//		cout << "该方程没有实数根" << endl;
//	if (d == 0)
//		cout << "该方程有且只有一个根，其值为 " << (-atof(b.c_str())) / (2 * atof(a.c_str())) << endl;
//	if (d > 0) {
//		cout << "该方程有两个根，分别为 x1 = " << (-atof(b.c_str()) + sqrt(d)) / (2 * atof(a.c_str()))
//			<< "\tx2 = " << (-atof(b.c_str())*atof(b.c_str()) - sqrt(d)) / (2 * atof(a.c_str())) << endl;
//	}
//	system("pause");
//	return 0;
//}

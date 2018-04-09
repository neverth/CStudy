//get函数
#include <iostream>
using namespace std;
int main() {
	// 第一种形式调用，返回ascll码
	cout << "first call: " << cin.get() << endl;
	char ch;
	//第二种
	cin.get(ch);
	cout << "second call: " << ch << endl;
	char str[10];
	//读取得是size-1个字符
	cin.get(str, 8, 'T');
	cout << "third call: " << str << endl;
	system("pause");
	return 0;
}
//toupper 函数的使用用法
/*
*原型：int toupper(int c);其中括号里面的int类型需要注意
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<string> str;
	string temp;
	while (cin >> temp) {
		str.push_back(temp);
	}
	for (string &i : str)
		for(int j = 0; j < i.length(); ++j)
			i[j] = toupper(i[j]);
	for (string i : str)
		cout << i << "  ";
	cout << endl;
	system("pause");
	return 0;
}
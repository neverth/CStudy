//C++中的字符串——string
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "hello c++";
	s[7] = '_';
	s[8] = '-';
	cout << s << endl;
	system("pause");
	return 0;
}
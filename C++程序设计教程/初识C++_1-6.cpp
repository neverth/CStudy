//C++中的字符串——string
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	cout << "please input two strings: " << endl;
	cin >> s1 >> s2;
	if (s1 > s2)
		cout << "the first string is greater" << endl;
	else if (s1 < s2)
		cout << "the second string is greater" << endl;
	else
		cout << "two strings is equal" << endl;
	system("pause");
	return 0;
}
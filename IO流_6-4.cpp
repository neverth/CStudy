//getline函数
#include <iostream>
using namespace std;
//其函数声明为
//istream &getline(char *dst, streamsize size, char delimiter = '\n'(默认结束符));
int main() {
	int line, max = 0;
	char str1[100], str2[100];
	cout << "please input some string: " << endl;
	while (cin.getline(str1, 100)) {
		line = cin.gcount();
		if (line > max) {
			max = line;
			strcpy_s(str2, str1);
		}
	}

	cout << endl;
	cout << "the longest string is: " << str2 << endl;
	cout << "the length is : " << max << endl;
	system("pause");
	return 0;
}
//文件的打开和关闭
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream ifs;
	ifs.open("C:\\Users\\LIYANG\\Desktop\\123.txt", ios::in);
	if (!ifs)
		cout << "open failed" << endl;
	else
		cout << "open success" << endl;
	ifs.close();
	system("pause");
	return 0;
}
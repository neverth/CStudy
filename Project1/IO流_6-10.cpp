///*文本文件的读写 */
//#include <iostream>
//#include <fstream>
//#include <windows.h>
//using namespace std;
//int main() {
//	ofstream ofs;
//	ofs.open("C:\\Users\\LIYANG\\Desktop\\123.txt", ios::trunc);
//	char ch = 'a';
//	if (ofs) {
//		cout << "正在删除原有全部数据" << endl;
//		for (int i = 1; i <= 26; i++) {
//			if (i % 5 == 0)
//				ofs << endl;
//			cout << "正在写入： " << ch << endl;
//			Sleep(25);
//			ofs << ch;
//			ch++;
//		}
//		cout << "write success" << endl;
//	}
//	else
//		cout << "write failed" << endl;
//	ofs.close();
//	system("pause");
//	return 0;
//}
//在while中使用cin>>a 为条件，注意事项
/*
*有一个要注意的地方，以前不理解在while里面用cin >> val是什么意思，
*用这个当条件的话，通过检测其流的状态来判断结束；
*（1）若流是有效的，即流未遇到错误，那么检测成功；
*（2）若遇到文件结束符，或遇到一个无效的输入时（例如本题输入的值不是一个整数），
*istream对象的状态会变为无效，条件就为假；
*怎样才是文件结束符呢？
*不同的操作系统有不同的约定，在windows系统中，
*输入文件结束符的方法是先按Ctrl + Z，然后再按Enter；
*在UNIX系统中，包括Mac OS X系统中，文件结束输入为Ctrl + D;
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<string> a;
	string b;
	while (cin >> b) {
		a.push_back(b);
	}
	system("pause");
	return 0;
}
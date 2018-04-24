//isspace 函数的使用用法
/*
*原型：int isspace(int c);其中括号里面的int类型需要注意
*判断输入字符是否为空格/回车/制表符等 
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;	
//最好可以自己实现
int myIsspace(char c){
    if(c =='\t'|| c =='\n'|| c ==' ')
        return1;
    else
        return0;
}
int main() {
	string str{ "hello world!" };//              直接跳出循环
	for (auto i = str.begin(); i != str.end() && !isspace(*i); ++i)
		*i = toupper(*i);
	cout << str << endl;
	system("pause");
	return 0;
}



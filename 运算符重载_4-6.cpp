//赋值运算符重载
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Internet
{
private:
	char *name;
	char *url;
public:
	friend ostream &operator<< (ostream &os, const Internet &inter);
	Internet(char* name, char *url);
	Internet(Internet &temp);
	~Internet() {
		delete[]name;
		delete[]url;
	}
	Internet &operator= (Internet &temp);
};
ostream &operator<< (ostream &os, const Internet &inter) {
	os << "name = " << inter.name << "\t" << "url = " << inter.url;
	return os;
}

Internet::Internet(char *name, char *url){
	this->name = new char[strlen(name) + 1];
	this->url = new char[strlen(url) + 1];
	if (name)
		strcpy(this->name, name);
	if (url)
		strcpy(this->url, url);
}
Internet::Internet(Internet &temp) {
	this->name = new char[strlen(temp.name) + 1];
	this->url = new char[strlen(temp.url) + 1];
	if (name)
		strcpy(this->name, temp.name);
	if (url)
		strcpy(this->url, temp.url);
}
/*从这两个函数的构造来说，两个函数的整体部分都相同，但是对赋值运算符重载函数
来看，声明和定义的地方函数写法不一样，声明地方的写法跟大部分重载为类的成员函数
一样，但是定义的部分有差别,还有一个差别就是拷贝构造函数没有返回值，但是赋值运算符重载函数
需要有返回值*/
Internet &Internet::operator= (Internet &temp) {
	delete[]name;
	delete[]url;
	this->name = new char[strlen(temp.name) + 1];
	this->url = new char[strlen(temp.url) + 1];
	if (name)
		strcpy(this->name, temp.name);
	if (url)
		strcpy(this->url, temp.url);
	return *this;
}
int main() {
	Internet a("李洋", "goxx.site");
	cout << "a: " <<  a << endl;
	Internet b(a);
	cout << "b: " << b << endl;
	Internet c("舒华", "love you");
	cout << "c: " << c << endl;
	b = c;
	cout << "赋值之后 b: " << b << endl;
	system("pause");
	return 0;
}

////对运算符重载_4-6的string改写
#include <iostream>
#include <string>
using namespace std;
class Internet {
private:
	string name;
	string url;
public:
	Internet(string t_name, string t_url) :name(t_name), url(t_url){}
	~Internet() {}
	friend ostream &operator<< (ostream &os, Internet temp);
	Internet(Internet &temp);
	Internet &operator= (Internet &temp);
};
ostream &operator<< (ostream &os, Internet temp) {
	os << "name: " << temp.name << "\turl: " << temp.url;
	return os;
}
Internet::Internet(Internet &temp) {
	this->name = temp.name;
	this->url = temp.url;
}
/*从这两个函数的构造来说，两个函数的整体部分都相同，但是对赋值运算符重载函数
来看，声明和定义的地方函数写法不一样，声明地方的写法跟大部分重载为类的成员函数
一样，但是定义的部分有差别,还有一个差别就是拷贝构造函数没有返回值，但是赋值运算符重载函数
需要有返回值*/
Internet &Internet::operator= (Internet &temp) {
	this->name = temp.name;
	this->url = temp.url;
	return *this;
}
int main() {
	Internet a("liyang", "goxx.site");
	cout << "a = " << a << endl;
	Internet b(a);
	cout << "b = " << b << endl;
	Internet c("shuhau", "love you");
	cout << "c = " << c << endl;
	b = c;
	cout << "b改变之后为" << endl << "b = " << b << endl;
	system("pause");
	return 0;

}
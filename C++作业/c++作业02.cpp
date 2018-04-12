//使用string类型，利用C++语法，编写一个程序，
//实现2个字符串输入、比较、字符串连接等功能
#include <iostream>
#include <string>
using namespace std;
void fun1(string temp){
	//给字符串赋值
	temp.assign("liyang");
	cout << "\n赋值之后为：" << temp << endl;
}
void fun2(string temp) {
	//返回字符串的字符数量
	cout << "\n字符串的字符数量为(size()方法)：" << size(temp) << endl;
	cout << "\n字符串的字符数量为(length()方法)：" << temp.length() << endl;
}
void fun3(string temp) {
	//返回字符串的容量
	cout << "\n字符串的容量(capacity()方法)：" << temp.capacity() << endl;
}
/*容器的size是指它已经保存的元素的数目；而capacity则是
在不分配新的内存空间的前提下它最多可以保存多少元素*/
void fun4(string temp) {
	//判断一个字符串是否为空
	cout << "\n判断字符串是否为空(empty()方法)：" << temp.empty() << endl;
}
void fun5(string temp) {
	//重新分配字符串的内存大小
	temp.resize(88);
	cout << "\n重新分配字符串的内存后容量为(resize()方法)：" << temp.capacity() << endl;
}
void fun6(string temp) {
	//获取字符串开头位置
	string::iterator ptr;
	ptr = temp.begin();//返回一个迭代器， 相当于指针类型但是不可以直接输出地址
	cout << "\n字符串开头位置(begin()方法)：" << *(ptr) << endl;
}
void fun7(string temp) {
	//获取字符串最后字符的下一个位置
	string::iterator ptr;
	ptr = temp.end();
	cout << "\n字符串最后字符的下一个位置(end()方法)：" << *(ptr-1) << endl;
}
void fun8(string temp) {
	//获取字符串最后字符的位置
	/*string::iterator ptr;
	ptr = temp.rbegin(); 这样写是错误的因为rbegin()的语法为const reverse_iterator rbegin();
	有const修饰*/
	cout << "\n字符串最后字符的位置(rbegin()方法)：" << *(temp.rbegin()) << endl;
}
void fun9(string temp) {
	//获取字符串开头字符的上一个位置
	//此处跟fun8函数内的rbegin相同，于begin不同的是rbegin是逆向迭代器，与指针的方向相反
	//所以在下一行代码处需要-1才能正常运行
	cout << "\n字符串最后字符的位置(rend()方法)：" << *(temp.rend()-1) << endl;
}
void fun10(string temp) {
	//在字符串中插入字符或字符串
	cout << "\n在字符串中插入字符串后为(insert()方法)：" << temp.insert(6, "the ") << endl;
}
void fun11(string temp) {
	//删除字符串中的字符或字符串
	cout << "\n在字符串中删除字符串后为(erase()方法)：" << temp.erase(5,1) << endl;
}
void fun12(string temp) {
	//删除全部字符串
	temp.clear();
	cout << "\n删除全部字符串后为(clear()方法)：" << temp << "\tsize为：" << temp.size()
		<< "\tcapacity为：" << temp.capacity() << endl;
}
void fun13(string temp) {
	//替换字符串中的字符
	cout << "\n替换字符串中的字符后为(replace()方法)：" << temp.erase(5,6) << endl;
}
void fun14(string temp) {
	//查找
	cout << "\n查找的字符的位置为(find()方法)：" << temp.find("w") << endl;
}
void fun15(string temp) {
	//返回某个子串
	cout << "\n返回的子串为(substr()方法)：" << temp.substr(6, 12) << endl;
}
void fun16(string temp) {
	//访问某个角标上的字符于temp[1]一样
	cout << "\n访问某个角标上的字符(substr()方法)：" << temp.at(1) << endl;
}
void fun17(string temp) {
	//比较字符串
	string value = "hello world";
	string value1 = "hello";
	cout << "\n比较字符串的结果为(substr()方法)：" << "与相同的字符串比较结果为：" << temp.compare(value) <<
		 "\t与不同的字符串比较结果为：" << temp.compare(value1) << endl;
	if (value == temp)
		cout << "两个字符串相等" << endl;
	else
		cout << "不相等" << endl;
}
void fun18(string temp) {
	//将字符或字符串链接在字符串的末尾,同样的的方法还有push_back()
	cout << "\n将字符或字符串链接在字符串的末尾后为(append()方法)：" << temp.append(" liyang") << endl;
	//同样的方法还有使用“+”符号
	cout << "用“+”字符连接后为： " << "liyang " + temp << endl << endl;
}

int main() {
	string value;
	value = "hello world";
	fun1(value);
	fun2(value);
	fun3(value);
	fun4(value);
	fun5(value);
	fun6(value);
	fun7(value);
	fun8(value);
	fun9(value);
	fun10(value);
	fun11(value);
	fun12(value);
	fun13(value);
	fun14(value);
	fun15(value);
	fun16(value);
	fun17(value);
	fun18(value);
	system("pause");
	return 0;
}
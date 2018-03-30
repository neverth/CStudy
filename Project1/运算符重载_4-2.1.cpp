/*前置++和后置++加深理解*/
//#include <iostream>
//using namespace std;
//class Point {
//private:
//	int x, y;
//public :
//	Point(int t_x = 0, int t_y = 0) :x(t_x), y(t_y) {}
//	Point operator++();
//	Point operator++(int);
//	void show() {
//		cout << "(x, y) = (" << x << ", " << y << ")" <<endl;
//	}
//};
//Point Point::operator++() {
//	this->x++;
//	this->y++;
//	return *this;
//}
//Point Point ::operator++(int) { 
//	Point temp = *this;
//	this->x++;
//	this->y++;
//	return temp;
//}
///*前置++需要返回引用，因为重载自加运算符后可以返回对象的引用， 
//以方便在表达式中连续使用。而后置++返回是对象，且前置++比后置效率
//要高，因为后置++会创建一个临时对象，从上面的语句来看函数返回的
//是没有被自增的对象。*/
//int main() {
//	Point d(88, 99);
//	d.show();
//	d++;
//	d.show();
//	d++.show();
//	d.show();
//	system("pause");
//	return 0;
//}
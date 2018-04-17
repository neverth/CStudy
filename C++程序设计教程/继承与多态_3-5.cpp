//继承与多态——类型兼容
#include <iostream>
using namespace std;
class Base {
protected:
	int n_base;
};
class Derive :public Base {
private:
	int n_derive;
public:
	void disp_addr() {
		cout << "b_base addr: " << &n_base << endl;
		cout << "n_derive addr: " << &n_derive << endl;
	}
};
int main() {
	Derive obj;
	obj.disp_addr();
	cout << "sizaof(obj) = " << sizeof(obj) << endl;
	system("pause");
	return 0;
}
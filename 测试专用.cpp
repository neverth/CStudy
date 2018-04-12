#include<iostream>
using namespace std;
class Add {
private:
	int x, y;
public:
	Add(int t_x = 0, int t_y = 0) :x(t_x), y(t_y) {}
	void show() {
		cout << "x = " << x;
		cout << "\ty =  " << y << endl;
	}
	friend Add operator+ (const Add& a1, const Add& a2) {
		return Add((a1.x + a2.x), (a1.y + a2.y));
	}
	friend Add operator+ (const Add& a1, const int& a2) {
		int temp_x, temp_y;
		temp_x = temp_y = a2;
		return Add((a1.x + temp_x), (a1.y) + temp_y);
	}
};
int main() {
	Add a1(99, 88);
	a1.show();
	Add a2(110, 120);
	(a1 + a2).show();
	a1 = a1 + 1;
	a1.show();
	system("pause");
	return 0;
}
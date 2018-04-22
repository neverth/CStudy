/*
*C++作业08
*设计一个计数器类Calculator，它只有一个用于计数的数据成员count。
*实现两个计数器的加减法乘除四则运算。（分别用成员函数和友元函数实现）
*2018/04/22
*/
//常规解法
#include <iostream>
using namespace std;
class Calculator {
private:
	float count;
public:
	Calculator(float t_count):count(t_count) {}
	void show() {
		cout << "count = " << count << endl;
	}
	//成员函数实现
	Calculator add_mFuntion(const Calculator &t_count) {
		return Calculator(this->count + t_count.count);
	}
	Calculator sub_mFuntion(const Calculator &t_count) {
		return Calculator(this->count - t_count.count);
	}
	Calculator mul_mFuntion(const Calculator &t_count) {
		return Calculator(this->count * t_count.count);
	}
	Calculator div_mFuntion(const Calculator &t_count) {
		return Calculator(this->count / t_count.count);
	}
	//友元函数实现
	friend Calculator add_fFuntion(const Calculator &t_count1, const Calculator &t_count2);
	friend Calculator sub_fFuntion(const Calculator &t_count1, const Calculator &t_count2);
	friend Calculator mul_fFuntion(const Calculator &t_count1, const Calculator &t_count2);
	friend Calculator div_fFuntion(const Calculator &t_count1, const Calculator &t_count2);
};
Calculator add_fFuntion(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count + t_count2.count);
}
Calculator sub_fFuntion(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count - t_count2.count);
}
Calculator mul_fFuntion(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count * t_count2.count);
}
Calculator div_fFuntion(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count / t_count2.count);
}
int main() {
	Calculator a(100.99), b(200.01);
	cout << "成员函数调用" << endl;
	a.add_mFuntion(b).show();
	a.sub_mFuntion(b).show();
	a.mul_mFuntion(b).show();
	a.div_mFuntion(b).show();
	cout << "友元函数调用" << endl;
	add_fFuntion(a, b).show();
	sub_fFuntion(a, b).show();
	mul_fFuntion(a, b).show();
	div_fFuntion(a, b).show();
	system("pause");
	return 0;
}



/*
*使用运算符重载,可以对比出没有使用运算符重载的区别
*/
#include <iostream>
using namespace std;
class Calculator {
private:
	float count;
public:
	Calculator(float t_count):count(t_count) {}
	void show() {
		cout << "count = " << count << endl;
	}
	//成员函数实现
	Calculator operator+(const Calculator &t_count) {
		return Calculator(this->count + t_count.count);
	}
	Calculator operator-(const Calculator &t_count) {
		return Calculator(this->count - t_count.count);
	}
	Calculator operator*(const Calculator &t_count) {
		return Calculator(this->count * t_count.count);
	}
	Calculator operator/(const Calculator &t_count) {
		return Calculator(this->count / t_count.count);
	}
	//友元函数实现
	friend Calculator operator+(const Calculator &t_count1, const Calculator &t_count2);
	friend Calculator operator-(const Calculator &t_count1, const Calculator &t_count2);
	friend Calculator operator*(const Calculator &t_count1, const Calculator &t_count2);
	friend Calculator operator/(const Calculator &t_count1, const Calculator &t_count2);
};
Calculator operator+(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count + t_count2.count);
}
Calculator operator-(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count - t_count2.count);
}
Calculator operator*(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count * t_count2.count);
}
Calculator operator/(const Calculator &t_count1, const Calculator &t_count2) {
	return Calculator(t_count1.count / t_count2.count);
}
int main() {
	Calculator a(100.99), b(200.01);
	cout << "成员函数调用" << endl;
	(a + b).show();
	(a - b).show();
	(a * b).show();
	(a / b).show();
	cout << "友元函数调用" << endl;
	(a + b).show();
	(a - b).show();
	(a * b).show();
	(a / b).show();
	system("pause");
	return 0;
}
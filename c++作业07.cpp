/*
*定义一个满足如下要求的Date类。提供多样化构造函数及析构函数，并完成 以下功能函数
*1．用下面的格式输出日期： 日 / 月 / 年
*2． 可运行在当前日上加一天操作
*3． 设置日期。
*/
#include <iostream>
#include <iomanip>
using namespace std;
class Date {
private:
	int day, month, year;
public:
	//声明区
	Date(int t_day = 9, int t_month = 9, int t_year = 2000);
	Date(Date &t_date);
	void show();
	Date operator++();
	Date operator++(int);
	friend Date operator+ (const Date& t_day1, const int& t_day2);
	friend Date operator+ (const Date& t_day1, const Date& t_day2);
	~Date();
};
//定义区
Date::Date(int t_day, int t_month, int t_year) :
	day(t_day), month(t_month), year(t_year) {}
Date::Date(Date &t_date) {
	day = t_date.day;
	month = t_date.month;
	year = t_date.year;
}
void Date::show() {
	cout << "日期为：";
	cout.width(2);
	cout << setfill('0') << day << "/";
	cout.width(2);
	cout << setfill('0') << month << "/";
	cout << year << endl;
}
Date Date::operator++() {
	++day;
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day == 32) {
				month++;
				day = 1;
				if (month == 13) {
					year++;
					month = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 31) {
				month++;
				day = 1;
			}
			break;
		case 2:
			if (day == 30) {
				month++;
				day = 1;
			}
			break;
		}
	}
	else {
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day == 32) {
				month++;
				day = 1;
				if (month == 13) {
					year++;
					month = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 31) {
				month++;
				day = 1;
			}
			break;
		case 2:
			if (day == 29) {
				month++;
				day = 1;
			}
			break;
		}
	}
	return *this;
}
Date Date::operator++(int) {
	Date date = *this;
	++(*this);
	return *this;
}
Date::~Date() {}
int main() {
	Date day1;
	day1.show();
	Date day2(31,12,2018);
	day2++;
	day2.show();
	Date day3(28, 2 ,1999);
	(++day3).show();
	system("pause");
	return 0;
}



/*有一个Time类，包含数据成员minute(分)和sec(秒)，
模拟秒表，每次走一秒，满60秒进一分钟，
此时秒又从0开始算。要求输出分和秒的值。
（提示：重载单目运算符++）*/

#include <iostream>
#include <windows.h>
using namespace std;
class Time{
private:
	int minute, sec;
public:
	Time(int t_minute = 0, int t_sec = 0):
	minute(t_minute), sec(t_sec){}
	Time operator++(){
		++sec;
		return *this;	
	}
	void TimeShow(){
		while (sec >= 60){
			sec -= 60;
			++minute;
		}
		cout << minute << " : " << sec << endl;
	}
};
int main(){
	Time a(0, 49);
	for (int i = 0; i < 1000; ++i){
		(++a).TimeShow();
		Sleep(1000);
	}
	system("pause");
	return 0;
}
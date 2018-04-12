//浅拷贝
//已改为深拷贝
#include <iostream>
#include <cstring>
using namespace std;
class Car {
private:
	char *m_pCarName;
	int m_nSeats;
public:
	Car(char const *con_pcarName, int con_seats) {
		int len = strlen(con_pcarName) + 1;
		m_pCarName = new char[len];
		strcpy_s(m_pCarName, len, con_pcarName);
		m_nSeats = con_seats;
	}
	Car(Car &con_refcar) {
		cout << "正在执行构造函数" << endl;
		int len = strlen(con_refcar.m_pCarName) + 1;
		m_pCarName = new char[len];
		strcpy_s(m_pCarName, len, con_refcar.m_pCarName);
		m_nSeats = con_refcar.m_nSeats;
	}
	~Car() {
		static int i = 0;
		cout << "正在执行析构函数" << endl;
		delete[] m_pCarName;
		if (i == 1)
			system("pause");
		i++;
	}
};
int main() {
	Car mynewcar("liyang", 4);
	Car myseccar(mynewcar);
	return 0;
}
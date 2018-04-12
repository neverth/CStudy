//深拷贝
#include<iostream>
#include<cstring>
using namespace std;
class Car {
public:
	Car(const char *con_pcarname, int con_seats);
	Car(Car &con_refcar);
	~Car();
private:
	char *m_pCarName;
	int m_nSeats;
};
Car::Car(const char *con_pcarname, int con_seats) {
	int len = strlen(con_pcarname) + 1;
	m_pCarName = new char[len];
	strcpy_s(m_pCarName, len, con_pcarname);
	m_nSeats = con_seats;
}
Car::Car(Car &con_refcar) {
	cout << "calling copy constructor!" << endl;
	int len = strlen(con_refcar.m_pCarName) + 1;
	m_pCarName = new char[len];
	strcpy_s(m_pCarName, len, con_refcar.m_pCarName);
	m_nSeats = con_refcar.m_nSeats;
	cout << "end of copy constructor!" << endl;
}
Car::~Car() {
	static int i = 0;
	cout << "destructor is called!" << endl;
	delete[] m_pCarName;
	if (i == 1)
		system("pause");
	i++;
}
int main() {
	Car mynewcar("my new car", 4);
	Car myseccar(mynewcar);
	return 0;
}

/*ÓÃC++Óï·¨£¬¸ÄÐ´Ò»¸öÍêÕûµÄÇóÒ»Ôª¶þ´Î·½³ÌµÄ¸ùµÄ³ÌÐò¡£

ÒªÇóÊäÈëa, b, cÈý¸ö²ÎÊý£¬¸ù¾Ý²ÎÊýÅÐ¶Ï²¢Êä³öÏàÓ¦µÄ¸ùµÄÇé¿ö¡£*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string value, a, b, c;
	int i;
	float d;
	cout << "\t¡¾Ò»Ôª¶þ´Î·½³ÌÇó¸ù¡¿\n" << endl;
	cout << "ÇëÊäÈëÒ»Ôª¶þ´Î·½³ÌµÄÒ»°ã±í´ïÊ½£¬Àý£¨6x^2-5.55x-9.99=0£¬ÇëÎðÊäÈë¿Õ¸ñÇÒ±ØÐëÐ´³£ÊýÏî£©" << endl;
	cin >> value;
	cout << "ÄãÊäÈëµÄ·½³ÌÎª: " << value << endl;
	for (i = 0; i < size(value); i++) {
		if (value[i] == 'x')
			break;
		a += value[i];
	}
	for (; i < size(value); i++) {
		if (value[i + 3] == 'x')
			break;
		b += value[i + 3];
	}
	for (; i < size(value); i++) {
		if (value[i + 4] == '=')
			break;
		c += value[i + 4];
	}
	if (a == "" ||a == "-"||a == "+")
		a = (a == "") ? a = "1" : a = "-1";
	if (b == "+" ||b == "-")
		b = (b == "+") ? b = "1" : b = "-1";
	cout << " a µÄÖµÎª " << atof(a.c_str()) << endl;//atolÊÇstdº¯Êý¿âÖÐµÄº¯Êý£¬×÷ÓÃÊÇ°Ñchar*×ª»¯Îªfloat
	cout << " b µÄÖµÎª " << atof(b.c_str()) << endl;//ÔÚ´ËÀýÖÐÎªstring -> char * -> float
	cout << " c µÄÖµÎª " << atof(c.c_str()) << endl;
	d = atof(b.c_str()) * atof(b.c_str()) - 4 * atof(a.c_str())*atof(c.c_str());
	if (d < 0)
		cout << "¸Ã·½³ÌÃ»ÓÐÊµÊý¸ù" << endl;
	if (d == 0)
		cout << "¸Ã·½³ÌÓÐÇÒÖ»ÓÐÒ»¸ö¸ù£¬ÆäÖµÎª " << (-atof(b.c_str())) / (2 * atof(a.c_str())) << endl;
	if (d > 0) {
		cout << "¸Ã·½³ÌÓÐÁ½¸ö¸ù£¬·Ö±ðÎª x1 = " << (-atof(b.c_str()) + sqrt(d)) / (2 * atof(a.c_str()))
			<< "\tx2 = " << (-atof(b.c_str())*atof(b.c_str()) - sqrt(d)) / (2 * atof(a.c_str())) << endl;
	}
	system("pause");
	return 0;
}

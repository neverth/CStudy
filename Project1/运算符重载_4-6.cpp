//¸³ÖµÔËËã·ûÖØÔØ
#include <iostream>
using namespace std;
class Internet
{
public:
	char *name;
	char *url;
public:
	Internet(char *name, char *url);
	Internet(Internet &temp);
	~Internet() {
		delete[]name;
		delete[]url;
	}
	Internet &operator= (Internet &temp);
};

Internet::Internet(char *name, char *url){
	this->name = new char[strlen(name) + 1];
	this->url = new char[strlen(url) + 1];
	if (name)
		strcpy(this->name, name);
	if (url)
		strcpy(this->url, url);
}
Internet::Internet(Internet &temp) {
	this->name = new char[strlen(temp.name) + 1];
	this->url = new char[strlen(temp.url) + 1];
	if (name)
		strcpy(this->name, temp.name);
	if (url)
		strcpy(this->url, temp.url);
}
Internet &Internet::operator= (Internet &temp) {
	;
}

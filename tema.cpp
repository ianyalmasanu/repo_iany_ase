#include <iostream>
#include <string>

class MyString
{
	char* str;
	int len;

public:

	//constructor
	MyString(char* _str, int _len) : str(_str), len(_len) {
		this->str = _str;
		this->len = _len;
	}

	//copy constructor
	MyString(MyString& t) {
		char* strN = str;
		int lenN = len;
	}

	//setters
	void set_str(char* _str) {
		this->str;
	}

	void set_len(int _len) {
		this->len = _len;
	}

	//getters
	char* getStr() { return str; }
	int getLen() { return len; }
	
	//destructor
	~MyString() {
		delete[] this->str;
	}

	//overload operator


};


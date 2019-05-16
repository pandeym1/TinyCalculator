/**
*
* @Name : TinyCalculator/main.cpp
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-05-17
* @Released under : https://github.com/BaseMax/TinyCalculator/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/TinyCalculator
*
**/
#include "main.hpp"

void parseAddition() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	cout << a + b << endl;
}

void parseSubtraction() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	cout << a - b << endl;
}

void parseMultiplication() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	cout << a * b << endl;
}

void parseDivision() {
	float a=0, b=0;
	cin >> a;
	cin >> b;
	if(b != 0) {
		cout << a / b << endl;
	}
}

void parseExponentiation() {
	float a=0, r=0;
	int b=0;
	cin >> a;
	cin >> b;
	r=pow(a, b);
	cout << r << endl;
}

void parseSquareRoot() {
	float a=0, r=0;
	cin >> a;
	r=sqrt(a);
	cout << r << endl;
}

void parseSine() {
	float a=0, r=0;
	cin >> a;
	r=sin(a);
	cout << r << endl;
}

void parseCosine() {
	float a=0, r=0;
	cin >> a;
	r=cos(a);
	cout << r << endl;
}

void parseTangent() {
	float a=0, r=0;
	cin >> a;
	r=tan(a);
	cout << r << endl;
}

void help() {
	cout << "\n\n";
	cout << " Tiny Calculator ------------------------------\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\t c\t\t add two number\n";
	cout << "\n\n";
}

void error() {
	cout << "Error!\n";
}

int main(int argc, char** argv) {
	unsigned char type;
	bool flag=true;
	while(flag) {
		cout << "Enter Your type: ";
		cin >> type;
		switch(type) {
			case 'a':
				parseAddition();
			break;
			case 'm':
				parseSubtraction();
			break;
			case 'u':
				parseMultiplication();
			break;
			case 'd':
				parseDivision();
			break;
			case 'p':
				parseExponentiation();
			break;
			case 'r':
				parseSquareRoot();
			break;
			case 's':
				parseSine();
			break;
			case 'c':
				parseCosine();
			break;
			case 't':
				parseTangent();
			break;
			case 'h':
				help();
			break;
			case 'e':
				flag=false;
			break;
			default:
				error();
			break;
		}
	}
	return 0;
}

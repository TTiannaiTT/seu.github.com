#include<iostream>
#include"complex.h"
using namespace std;

complex::complex(double r,double i) {
	realPart = r;
	imaginaryPart = i;
}
void complex::print() {
	cout << '(' << realPart << ',' << imaginaryPart << ')';
}
void complex::adding(complex a, complex b) {//whether to assign the result to a?
	int r, i;
	r = a.realPart + b.realPart;
	i = a.imaginaryPart + b.imaginaryPart;
	a.print();
	cout << " + ";
	b.print();
	cout << " = ";
	cout << '(' << r << ',' << i << ')'<<endl;
	
}
void complex::subtract(complex&a, complex&b) {
	a.print();
	a.realPart = a.realPart - b.realPart;
	a.imaginaryPart = a.imaginaryPart - b.imaginaryPart;
	cout << " - ";
	b.print();
	cout << " = ";
	cout << '(' << a.realPart << ',' << a.imaginaryPart << ')'<<endl;

}

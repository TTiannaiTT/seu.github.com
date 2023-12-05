#include"complex.h"
#include<iostream>
using namespace std;
int main() {
	complex a(-3.0, 4.0);
	complex b;
	a.adding(a, b);
	b.subtract(a, b);
	a.print();
	cout << endl;
	b.print();
	return 0;
}
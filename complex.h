#pragma once
#ifndef COMPLEX 
#define COMPlEX
class complex {
public:
	complex(double r = 1.0, double i = 1.0);
	void adding(complex a,complex b);
	void subtract(complex&a, complex&b);
	void print();
private:
	double realPart;
	double imaginaryPart;
};
#endif
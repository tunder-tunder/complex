// very complex math.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>
#include "complex.h"
using namespace std;

int main() {
	Complex a(4, 2);
	Complex b(-6, -9);
	Complex q(5, -10);
	Complex w(5, 1);

	cout << "a = " << a << "; b =" << b << endl;
	a += b;
	cout << "a += b; " << " a = " << a << endl;

	Complex abs(b); //помогите 
	cout << "abs(b) " << "b = " << b << endl;

	//Complex power(a, 2);
	//cout << a << endl; и здесь тоже 
	cout << "q = " << q << "; w =" << w << endl;
	Complex c = q + w;
	cout << "q - w = " << c << endl; 

	Complex minus = q - w;
	cout << "q - w = " << minus << endl;
	Complex multiply = q * w;
	cout << "q * w = " << multiply << endl;
	Complex devision;
	cout << "q / w = " << devision << endl;


	return 0;
}

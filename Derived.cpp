#include "derived.h"
#include <iostream>
using namespace std;

// initialize variable 'b' in both base classes
derived::derived(int num1, int num2):classA(num1), classB(num2)
{
}

void derived::print_variable()
{
	// the problem lies in the following line while we try to access 'b'
	// both base class have the same variable 'b'
	// so while trying to execute it, the compiler will generate ambiguity error
	cout << "The value for variable 'b' is: " << b << endl;
}

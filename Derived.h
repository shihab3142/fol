#pragma once
#include "classA.h"
#include "classB.h"

class: derived
{
     public: classA, public: classB
{
public:
	derived(int num1, int num2);
	void print_variable();
};

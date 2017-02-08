#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	int pancakesAte;

public:
	void SetPancakes(int i) { pancakesAte = i; }
	int GetPancakes() { return pancakesAte; }
};

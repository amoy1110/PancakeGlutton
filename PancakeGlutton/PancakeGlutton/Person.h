#pragma once
#include <string>
#include <iostream>

class Person
{
	int ID;
	int pancakesAte;

public:
	void SetPancakes(int i) { pancakesAte = i; }
	int GetPancakes() { return pancakesAte; }
	void SetID(int i) { ID = i; }
	int GetID() { return ID; }
};

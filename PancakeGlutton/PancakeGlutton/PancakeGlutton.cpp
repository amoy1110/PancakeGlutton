// PancakeGlutton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>
#include "Utility.h"

using namespace std;

int main()
{
	Person personList[10];

	for(auto i=0; i<10; i++)
	{
		int pancakesEaten;
		personList[i].SetID(i + 1);

		cout << "Enter how many pancakes person #: " << personList[i].GetID() << " ate.";
		cin >> pancakesEaten;

		personList[i].SetPancakes(pancakesEaten);
	}

	for(auto i=0; i<10; i++)
	{
		cout << "Person " << personList[i].GetID() << " ate " << personList[i].GetPancakes() << " pancakes." << endl;
	}

	cout << "Most eaten pancakes are: " << GetMostEatenPancakes(personList, 10) << " by person: " << GetPersonWithMostEaten(personList, 10);
	cout << endl;
	cout << "Least eaten pancakes are: " << GetLeastEatenPancakes(personList, 10);

	int test;
	cin >> test;
	return 0;
}


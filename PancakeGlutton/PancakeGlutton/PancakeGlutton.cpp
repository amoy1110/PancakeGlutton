// PancakeGlutton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person personList[10];
	int highestPancakesEaten = 0, personWhoAteTheMost = 0;

	for(int i=0; i<10; i++)
	{
		int pancakesEaten;
	
		cout << "Enter how many pancakes person #: " << i+1 << " ate.";
		cin >> pancakesEaten;

		personList[i].SetPancakes(pancakesEaten);
		
		if(pancakesEaten > highestPancakesEaten)
		{
			highestPancakesEaten = pancakesEaten;
			personWhoAteTheMost = i+1;
		}
	}

	for(int i=0; i<10; i++)
	{
		cout << "Person " << i+1 << " ate " << personList[i].GetPancakes() << " pancakes." << endl;
	}

	cout << "Most pancakes eaten are " << highestPancakesEaten << " by person #: " << personWhoAteTheMost << endl;

	int test;
	cin >> test;
	return 0;
}


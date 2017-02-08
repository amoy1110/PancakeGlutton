#include "stdafx.h"
#include "Utility.h"

int GetMostEatenPancakes(class Person personList[], int size)
{
	auto highestPancakes = personList[0].GetPancakes(); //initialize to first person always

	for(auto i=0; i<size; i++)
	{
		if(personList[i].GetPancakes() > highestPancakes)
		{
			highestPancakes = personList[i].GetPancakes();
		}
	}

	return highestPancakes;
}

int GetLeastEatenPancakes(Person personList[], int size)
{
	auto leastPancakes = personList[0].GetPancakes(); //initialize to first person always

	for(auto i=1; i<size; i++)
	{
		if(personList[i].GetPancakes() < leastPancakes)
		{
			leastPancakes = personList[i].GetPancakes();
		}
	}

	return leastPancakes;
}

int GetPersonWithMostEaten(Person personList[], int size)
{
	auto highestPancakes = personList[0].GetPancakes(); //initialize to first person always
	auto ID = personList[0].GetID();

	for (auto i = 0; i<size; i++)
	{
		if (personList[i].GetPancakes() > highestPancakes)
		{
			highestPancakes = personList[i].GetPancakes();
			ID = personList[i].GetID();
		}
	}

	return ID;
}

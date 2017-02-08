#include "stdafx.h"
#include "Utility.h"

int GetMostEatenPancakes(class Person personList[], int size)
{
	int highestPancakes = 0;

	for(int i=0; i<size; i++)
	{
		if(personList[i].GetPancakes() > highestPancakes)
		{
			highestPancakes = personList[i].GetPancakes();
		}
	}

	return highestPancakes;
}

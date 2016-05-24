// C++WK3HW.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <list>
#include <iostream>
using namespace std;

// ******WARNING: Code is sloppy******
int dividend,divisor,remain,test;


vector<int> MyDivisors;



int _tmain(int argc, _TCHAR* argv[])
{
	for (dividend = 0; dividend <= 100000; dividend++) //filters through dividends
	{
		for (divisor = 1; divisor <= dividend; divisor++)//filters through divisors
		{
			remain = dividend%divisor;//checks for good divisors
			if (remain == 0)
			{
				MyDivisors.push_back(divisor);//puts good divisors in a vector
				if (divisor == dividend)//Once divisor = dividend, check if perfect
				{
					for (unsigned int i = 0; i < MyDivisors.size(); i++)//go through each element in current vector
					{
						test = test + MyDivisors[i];//add all elements together
					}
					test = test / 2;
					if (test == dividend)//see if the result = dividend
					{
						cout << "(";
						for (unsigned int i = 0; i < MyDivisors.size(); i++) //displays the vector and how it adds up to a perfect number
						{
							cout << MyDivisors[i] << " + ";
						}
						cout << "0 ) / 2 = " << dividend << endl;
					}
					else// if result isn't perfect, clear vector
					{
						MyDivisors.erase(MyDivisors.begin(), MyDivisors.end());
						test = 0; //resets the addition of elements back to 0.
					}
				}
			}
		}

	}
	
	cin.get();
	return 0;
}


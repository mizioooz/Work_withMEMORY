#pragma once

#include <iostream>
using namespace std;

//functions for flags
// dec -> bin
//max for this func 
//for hex79 // for dec 121 //for bin 0111 1001
// 
// There should be nothing higher if we consider the bit part
//40 = 0100 0000
//20 = 0010 0000
//10 = 0001 0000
//08 = 0000 1000
//04 = 0000 0100
//02 = 0000 0010
//01 = 0000 0001

int Dizari_charFLAG(int n, int z)
{
	const int pos = z;
	int binaryNum[8];
	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	return binaryNum[pos];

}
void Dizari_print_fullnum_charFLAG(int n)
{
	int binaryNum[8];
	int i = 0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
	cout << endl;
}


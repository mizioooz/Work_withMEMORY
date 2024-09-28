#pragma once

#include <iostream>
using namespace std;

//functions for flags
// dec -> bin
int Dizari_charFLAG(int n, int z)
{
	const int pos = z;
	int binaryNum[32];
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
	int binaryNum[32];
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


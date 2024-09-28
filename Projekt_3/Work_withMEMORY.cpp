#include <iostream>
#include <math.h>
#include <Windows.h>
#include "dizari_math.h" // using my library

using namespace std;

int main()
{
	//char SW = 0;
	//Dizari_print_fullnum_charFLAG(SW);//1-st line console 
	//// we can use 00000000 8 positions/8 bit
	//SW |= 0x04;// on 3 bit 00000100 2^2=4 => 0x04 in 16CC
	//SW |= 0x01;// on 1 bit 00000101 2^0=1 => 0x01 in 16CC
	//SW |= 0x08;// on 4 bit 00001101 2^3=8 => 0x08 in 16CC

	////fast(2CC to 10CC)
	//cout << int(SW) << endl;// 00001101 = 8 + 4 + 1 = 13 
	//Dizari_print_fullnum_charFLAG(SW);

	////an example of how the algorithm works
	//if (Dizari_charFLAG(SW, 1) == 0)
	//	cout << "False" << endl;
	//else
	//	cout << "True" << endl;
	//cout << endl;

	//cheking update massivs in functions Dizari 
	//max for this func // for hex79 // for dec 121 //
	//for bin 0111 1001
	char SU = 0;
	//cout << pow(2, 7);
	SU |= 0x40; // 01111001

	cout << int(SU) << endl;
	system("cls");
	Dizari_print_fullnum_charFLAG(SU);

	for (int i=6; i>=0; i--)
		if (Dizari_charFLAG(SU, i) == 0)
			cout << "False" << endl;
		else
			cout << "True" << endl;
		cout << endl;
	return 0;
}
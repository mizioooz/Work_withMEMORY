#include <iostream>
#include "dizari_math.h" // using my library

using namespace std;

int main()
{
	char SW = 0;
	Dizari_print_fullnum_charFLAG(SW);//1-st line console 
	// we can use 00000000 8 positions/8 bit
	SW |= 0x04;// on 3 bit 00000100 2^2=4 => 0x04 in 16CC
	SW |= 0x01;// on 1 bit 00000101 2^0=1 => 0x01 in 16CC
	SW |= 0x08;// on 4 bit 00001101 2^3=8 => 0x08 in 16CC

	//fast(2CC to 10CC)
	cout << int(SW) << endl;// 00001101 = 8 + 4 + 1 = 13 
	Dizari_print_fullnum_charFLAG(SW);

	//an example of how the algorithm works
	if (Dizari_charFLAG(SW, 1) == 0)
		cout << "False" << endl;
	else
		cout << "True" << endl;

	return 0;
}
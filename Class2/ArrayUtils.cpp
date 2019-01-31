#include "ArrayUtils.h"
#include <iostream>



unsigned int cpp_class2::getPowerOfTwoCount(unsigned int myA[])
{
	unsigned int count = 0;
	for (char a = 0; a < ARRAYLENGTH; a++) {
		unsigned int testVal = myA[a];
		while (testVal/2 >=1 && testVal % 2 == 0)
		{
			if (testVal / 2 == 1){
				int aa= myA[a];
				count++;
				break;
			}
			testVal /= 2;
		}
	}
	return count;
}

unsigned int cpp_class2::getPrimeCount(unsigned int myA[])
{
	unsigned int count = 0;
	bool bIsPrime = true;
	for (char a = 0; a<ARRAYLENGTH; a++) {
	
		for (char i = 2; i <= myA[a] / 2; i++)
		{
			if (myA[a] % i == 0)
			{
				bIsPrime = false;
				break;
			}
		}
		if (bIsPrime) {
			count++;
		}
		bIsPrime = true;
		
	}
	return count;
}

template <typename arrayToPrint>
void cpp_class2::printArray(arrayToPrint myArray,int arrayLength)
{
	for (char a = 0; a<arrayLength; a++) {
		std::cout << myArray[a] << " ";
	}
	std::cout << std::endl;
}

void cpp_class2::mergeSortedArray(unsigned int myA1[],
	unsigned int myA2[], unsigned int myA3[])
{
	char myA3Index = 0;
	for (char a = 0; a<ARRAYLENGTH; a++) {

		if (myA1[a]>myA2[a]) {
			myA3[myA3Index] = myA2[a];
			myA3[myA3Index + 1] = myA1[a];
		}
		else {
			myA3[myA3Index] = myA1[a];
			myA3[myA3Index + 1] = myA2[a];
		}
		myA3Index += 2;
	}
	cpp_class2::printArray(myA3, ARRAYLENGTH * 2);
}



void cpp_class2::multiplyArrays(float myA1[], float myA2[], double myA3[])
{
	for (char a = 0; a<ARRAYLENGTH; a++) {
		myA3[a] = myA2[a] * myA1[a];
	}
	cpp_class2::printArray(myA3, ARRAYLENGTH);
}

void cpp_class2::reverseArray(int myArray[])
{
	for (char a=0;a<ARRAYLENGTH;a++) {
		if ((ARRAYLENGTH - 1 - a)>a) {
			char buff = myArray[ARRAYLENGTH - 1 - a];
			myArray[ARRAYLENGTH - 1 - a] = myArray[a];
			myArray[a] = buff;
		}	
	}
	cpp_class2::printArray(myArray, ARRAYLENGTH);
}

void cpp_class2::truncateArray(float myArray[])
{
	for (char a = 0; a<ARRAYLENGTH; a++) {

		int truncate = static_cast<int>(myArray[a]);
		myArray[a] = static_cast<float>(truncate);
	}

	cpp_class2::printArray(myArray, ARRAYLENGTH);
}

void cpp_class2::xorArrays(unsigned int myA1[], 
	unsigned int myA2[], unsigned int myA3[])
{
	for (char a = 0; a<ARRAYLENGTH; a++) {
		myA3[a] = myA2[a] ^ myA1[a];
	}
	cpp_class2::printArray(myA3, ARRAYLENGTH);
}



#include "ArrayUtils.h"
#include <cassert>
#include <iostream>



unsigned int cpp_class2::getPowerOfTwoCount(unsigned int myA[10])
{
	unsigned int count = 0;
	for (unsigned int i = 0; i < 10; i++) {
		unsigned int testVal = myA[i];
		while (testVal/2 >=1 && testVal % 2 == 0)
		{
			if (testVal / 2 == 1){
				int aa= myA[i];
				count++;
				break;
			}
			testVal /= 2;
		}
	}
	return count;
}

unsigned int cpp_class2::getPrimeCount(unsigned int myA[10])
{
	unsigned int count = 0;
	bool bIsPrime = true;
	for (unsigned int i = 0; i<10; i++) {
	
		if (myA[i] == 1) {
			continue;
		}
		for (unsigned int j = 2; j <= myA[i] / 2; j++)
		{
			if (myA[i] % j == 0)
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
void cpp_class2::printArray(arrayToPrint myArray,unsigned int arrayLength)
{
	for (unsigned int i = 0; i<arrayLength; i++) {
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;
}

void cpp_class2::mergeSortedArray(unsigned int myA1[10],
	unsigned int myA2[10], unsigned int myA3[20])
{
	assert(checkArrayOrder(myA1,10)&& checkArrayOrder(myA2,10));
	unsigned int myA3Index = 0;
	for (unsigned int i = 0; i<10; i++) {
		myA3[i] = myA1[i];
		myA3Index++;
	}
	for (unsigned int i = 0; i<10; i++) {
		myA3[myA3Index+i] = myA2[i];
	}
	sort(&myA3[0],20);
	cpp_class2::printArray(myA3, 20);
}



void cpp_class2::multiplyArrays(float myA1[10], float myA2[10], double myA3[10])
{
	for (unsigned int i = 0; i<10; i++) {
		myA3[i] = myA2[i] * myA1[i];
	}
	cpp_class2::printArray(myA3, 10);
}

void cpp_class2::reverseArray(int myArray[10])
{
	for (unsigned int i=0;i<10;i++) {
		if ((10 - 1 - i)>i) {
			int buff = myArray[10 - 1 - i];
			myArray[10 - 1 - i] = myArray[i];
			myArray[i] = buff;
		}	
	}
	cpp_class2::printArray(myArray, 10);
}

void cpp_class2::truncateArray(float myArray[10])
{
	for (unsigned int i = 0; i<10; i++) {

		int truncate = static_cast<int>(myArray[i]);
		myArray[i] = static_cast<float>(truncate);
	}

	cpp_class2::printArray(myArray, 10);
}

void cpp_class2::xorArrays(unsigned int myA1[10], 
	unsigned int myA2[10], unsigned int myA3[10])
{
	for (unsigned int i = 0; i<10; i++) {
		myA3[i] = myA2[i] ^ myA1[i];
	}
	cpp_class2::printArray(myA3, 10);
}

void cpp_class2::sort(unsigned int * myArray, unsigned int lenght)
{
	for (unsigned int i = 1; i < lenght; ++i) {
		for (unsigned int j = 0; j < (lenght - i); ++j) {
			if (myArray[j] > myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

void cpp_class2::swap(unsigned int * a,unsigned int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

bool cpp_class2::checkArrayOrder(unsigned int myA[], unsigned int length)
{
	for (unsigned int i = 1; i<length; i++) {
		if (myA[i] < myA[i - 1]) {
			return false;
		}
	}
	return true;
}



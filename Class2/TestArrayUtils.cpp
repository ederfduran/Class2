#include "ArrayUtils.h"
#include <cassert>
#include "TestArrayUtils.h"

#include <iostream>


bool cpp_class2_test::checkArrayOrder(unsigned int myA[], size_t size)
{
	for (char a = 0;a<size;a++) {
		if (a == 0) continue;
		if (myA[a] < myA[a - 1]) {
			return false;
		}
	}
	return true;
}

unsigned int cpp_class2_test::testGetPowerOfTwoCount(unsigned int myA[], size_t size)
{
	assert(sizeof(unsigned int)*ARRAYLENGTH == size);
	return cpp_class2::getPowerOfTwoCount(myA);
}

unsigned int cpp_class2_test::testGetPrimeCount(unsigned int myA[], size_t size)
{
	assert(sizeof(unsigned int)*ARRAYLENGTH == size);
	return cpp_class2::getPrimeCount(myA);
}

void cpp_class2_test::testMultiplyArrays(float myA1[],
	float myA2[], double myA3[])
{
	cpp_class2::multiplyArrays(myA1,myA2,myA3);
}

void cpp_class2_test::testMergeSortedArray(unsigned int myA1[], unsigned int myA2[], unsigned int myA3[])
{
	assert(cpp_class2_test::checkArrayOrder(myA1,ARRAYLENGTH));
	assert(cpp_class2_test::checkArrayOrder(myA1, ARRAYLENGTH));
	cpp_class2::mergeSortedArray(myA1, myA2, myA3);
}


void cpp_class2_test::testReverseArray(int myArray[], size_t size)
{
	assert(sizeof(int)*ARRAYLENGTH ==size);
	cpp_class2::reverseArray(myArray);
}

void cpp_class2_test::testTruncateArray(float myArray[], size_t size)
{
	assert(sizeof(float)*ARRAYLENGTH == size);
	cpp_class2::truncateArray(myArray);
}

void cpp_class2_test::testXorArrays(unsigned int myA1[],
	unsigned int myA2[], unsigned int myA3[], size_t size)
{
	assert(sizeof(unsigned int)*ARRAYLENGTH == size);
	cpp_class2::xorArrays(myA1, myA2, myA3);
}



#include "ArrayUtils.h"
#include <cassert>
#include "TestArrayUtils.h"

#include <iostream>

void cpp_class2_test::testGetPowerOfTwoCount()
{
	unsigned int mockArr[10] = {1,12,51,12,54,57,23,56,32,16};
	const unsigned int count= cpp_class2::getPowerOfTwoCount(mockArr);
	assert(count==2);
}

void cpp_class2_test::testGetPrimeCount()
{
	unsigned int mockArr[10] = { 11,1,3,55,23,6,32,1,35,81};
	const unsigned int count = cpp_class2::getPrimeCount(mockArr);
	assert(count == 3);
}

void cpp_class2_test::testMultiplyArrays()
{
	float mockArr1[10] = { 1,1,3,5,3,6,3,1,5,1 };
	float mockArr2[10] = { 11,0,3,55,0,6,0,1,3,1 };
	double mockResult[10];
	cpp_class2::multiplyArrays(mockArr1,mockArr2,mockResult);
	for (unsigned int i=0;i<10;i++) {
		assert(mockResult[i] == mockArr1[i] * mockArr2[i]);
	}
}

void cpp_class2_test::testMergeSortedArray()
{
	unsigned int mockArr1[10] = { 1,2,11,12,34,37,43,46,52,56 };
	unsigned int mockArr2[10] = { 3,12,31,42,54,67,73,76,82,86 };
	const unsigned int expectedResult[20] = {1,2,3,11,12,12,31,34,37,42,43,46,52,54,56,67,73,76,82,86};
	unsigned int mockArr3[20];
	cpp_class2::mergeSortedArray(mockArr1,mockArr2,mockArr3);
	for (unsigned int i=0;i<20;i++) {
		assert(mockArr3[i] == expectedResult[i]);
	}
}


void cpp_class2_test::testReverseArray()
{
	int mockArr[10] = { 11,1,3,55,23,6,32,1,35,81 };
	const int expectedResult[10] = {81,35,1,32,6,23,55,3,1,11};
	cpp_class2::reverseArray(mockArr);
	for (unsigned int i =0;i<10;i++) {
		assert(mockArr[i]==expectedResult[i]);
	}
}

void cpp_class2_test::testTruncateArray()
{
	float mockArr1[10] = { 15.12f,1.124f,3.24f,5.1f,3.f,6.12f,31.4f,141.14f,54.2f,1.13f };
	float expectedResult[10] = { 15.f,1.f,3.f,5.f,3.f,6.f,31.f,141.f,54.f,1.f };
	cpp_class2::truncateArray(mockArr1);
	for (unsigned int i =0;i<10;i++) {
		assert(mockArr1[i] == expectedResult[i]);
	}
}

void cpp_class2_test::testXorArrays()
{
	unsigned int mockArr1[10] = { 1,2,11,12,34,37,43,46,52,56 };
	unsigned int mockArr2[10] = { 3,12,31,42,54,67,73,76,82,86 };
	const unsigned int expectedResult[10] = { 2,14,20,38,20,102,98,98,102,110};
	unsigned int mockArr3[10];
	cpp_class2::xorArrays(mockArr1, mockArr2, mockArr3);
	for (unsigned int i=0;i<10;i++) {
		assert(mockArr3[i] == expectedResult[i]);
	}
}



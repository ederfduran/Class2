#ifndef TESTARRAYUTILS_H
#define TESTARRAYUTILS_H

namespace cpp_class2_test {

	bool checkArrayOrder(unsigned int myA[], size_t size);
	unsigned int testGetPowerOfTwoCount(unsigned int myA[], size_t size);
	unsigned int testGetPrimeCount(unsigned int myA[], size_t size);
	void testMultiplyArrays(float myA1[],
		float myA2[], double myA3[]);
	void testMergeSortedArray(unsigned int myA1[],
		unsigned int myA2[], unsigned int myA3[]);
	void testReverseArray(int myArray[], size_t size);
	void testTruncateArray(float myArray[], size_t size);
	void testXorArrays(unsigned int myA1[],
		unsigned int myA2[], unsigned int myA3[], size_t size);
	}


#endif // !TESTARRAYUTILS_H


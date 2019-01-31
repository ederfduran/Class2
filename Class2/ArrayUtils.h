#ifndef ARRAYUTILS_H
#define ARRAYUTILS_H

#define ARRAYLENGTH 10

namespace cpp_class2 {

	unsigned int getPowerOfTwoCount(unsigned int myA[]);
	unsigned int getPrimeCount(unsigned int myA[]);
	void mergeSortedArray(unsigned int myA1[],
		unsigned int myA2[], unsigned int myA3[]);
	void multiplyArrays(float myA1[],
		float myA2[], double myA3[]);
	template <typename arrayToPrint>
	void printArray(arrayToPrint, int arrayLength);
	void reverseArray(int myArray[]);
	void truncateArray(float myArray[]);
	void xorArrays(unsigned int myA1[],
		unsigned int myA2[], unsigned int myA3[]);
	




}

#endif // !ARRAYUTILS_H


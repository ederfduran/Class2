#ifndef ARRAYUTILS_H
#define ARRAYUTILS_H

#define ARRAYLENGTH 10

namespace cpp_class2 {

	unsigned int getPowerOfTwoCount(unsigned int myA[10]);
	unsigned int getPrimeCount(unsigned int myA[10]);
	void mergeSortedArray(unsigned int myA1[10],
		unsigned int myA2[10], unsigned int myA3[20]);
	void multiplyArrays(float myA1[10],
		float myA2[10], double myA3[10]);
	template <typename arrayToPrint>
	void printArray(arrayToPrint, unsigned int arrayLength);
	void reverseArray(int myArray[10]);
	void truncateArray(float myArray[10]);
	void xorArrays(unsigned int myA1[10],
		unsigned int myA2[10], unsigned int myA3[10]);
	void sort(unsigned int * , unsigned int );
	void swap(unsigned int*,unsigned int*);
	bool checkArrayOrder(unsigned int myA[], unsigned int length);
}

#endif // !ARRAYUTILS_H


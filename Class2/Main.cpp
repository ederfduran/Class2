#include <iostream>
#include "TestUtils.h"
#include "TestArrayUtils.h"


namespace cpp_class2_test {
	namespace testArrays {
		double doubleArray[] = { 1.234,31.234,3.234,41.23,6.5
			,4.322,2.23,3.5,3.23,11.523 };
		int unsigned uIntArray[] = { 10,9,8,7,6,5,4,3,2,1 };
		int unsigned uIntArrayTest[20];
		int unsigned uIntArrayTest1[] = {1,3,4,6,8,16,32,97,700,1000};
		int intArray[] = { 10,-9,8,7,6,-5,4,-3,2,1 };
		float floatArray[] = { 10.234f,9.234f,8.2345f,7.2345f,6.523f
			,5.32f,4.234f,3.5f,2.23f,1.5234f };
	}
}

using namespace cpp_class2_test::testArrays;

int main() {
	cpp_class2_test::testPrintSizes();
	std::cout<< cpp_class2_test::testAreEqual(12.41223156, 12.4122315) <<std::endl;
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testReverseArray(intArray,sizeof(cpp_class2_test::testArrays::intArray));
	std::cout << "---------------------------"<< std::endl;
	cpp_class2_test::testTruncateArray(floatArray,sizeof(intArray));
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testXorArrays(uIntArray, uIntArray, uIntArray, sizeof(uIntArray));
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testMultiplyArrays(floatArray,floatArray,doubleArray);
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testMergeSortedArray(uIntArrayTest1, uIntArrayTest1, uIntArrayTest);
	std::cout << "---------------------------" << std::endl;
	std::cout << "Prime count is : "<<cpp_class2_test::testGetPrimeCount(uIntArrayTest1,sizeof(uIntArrayTest1))<< std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "power of two count : " << cpp_class2_test::testGetPowerOfTwoCount(uIntArrayTest1, sizeof(uIntArrayTest1));


	std::cin.get();
	return 0;
}
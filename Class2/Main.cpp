#include <iostream>
#include "Utils.h"
#include "TestUtils.h"
#include "TestArrayUtils.h"


namespace cpp_class2_test {
	namespace testArrays {
		double doubleArray[] = { 1.234,31.234,3.234,41.23,6.5
			,4.322,2.23,3.5,3.23,11.523 };
		int unsigned uIntArray[] = { 10,9,8,7,6,5,4,3,2,1 };
		int unsigned uIntArrayTest[20];
		int unsigned uIntArrayTest1[] = {1,3,4,6,8,16,32,97,700,1000,1,3};
		int intArray[] = { 10,-9,8,7,6,-5,4,-3,2,1 };
		float floatArray[] = { 10.234f,9.234f,8.2345f,7.2345f,6.523f
			,5.32f,4.234f,3.5f,2.23f,1.5234f };
	}
}

using namespace cpp_class2_test::testArrays;

int main() {
	cpp_class2::printSizes();
	cpp_class2_test::testAreEqualFloat();
	cpp_class2_test::testAreEqualDouble();
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testReverseArray();
	std::cout << "---------------------------"<< std::endl;
	cpp_class2_test::testTruncateArray();
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testXorArrays();
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testMultiplyArrays();
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testMergeSortedArray();
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testGetPrimeCount();
	std::cout << "---------------------------" << std::endl;
	cpp_class2_test::testGetPowerOfTwoCount();


	std::cin.get();
	return 0;
}
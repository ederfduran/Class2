#include "TestUtils.h"
#include "Utils.h"

bool cpp_class2_test::testAreEqual(double a,double b) {
	return cpp_class2::areEqual(a,b);
}

bool cpp_class2_test::testAreEqual(float a,float b) {
	return cpp_class2::areEqual(a, b);
}

void cpp_class2_test::testPrintSizes()
{
	cpp_class2::printSizes();
}

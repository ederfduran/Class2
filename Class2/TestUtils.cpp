#include <cassert>
#include "TestUtils.h"
#include "Utils.h"

void cpp_class2_test::testAreEqualFloat() {
	const float mocka=100.0001f, mockb=100.f;
	const bool areEqual= cpp_class2::areEqual(mocka, mockb);
	assert(!areEqual);
	
}

void cpp_class2_test::testAreEqualDouble() {
	const double mocka = 100.0000001, mockb = 100.;
	const bool areEqual = cpp_class2::areEqual(mocka, mockb);
	assert(!areEqual);
}


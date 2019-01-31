#include <iostream>
#include <limits>
#include <ostream>
#include "Utils.h"

bool cpp_class2::areEqual(double a, double b) {
	return std::abs(a-b) <= std::numeric_limits<double>::epsilon();
}

bool cpp_class2::areEqual(float a,float b) {
	return std::abs(a - b) <= std::numeric_limits<float>::epsilon();
}

void cpp_class2::printSizes() {
	std::cout<< "The Name of Char var is :"<< SHOWNAME(cpp_class2::charVar)<< std::endl;
	std::cout << "Size of char in bytes : " << sizeof(cpp_class2::charVar)<< std::endl;
	std::cout << "val min of char is : " << (int)(std::numeric_limits<char>::min())<< std::endl;
	std::cout << "val max of char is : " << (int)(std::numeric_limits<char>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of short int var is :" << SHOWNAME(cpp_class2::shortIntVar) << std::endl;
	std::cout << "Size of short int in bytes : " << sizeof(cpp_class2::shortIntVar) << std::endl;
	std::cout << "val min of short int is : " << (std::numeric_limits<short int>::min()) << std::endl;
	std::cout << "val max of short int is : " << (std::numeric_limits<short int>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of unsigned short int var is :" << SHOWNAME(cpp_class2::uShortIntVar) << std::endl;
	std::cout << "Size of unsigned short int in bytes : " << sizeof(cpp_class2::uShortIntVar) << std::endl;
	std::cout << "val min of  unsigned short int is : " << (std::numeric_limits<unsigned short int>::min()) << std::endl;
	std::cout << "val max of unsigned short int is : " << (std::numeric_limits<unsigned short int>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of int var is :" << SHOWNAME(cpp_class2::intVar) << std::endl;
	std::cout << "Size of int in bytes : " << sizeof(cpp_class2::intVar) << std::endl;
	std::cout << "val min of int is : " << (std::numeric_limits<int>::min()) << std::endl;
	std::cout << "val max of int is : " << (std::numeric_limits<int>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of unsigned int var is :" << SHOWNAME(cpp_class2::uIntVar) << std::endl;
	std::cout << "Size of unsigned int in bytes : " << sizeof(cpp_class2::uIntVar) << std::endl;
	std::cout << "val min of unsigned int is : " << (std::numeric_limits<unsigned int>::min()) << std::endl;
	std::cout << "val max of unsigned int is : " << (std::numeric_limits<unsigned int>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of long long int var is :" << SHOWNAME(cpp_class2::longVar) << std::endl;
	std::cout << "Size of long long int in bytes : " << sizeof(cpp_class2::longVar) << std::endl;
	std::cout << "val min of long long int is : " << (std::numeric_limits<long long>::min()) << std::endl;
	std::cout << "val max of long long int is : " << (std::numeric_limits<long long>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of float var is :" << SHOWNAME(cpp_class2::floatVal) << std::endl;
	std::cout << "Size of float in bytes : " << sizeof(cpp_class2::floatVal) << std::endl;
	std::cout << "val min of float is : " << (std::numeric_limits<float>::min()) << std::endl;
	std::cout << "val max of float is : " << (std::numeric_limits<float>::max()) << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	std::cout << "The Name of double var is :" << SHOWNAME(cpp_class2::doubleVal) << std::endl;
	std::cout << "Size of double in bytes : " << sizeof(cpp_class2::doubleVal) << std::endl;
	std::cout << "val min of double is : " << (std::numeric_limits<double>::min()) << std::endl;
	std::cout << "val max of double is : " << (std::numeric_limits<double>::max()) << std::endl;

}
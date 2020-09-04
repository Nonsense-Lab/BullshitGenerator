#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <exception>
#include <fstream>
using namespace std;

/**
 * Exceptions' definition
 */

struct FindingError : public exception {
	string fname;
	FindingError(const char* _filename) {
		fname = string("We cannot find the specific string in the string: ") + string(_filename);
	}
	const char* what() const throw() {
		return fname.c_str();
	}
}

#include <string>
#include <stdexcept>
#include <iostream>
#include <exception>
#include "exception.h"

using namespace std;


int main(int argc, char *argv[]) {
	int productIds[]= {4, 5, 8, 10, 13};
	string products[] = { "computer", "flash drive", "mouse", "printer", "camera" };
	cout << getProductID(productIds, products, 5, "mouse") << endl;
	cout << getProductID(productIds, products, 5, "camera") << endl;
	cout << getProductID(productIds, products, 5, "laptop") << endl;
	return 0;
}


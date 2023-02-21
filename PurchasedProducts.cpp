//--------------------------------------------------------------------------------------------------//
//                            Coner Grocer Application
//                                Computer Science
//                        CS210 Programming Languages: Project Three
//                                  Yao Tsikplonu
//                                  Feb 15th, 2023
//--------------------------------------------------------------------------------------------------//
#include <iostream>
#include <fstream>
#include <string>
#include "PurchasedProducts.h"
using namespace std;


string nCharString(size_t n, char c) {
	string userStr;
	userStr = "";
	for (int i = 0; i < n; ++i) {
		userStr += c;
	}
	return userStr;
}
map<string,int> PurchasedProducts::getAllProducts() {
	return productsList;
}

void PurchasedProducts::printProducts() {
	int halfLength;
	//print will have a length of 40 chars
	// for each element in the map
	//print 20 spaces - 1/2 (length of the string + the int) +
	//print the string and the int, then finish with 20-spaces -
	//1/2 (length of the string + length of the int)

	for (auto it = productsList.cbegin(); it != productsList.cend(); it++) {
		halfLength = floor((1.0 / 2) * ((it->first).length() + to_string(it->second).length() + 1));
		cout << nCharString(20 - halfLength, ' ') << it->first << " " << it->second << endl;
	}
}
//Histogram (prints histogram)

void PurchasedProducts::displayHistogram() {
	int half;
	//print 20 spaces - half of the lenght of (string + the int) + 1
	//print the string, a space, and asterisks int times

	for (auto it = productsList.cbegin(); it != productsList.cend(); it++) {
		half = floor((1.0 / 2) * ((it->first).length() + it->second + 1));
		cout << nCharString(20 - half, ' ') << it->first << " ";
		for (int i = 0; i < it->second; i++) {
			cout << "*";
		}
		cout << endl;
	}
}

//Create a map with keys and their appropriate value

void PurchasedProducts::recordProducts(ifstream& inFS) {
	string str;
	ofstream outFS;
	outFS.open("frequency.dat");
	while (!inFS.eof()) {
		inFS >> str;
		
		productsList.emplace(str, 0);
		if (productsList.count(str) == 1) {
			productsList.at(str) = productsList.at(str) + 1;
		}
	}
	for (auto it = productsList.begin(); it != productsList.end(); it++) {
		outFS << it->first << " " << it->second << endl;
	}
}
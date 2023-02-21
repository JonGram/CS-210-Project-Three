//--------------------------------------------------------------------------------------------------//
//                            Coner Grocer Application
//                                Computer Science
//                        CS210 Programming Languages: Project Three
//                                  Yao Tsikplonu
//                                  Feb 15th, 2023
//--------------------------------------------------------------------------------------------------//
#include "Product.h"
#include <fstream>
#include <map>
#include <string>
using namespace std;

Product::Product(string itemName) {
	productName = itemName;
}
Product::Product() {
	productName = "NoName";
	purchasesCount = 0;
}
Product::~Product() {
	delete this;
}
string Product::getName() {
	return productName;
}
void Product::setNumPurchases(int purchasedNtimes) {
	purchasesCount = purchasedNtimes;
}
int Product::getNumPurchases(){
	return purchasesCount;
}
void Product::setProductName(string name) {
	productName = name;
}
void Product::printProduct() {
    cout << productName << " " << purchasesCount << endl;
}

//Menu

void displayMenu() {
	cout << "===========================================" << endl;
	cout << "|                  MENU                   |" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "|1 - Search Product | 2 - Display Products|" << endl;
	cout << "|3 - Histogram      | 4 - Exit            |" << endl;
	cout << "===========================================" << endl;
}
//Modify any string close to the data in file

string modifyName(string item) {
	int i;
	item[0] = toupper(item[0]);
	for (i = 1; i < item.length(); i++) {
		item.at(i) = tolower(item.at(i));
	}
	if (item.at(item.size() - 1) != 's') {
		item.push_back('s');
	}
	return item;
}
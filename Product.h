//--------------------------------------------------------------------------------------------------//
//                            Coner Grocer Application
//                                Computer Science
//                        CS210 Programming Languages: Project Three
//                                  Yao Tsikplonu
//                                  Feb 15th, 2023
//--------------------------------------------------------------------------------------------------//
#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

using namespace std;
class Product 
{
public: 
	Product(string name);               //constructor
	Product();
	~Product();                         //Destructor
	string getName();
	void setProductName(string name);
	void setNumPurchases(int num);
	int getNumPurchases();
	void printProduct();

private:
	string productName;
	int purchasesCount;
};
void displayMenu();
string modifyName(string item);
string nCharString(size_t n, char c);
#endif
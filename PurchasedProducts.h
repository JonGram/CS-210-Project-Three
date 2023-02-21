//--------------------------------------------------------------------------------------------------//
//                            Coner Grocer Application
//                                Computer Science
//                        CS210 Programming Languages: Project Three
//                                  Yao Tsikplonu
//                                  Feb 15th, 2023
//--------------------------------------------------------------------------------------------------//
#ifndef PURCHASEDPRODUCTS_H
#define PURCHASEDPRODUCTS_H
#include <iostream>
#include<map>
using namespace std;

class PurchasedProducts
{
public: 
	map<string,int> getAllProducts();
	void printProducts();
	void displayHistogram();
	void recordProducts(ifstream& inFS);

private:
	map<string, int> productsList;
};
#endif
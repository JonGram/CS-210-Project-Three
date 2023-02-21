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
#include <cmath>
#include "Product.h"
#include "PurchasedProducts.h"
using namespace std;

int main() {
	PurchasedProducts* allProducts;                                     //all purchased products
	//Product* itemPurchased;                                             //Instance of Product
	string userChoice;                                                  //User defined
	string product;                                                     //User defined product name
	ofstream outFS;                                                     //output file 
	ifstream inFS;                                                      // Input file
	allProducts = new PurchasedProducts();

	inFS.open("CS210_Project_Three_Input_File.txt");                

	if (inFS.fail()) {
		cout << "Input file failed." << endl;
		return 0;
	}
	if (!inFS.is_open()) {
		cout << "File is not open." << endl;
		return 0;
	}

	if (inFS.good()) {
		allProducts->recordProducts(inFS);                                   //read and store products into map data type and keep a copy in frequency.dat
		displayMenu();	                                                     //Display menu		
		cout << "Enter menu choice: ";
		getline(cin, userChoice);
		do{			 
			if (userChoice[0] == '1') {                                       //Menu choice one (search product)
				cout << "Enter the product's name: ";
				cin >> product;

				product = modifyName(product);

				if (allProducts->getAllProducts().count(product) == 1) {      //if product is in the map
				    cout<< allProducts->getAllProducts().at(product) << " "<<product << " were purchased." << endl;
				}
				else {                                                        //Otherwise, product was not purchased                            
					cout << product << " were not purchased today." << endl;   
				}
				cin.clear();
			}
			else if (userChoice[0] == '2'){                                   //Menu choice two (pair, product and frequency)

				cout << "Displaying products and number of time purchased" << endl;
				allProducts->printProducts();
			}
			else if(userChoice[0] == '3'){                                    //Menu choice three (Histogram)
				cout << "          Displaying histogram..." << endl;
				allProducts->displayHistogram();
			}
			else if (userChoice[0] == '4') {                                  //Menu choice four (exit)
				cout << "Exiting..." << endl;
								
			}
			if (userChoice[0] != '4') {
				cout << "Menu choice: ";
				cin >> userChoice;
			}

		} while (userChoice[0] != '4');
		cout << "Goodbye!"<< endl;
		delete allProducts;
	}
	return 0;
}

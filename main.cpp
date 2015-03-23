/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2015 19:44:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization: 
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <vector>
#include "class_hmm.h"

void fillVector(std::vector <Level>&);
	//fillVector - fill in Level information 
	//	@Param vector<Level>& - Levels in class

void printVector(const std::vector<Level>&);
	// printVector - prints the information of all Levels
	//	@Param const vector<Level>& - Levels in class


int main () {
	
	std::vector<Level> myLevel;
	
	fillVector(myLevel);
	printVector(myLevel);

return 0;
}

void fillVector(std::vector<Level>& newMyLevel)	{
	int number = 4;	
	int Vectrans[4] = {2,3,3,5};

	std::cout << "There are " << number << " of transition states";
	
	for (int i = 0; i<number; i++) {

	std::cin >> Vectrans[i];
	std::cout << " Level " << i << " has " << Vectrans[i] << "transitions"; 
	
	Level newlvl(Vectrans[i]);	
	newMyLevel.push_back(newlvl);	
	std::cout << std::endl;

	}
std::cout << std::endl;


}

void printVector(const std::vector<Level>& newMyLevel) {

	unsigned int size = newMyLevel.size();
	for (unsigned int i = 0; i < size;i++) {
	std::cout << "Level: " << i << " transition: " << newMyLevel[i].getTransition() << std::endl;

	} 

}
	

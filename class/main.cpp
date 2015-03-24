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
#include "Level.h"
#include "Node.h"


void fillVector(std::vector<std::vector<Node> >&);
	// fillNode - fill in Node information
	//	@Param vector<vector<Node> >& - Nodes in class Levels.transitions[array]

void printVector(const std::vector<std::vector<Node> >&);
	// printNode - prints the information of all Nodes
	// @param const vector<vector<Node> >&


void fillLevel(std::vector<Level>&);
	// fillLevel - fill in Level information 
	//	@Param vector<Level>& - Levels in class

void printLevel(const std::vector<Level>&);
	// printVector - prints the information of all Levels
	//	@Param const vector<Level>& - Levels in class

int main () {
	int iarr[4]={2,3,3,5};

	std::vector<Level> myLevel;
	
	fillLevel(myLevel);
	printLevel(myLevel);

	std::vector<std::vector<Node> > myNode;
	
	fillVector(myNode);
//	printVector(myNode);

return 0;
}
/*	
void printVector(const std::vector<std::vector<Node> >& newMyNode) {
	unsigned int isize= newMyNode.size();
	for (unsigned i=0;i<isize;i++){
	std::cout << "Level: " << i << " transition: "<< std::endl; 
		unsigned int jsize = newMyNode[i].size();
		for (unsigned j=0;j<jsize;j++){
		std::cout<< newMyNode[i][j].getNext() << " ";
		}
	std::cout<< std::endl;
	}
}
*/

void fillVector(std::vector<std::vector<Node> >& newMyNode) {
	//define number of i iterations

	int number = newMyNode.size();
	int iarr[4]={2,3,3,5};
	

	//define number of j iterations 

	int Vectrans[4] = {2,3,3,5};
	int ne;

//	std::cout << std::endl<< number << std::endl;
	int i,j;
	
	for (i=0;i<4;i++) {
	newMyNode.push_back(std::vector<Node>(0,0));		
		for(j=0;j<Vectrans[i];j++) {
		ne = j+1;
		Node newnode(ne);
		newMyNode[i].push_back(newnode);
		std::cout<<newMyNode[i][j].getNext();
		}
	std::cout<<std::endl;
	}
}



void fillLevel(std::vector<Level>& newMyLevel)	{
	int number = 4;	
	int Vectrans[4] = {2,3,3,5};
	int trans;

	std::cout << std::endl <<"There are " << number << " of transition states"<< std::endl;
	
	for (int i = 0; i<number; i++) {

	trans = Vectrans[i];

	Level newlvl(trans);	
	newMyLevel.push_back(newlvl);	
	
	}
std::cout << std::endl;

}



void printLevel(const std::vector<Level>& newMyLevel) {

	unsigned int size = newMyLevel.size();
	for (unsigned int i = 0; i < size;i++) {
	std::cout << "Level: " << i << " transition: " << newMyLevel[i].getTransition() << std::endl;

	} 

}
	

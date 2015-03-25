/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main.cpp for Beagle_Class_HMM
 *
 *        Version:  1.0
 *        Created:  03/23/2015 19:44:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyunkyu Lee, Buhm Han*
 *   Organization:  Han Lab
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <vector>
#include "Level.h"
#include "Node.h"
#include "Edge.h"

//function Declarations

void fillNode(std::vector<std::vector<Node> >&);
	// fillNode - fill in Node information
	//	@Param vector<vector<Node> >& - Nodes in class Levels.transitions[array]

void printNode(const std::vector<std::vector<Node> >&);
	// printNode - prints the information of all Nodes
	// @param const vector<vector<Node> >&


void fillLevel(std::vector<Level>&);
	// fillLevel - fill in Level information 
	//	@Param vector<Level>& - Levels in class

void printLevel(const std::vector<Level>&);
	// printVector - prints the information of all Levels
	//	@Param const vector<Level>& - Levels in class

//****************************************************************
//*** ***** ****** *******     *** ** ****************************
//***  ***  ***** * ******** *****  * ****************************
//*** * * * ****     ******* ***** *  ****************************
//*** ** ** *** ***** ****     *** ** ****************************
//****************************************************************

int main () {

	std::vector<Level> myLevel;
	
	fillLevel(myLevel);
	printLevel(myLevel);

	std::vector<std::vector<Node> > myNode;
	
	fillNode(myNode);
	printNode(myNode);

	std::vector<std::vector<std::vector<Edge> > > myEdge;
	
	fillEdge(myEdge, myNode);
		

return 0;
}
//****************************************************************
//****************************************************************
//****************************************************************
//****************************************************************
//****************************************************************
//****************************************************************

// Edge functions ************************************************************************

void fillEdge(	std::vector<std::vector<std::vector<Edge> > >& newMyEdge, 
					std::vector<std::vector<Node> >& newMyNode					) {
		

// Node functions ************************************************************************

void printNode(const std::vector<std::vector<Node> >& newMyNode) {
	unsigned int isize= newMyNode.size();
	for (unsigned i=0;i<isize;i++){
	std::cout << "Level: " << i+1 << " nodes: "<< std::endl; 
		unsigned int jsize = newMyNode[i].size();
		for (unsigned j=0;j<jsize;j++){
		std::cout<<"{" <<newMyNode[i][j].getNext1() << " " <<newMyNode[i][j].getNext2()<< "} ";
		}
	std::cout<< std::endl;
	}
}


void fillNode(std::vector<std::vector<Node> >& newMyNode) {

// vector Level will be called to justify the number of iterations for the Node Vector

	int i,j;
	int Vectrans[5] = {1,2,2,3,1};
	int ne;
	int arr[5][5][2]=	{   				//Class objects{nodes} have next node information{major,minor}
								{{1,2}},		// None=0, Nodenum=#
								{{1,2},{1,0}},
								{{1,2},{0,3}},
								{{1,1},{0,1},{1,0}},
								{{0,0}}
							};
		
	for (i=0;i<5;i++) {
	newMyNode.push_back(std::vector<Node>());		
		for(j=0;j<Vectrans[i];j++) {
		ne = j+1;
		Node newnode(arr[i][j][0],arr[i][j][1]);
		newMyNode[i].push_back(newnode);
		}
	}

	std::cout<<std::endl;
}


// End of Node functions ************************************************************************


// Level functions ************************************************************************

void fillLevel(std::vector<Level>& newMyLevel)	{
	int number = 5;	
	int Vectrans[5] = {1,2,2,3,1};
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
	std::cout << "Level: " << i+1 << " transition: " << newMyLevel[i].getTransition() << std::endl;

	} 

}
	
// End of Level functions ************************************************************************

/*
 * =====================================================================================
 *
 *       Filename:  Node.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2015 12:52:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyunkyu Lee, Buhm Han
 *   Organization:  Han lab
 *
 * =====================================================================================
 */

#ifndef Node_H
#define Node_H

#include <iostream>
#include <string>

class Node {
public:

	//Default constructor 
	Node();
	
	//Overload constructor
	Node(int, int);

	//Destructor
	~Node();
	
	//Accessor Functions 
	int getNext1() const;
		// getNext1
		// @return int - Address of next major node
		
	int getNext2() const;
		// getNext2
		// @return int - Address of next minor node 

	//Mutator Functions
	void setNext1(int);
		// setNext1
		// @Param int - Address for next major node

	void setNext2(int);
		// setNext2
		// @Param int - Address for next minor node

private:

	//Member Variables
	int next1;
	int next2;

    Node* afront;
    Node* bfront;
    double aweight;
    double bweight;
    Node* aback;
    Node* bback;



};


#endif

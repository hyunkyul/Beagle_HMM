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
	Node(int);

	//Destructor
	~Node();
	
	//Accessor Functions 
	int getNext() const;
		// getNext
		// @return int - Address of next node 

	//Mutator Functions
	void setNext(int);
		//setNext
		// @Param int - Address for next node

private:

	//Member Variables
	int next;

};


#endif

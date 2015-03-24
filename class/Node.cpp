/*
 * =====================================================================================
 *
 *       Filename:  Node.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2015 12:57:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyunkyu Lee
 *   Organization:  Han lab
 *
 * =====================================================================================
 */

#include "Node.h"

Node::Node() {
	next = 0;
}

Node::Node(int ne) {
	next = ne;
}

Node::~Node(){

}

int Node::getNext() const {
	return next;
}

void Node::setNext(int ne)	{
	next = ne;
}


	

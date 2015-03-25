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
	next1 = 0;
	next2 = 0;
}

Node::Node(int ne1, int ne2) {
	next1 = ne1;
	next2 = ne2;
}

Node::~Node(){

}

int Node::getNext1() const {
	return next1;
}

int Node::getNext2() const {
	return next2;
}

void Node::setNext1(int ne1)	{
	next1 = ne1;
}

void Node::setNext2(int ne2)	{
	next2 = ne2;
}


	

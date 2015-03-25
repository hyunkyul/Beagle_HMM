/*
 * =====================================================================================
 *
 *       Filename:  edge.h
 *
 *    Description:  edge_header
 *
 *        Version:  1.0
 *        Created:  03/25/2015 09:28:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyunkyu Lee, Buhm Han* 
 *   Organization:  Han Lab
 *
 * =====================================================================================
 */

#ifndef Edge_H
#define Edge_H

#include <iostream>
#include <string>

class Edge {
public:
		
	//Default constructor
	Edge();
   	
	//Overload constructor
	Edge(int, int, double);

	//Destructor
	~Edge();	

	//Accessor Functions
	int getEndPoint() const;
		//	getEndPoint
		// @return int - Address of the next node
	
	int getObserve() const;
		// getOvserve
		// @return int - is the node activate for the samples?	

	double getWeight() const;
		//	getWeight
		// @return double - the identity of the edge

	//Mutator Functions
	void setEndPoint(int);
		// setEndPoint
		// @Param int - Address of the next node 

	void setObserve(int);
		// setObserve
		// @Param int - is the node activate?

	void setWeight(double);
		// setWeight
		// @Param double - the identity for the edge


private:
	int endpoint;		// the direction of the edge to the node
	int observe;		// 1 or 0 to activate forward algorithm calculations
	double weight;		// represent the unique identity of the edge



};

#endif	

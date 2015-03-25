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
	



private:
	int endpoint;		// the direction of the edge to the node
	double weight;		// represent the unique identity of the edge
	int observe;		// 1 or 0 to activate forward algorithm calculations
	

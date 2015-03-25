/*

 * =====================================================================================
 *
 *       Filename:  Edge.cpp
 *
 *    Description:  Edge class definitions
 *
 *        Version:  1.0
 *        Created:  03/25/2015 10:48:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyuknyu Lee, Buhm Han*
 *   Organization:  Han Lab
 *
 * =====================================================================================
 */

#include "Edge.h"

Edge::Edge() {
	endpoint	= 0;
	observe 	= 0;
	weight 	= 0;
}

Edge::Edge(int endnode, int bivar, double edge){
	endpoint = endnode;
	observe 	= bivar;
	weight	= edge;
}

Edge::~Edge(){

}

int Edge::getEndPoint() const {
	return endpoint;
}

int Edge::getObserve() const {
	return observe;
}

double Edge::getWeight() const {
	return weight;
}

void Edge::setEndPoint(int endnode) {
	endpoint = endnode;
}

void Edge::setObserve(int bivar) {
	observe = bivar;
}

void Edge::setWeight(double edge) {
	weight = edge;
}



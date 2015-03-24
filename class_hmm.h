/*
 * =====================================================================================
 *
 *       Filename:  class_hmm.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2015 19:45:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

//Header

#ifndef CLASS_HMM_H
#define CLASS_HMM_H

#include <iostream>
#include <string>

class Level {
public:

	//Default constructor
	Level();

	//Overload Contructors 
	Level(int);

	//Destructor
	~Level();

	//Accessor Functions
	int getTransition() const;
		//getTrans
		//@return int - number of transitions

	//Mutator Functions 
	void setTransition(int);
		//setTransition
		//@Param int - number of transitions 

private:

	//Member variables
	int transition;
	
};

#endif

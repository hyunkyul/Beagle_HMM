/*
 * =====================================================================================
 *
 *       Filename:  class_hmm.cpp
 *
 *    Description:  duplicate beagle hmm using C++ with classes
 *
 *        Version:  1.0
 *        Created:  03/23/2015 12:46:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyunkyu Lee, Buhm Han*
 *   Organization:  Han lab
 *
 * =====================================================================================
 */


// libraries
#include <iostream>

class level	
{
private:
	int transition;
public:
	level (int);
	level ();
	int trans() {return transition;}
};

	//int set_trans(int);
//	}; 
level::level():transition(0){}

level::level(int x): transition(x) {}


/*
int level::set_trans(int x)
{
	transition=x;
	return 0;
}
*/


int main() 
{
	int i;
		
	std::cout << "Initializing : complete \n";

	level lvl1 (2);	
	level lvl2 (3);	
	level lvl3 (3);	
	level lvl4 (5);	

	std::cout << "transition map	: " << lvl1.trans() << lvl2. trans() 
	<< lvl3.trans() << lvl4.trans() <<"\n\n";
return 0;
}



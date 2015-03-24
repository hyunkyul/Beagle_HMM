#include <vector>
#include <iostream>

void makeVectorSpace(std::vector<std::vector<int> >&);

void printVector(std::vector<std::vector<int> >&);

int main()
{
	static const int arr[]= {2,3,3,5};
	std::vector<std::vector<int> > myVector(arr,arr+sizeof(arr)/sizeof(arr[0]));

	makeVectorSpace(myVector);
	printVector(myVector);
}

void makeVectorSpace(std::vector<std::vector<int> >& newMyVector) {
	int i,j,k;
	static const int arr[]= {2,3,3,5};
	k=4;
	for (i=0;i<k;i++)
	{
		for (j=0;j<arr[i];j++)
		{
		std::cout<<"Enter the number for Matrix 1";
		newMyVector[i][j]= j;
		}

	}


}


void printVector(std::vector<std::vector<int> >& newMyVector) {
	int i,j,k;
	k=4;
	static const int arr[]= {2,3,3,5};
	for (i=0;i<k;i++)
	{
		std::cout<<std::endl;
		for (j=0;j<arr[i];j++)
		{
			std::cout<<newMyVector[i][j]<<" ";
		}

	}
	std::cout<<std::endl<<newMyVector.size()<<" " <<newMyVector.max_size()<<std::endl;
}

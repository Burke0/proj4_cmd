/*

 *
 * 	 Created on: Mar 20, 2019
 *      Author: John Alex Burke
 */

#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{

	if(argc!=3 )
		cerr<<"incorrect number of arguments"<<endl; // error check: number of args
	if(atoi(argv[1])<1)
		cerr<<"input max>= 1, shift>=0";							//makes sure argument 1 is >=1
	if(atoi(argv[2])<0)
		cerr<<"input max>= 1, shift>=0";							// makes sure argument 2 is >=0

	int max=atoi(argv[1]); 											//stores argument 1 as max
	int shift=atoi(argv[2]);         								//stores argument 2 as shift

	for(int i=0; i<max/2; i++)        // each loop prints one line of first half of *
	{
		for(int n=0; n<shift; n++) 	  // this loop deals with shift
			cout<<" ";
		if(max % 2==0)				  // accounts for integer division for even max
		{							  // &
		for(int j=max/2; j>i+1; j--)  // prints correct number of spaces each line to keep it lined up
			cout<<" ";
		}

		if(max % 2==1)				    // accounts for integer division for odd max
		{								// &
			for(int j=max/2; j>i; j--)  // prints correct number of spaces each line to keep it lined up
				cout<<" ";
		}
		for(int j=0; j<=i; j++)         // prints stars for first half
			cout<<"*";

		cout<<endl;

	}

	for (int i=0; i<=max/2; i++)     // each loop prints one line of second half of *
	{
		for(int n=0; n<shift; n++)   // shift loop
			cout<<" ";
		if(max % 2==0)
		{
			for(int j=max/2; j>i; j--)// stars for even max
				cout<<"*";
		}
		if(max % 2==1)
		{
			for(int j=max/2; j>=i; j--)//stars for odd max
				cout<<"*";
		}
		cout<<endl;

	}

	return 0;
}




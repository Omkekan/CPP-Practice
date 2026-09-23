#include<iostream>
//Find minimum and maximum in the given array, along with the position of each. 
using namespace std;
int main()
{
	int a[]={66,11,55,22,99,88,77,12,45,67,89,34,28,19};
	int size=sizeof(a)/sizeof(a[0]);
	//Size of entire array / size of one block 
	//56/4-->14
	cout<<"\nArray length is:"<<size<<endl;
	//create references for min,min_position,max,max_position
	int min=a[0];
    int max=a[0];
	int min_position=0;
    int max_position=0;
	for(int index=1;index<size;index++)
	{
	  if (a[index]<min)
      {
        min=a[index];
        min_position=index;
      }
      else if (a[index]>max)
      {
        max=a[index];
        max_position=index;
      }
	}
	cout<<"minimum: "<<min<<endl;
    cout<<"max: "<<max<<endl;
    cout<<"minpos: "<<min_position<<endl;
    cout<<"maxpos: "<<max_position;
	//Print the maximum and the position of the maximum. 
	
	return 0;
}

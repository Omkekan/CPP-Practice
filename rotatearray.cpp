#include<iostream>
//A user has been provided with an array of five elements. Accept from the user a number of types `rotation` and perform a clockwise rotation in the given array,
// printing every pass, every rotation in the process.  
using namespace std;
int main()
{
	int a[]={11,22,33,44,55};
	int size=sizeof(a)/sizeof(a[0]);
	cout<<"\nArray length is:"<<size;
	int rotations;
	cout<<"\nEnter the number of times rotation is needed: ";
	cin>>rotations;
	
    for ( int r=1; r<=rotations; r++)
    {
        int temp = a[0];
        for (int index=1; index<size; index++)
        {
            a[index-1]=a[index];
        }
        a[size-1]=temp;
        cout << "\nPass " << r << ": ";
        for (int item:a) {
            cout << item << " ";
    }
     return 0;
    }
}
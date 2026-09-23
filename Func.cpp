//Create a function called `area` which will accept a radius and print the area of a circle. 
#include<iostream>
using namespace std;
//The function will accept the arguments via the parameters, 
//perform the necessary processing, 
//and print the final result. 
void area(float no1)//stored in n1-->no1   n2--->no2
{
	//no1,no2:1. Local copy of data kept only within the function when the function is over
	cout<<"\narea of circle";
	cout<<"\n"<<"Pi * R^2 = "<<(3.14*no1*no1);
}

int main()
{
//The job of reading data and passing it to the function is done by the main script. The actual processing of the data and the result printing are done by the function. 
   float no1;
   cout<<"Enter Radius of circle: \n";
   cin>>no1;  
   area(no1);//pass by value
   return 0;
}

#include<iostream>
/*

*/
using namespace std;
int main()
{
	int choice;
    float num2=0.00;
    float num1=0.00;


	do
	{
        
        //menu
		cout<<"\ncalculator";
		cout<<"\n1.enter number";
        cout<<"\n2.ADD";
		cout<<"\n3.SUB";
		cout<<"\n4.MULTI";
        cout<<"\n5.DIV";
		cout<<"\n0.Exit";
		cout<<"\n:";
		//input
		cin>>choice;
		//switch to do taks
		switch(choice)
		{
			case 1:
                cout<<"enter first number: ";
                cin>>num1;
                cout<<"enter second number: ";
                cin>> num2;
            case 2:
				cout<<"Addition";
                cout<<"\nAns: "<<num1+num2;
				break;
			case 3:
				cout<<"Subtraction";
                cout<<"\nAns: "<<num1-num2;
				break;
			case 4:
				cout<<"Multiplication";
                cout<<"\nAns: "<<num1*num2;
				break;		
            case 5:
                cout<<"Division";
                cout<<"\nAns: "<<num1/num2;	
			case 0:
				cout<<"\nExiting system. Thanks for using it. ";
				break;			
			default:
				cout<<"\n invalid input";
				break;
		}
	}while(choice!=0);//Till exit option is not selected. 
	return 0;
}

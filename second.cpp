#include<iostream>
	using namespace std;
	int main()
	{
		int marks;
		cout<<"Enter your marks: ";
		cin>>marks;
		if (marks>=90 && marks<=100)
		{
			cout<<"\nGrade: A";
		}
		else if (marks>=75 && marks<=89)
		{
			cout<<"\n Grade: B";
		}
		else if (marks>=60 && marks<=74)
		{
			cout<<"\n Grade: C";
		}
		else if (marks>=40 && marks<=59)
		{
			cout<<"\n Grade: D";
		}
		else
		{
			cout<<"\nGrade: F";
		}
		
		return 0; 
	}
/*Take marks as input and display the grade:
Marks
Grade
90–100
A
75–89
B
60–74
C
40–59
D
Below 40
F

Also handle marks outside the valid range 0–100 by displaying:
"Invalid Marks"*/
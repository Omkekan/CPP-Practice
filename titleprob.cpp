#include<iostream>
#include<string>
using namespace std;
int main()
{
	string up;
    cout<<"enter a string: ";
    cin>>up;
    bool flag = true;
    for (int i = 1; i <up.length(); i++)
    {
        if (line(i)==" ")
        {
            flag= true;
        }
        else if (flag)
        {
            line[i]={char}toupper(line(i)); 
        }
        
    }
    
    cout<<up;
    

	return 0;
}
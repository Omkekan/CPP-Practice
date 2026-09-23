
//size, length,sizeof, string

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	cout<<"Enter a line:";
	getline(cin,line);
	cout<<"\nyou entered:"<<line;
	cout<<"\nsizeof:"<<sizeof(line);
	cout<<"\nsize:"<<line.size()<<"Returns the total number of characters. ";
	cout<<"\nlength:"<<line.length();
	
	for(int i=0;i<line.length();i++)
	{
		cout<<"\ni="<<i<<":  "<<line[i];
	}
	
	return 0;
}

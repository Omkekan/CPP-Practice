#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin("career.txt");
if(!fin)//If the file is opened properly then `fin` will hold a reference to the file. 
//otherwise it would be null
{
	cout<<"\nThere was an error in opening the file. ";
}
else
{
	
	string line;
	while (getline(fin, line))//The loop will run till `getline` reaches the end of the file.
	{
	cout << line << '\n';
	}
	fin.close();
}
return 0;
}

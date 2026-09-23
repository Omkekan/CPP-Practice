#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string user,data;
cout<<"Enter your name:";
getline(cin,user);
try
{
    if (user != "temp2")
    {
        throw user;
    }
    
}
catch(const string& e)
{
    cout<<"user not found"<<e<<endl;
}

ofstream fout(user+".txt",ios::app);
cout<<"\nEnter what do you want to save:";
getline(cin,data);
fout<<data<<"\n";
fout.close();
cout << "Data written successfully.";
return 0;
}
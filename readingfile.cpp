#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin("temp.txt");
string line;
while (getline(fin, line))
{
cout << line << '\n';
}
fin.close();
return 0;
}

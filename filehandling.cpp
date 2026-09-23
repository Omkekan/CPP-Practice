#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("temp.txt");
    fout<<"hi my name is om";
    fout.close();
    cout<<"file created successfully.";
    return 0;

}
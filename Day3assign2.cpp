#include <iostream>
using namespace std;

int main(){

    int arr[10];
    int sum=0;
    int below= 0;
    int above= 0;

    cout<<"enter 10 numbers in array: ";
    for (int i = 0; i <10; i++)
    {
        cin>>arr[i];
        sum += arr[i]; 
    }
    cout<<sum;
    double avg= 0;
    avg=(double)sum/10;
    cout<<"\nTotal average: "<<avg<<endl;

    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i]>avg)
        {
            cout<<"\nabove avg num: "<<arr[i]<<' ';
            above++;
        }
        
    }


    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i<avg])
        {
            cout<<"\nbelow avg numbers: "<<arr[i]<<' ';
            below++;
        }
        
    }
    
    cout<<"\nTotal above avg numbers: "<<above<<'\n';
    cout<<"Total below avg numbers: "<<below;
    
    
    return 0;
}
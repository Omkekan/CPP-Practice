#include<iostream>
using namespace std;
int main()
{
	char a;
    int price1;
    cout<<"User1 enter product letter: ";
    cin>>a;
    cout<<"user1 enter price: ";
    cin>>price1;
    int count1=0;
    
	while(true)
	{
        int price2;
        cout<<"\nguess the Price: ";
        cin>> price2;
        if (price1==price2)
        {
            cout<<"\nyou guessed right price no 1 is "<< price1<<" and price no 2 is "<<price2;
            break;
        }
        else{
            cout<<"\nyou guessed wrong enter again";
            count1++;
        }
        	
	}
    cout<<"\ntotal guess atempts: "<<count1;
	cout<<"\ngame over :bye bye";
	return 0;
}
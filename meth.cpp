#include<iostream>
#include<string>
//use of +
using namespace std;
int main()
{
/*	string word1,word2,word3;
	word1="am";
	word2="ar";
	word3=word1+word2;//The `+` symbol is used to concat one string to another. 
	cout<<word3;*/
	string s2;
    cout<<"enter word: ";
    cin>>s2;
    string reverseword="";
    for (int i = s2.length()-1; i>=0; i--)
    {
    reverseword+=s2[i];
    }
    if (reverseword==s2)
    {
        cout<<"It is a pallindrome";
    }
    else if (reverseword==s2)
    {
        cout<<"It is not a pallindrome";
    }

    cout<<"reverseword: "<<reverseword;
	return 0;
}
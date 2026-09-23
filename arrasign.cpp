#include <iostream>
using namespace std;

int main(){
    string input;
    cout<<"enter a sentence: ";
    getline(cin, input);
    cout<<input;
    int upper = 0;
    int lower = 0;
    int nume = 0;
    int words = 0;

    bool inword = false;
    for(int i=0; i<=input.length(); i++)
	{
		char c = input[i];
        if (c>='A' && c<='Z')
        {
            upper++;
        }
        else if (c>='a' && c<='z')
        {
            lower++;
        }
        else if (c>=0 && c<=9)
        {
            nume++;
        }

        if (c==' ')
        {
            inword = false;
        }
        else if (!inword)
        {
            inword= true;
            words++;
        }
          
	}

    cout<<"\nUppercase Letters: "<<upper<<"\n";
    cout<<"Lowercase Letters: "<<lower<<"\n";
    cout<<"Numerical characters: "<<nume<<"\n";
    cout<<"Number of words: "<<words<<"\n";


    return 0;
}
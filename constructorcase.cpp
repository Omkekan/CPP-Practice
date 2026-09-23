
class Human
{
private:
    string name;
public:
 Human(string name)
    
    {
        this->name = name;
     	cout<<"\nA human called "<<this->name<<" is created.";
    }
  
	~Human()
	{
		cout<<"\nR.I.P::::::::"<<name;
	}
};

int main()
{
	Human *p=new Human("Shaktiman");
	cout<<"\n somethings....";
	cout<<"\n somethings....";
	cout<<"\n somethings....";
	cout<<"\n somethings....";
	cout<<"\n somethings....";
	delete p;
	//With dynamic memory constraint if we are using a pointer to allocate memory, we will need to call `delete`. Otherwise memory will not get freed. 
	//Human h("super");

    return 0;
}


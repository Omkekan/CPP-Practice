#include <iostream>
using namespace std;



class Complex
{
private:
    int img,rel;

public:
    void set_amount(int rel,int img)
    {
        this->rel=rel;
        this->img=img;
    }
    void display()
    {
    	cout<<"\n"<<rel<<" + "<<img<<" i";
	}
 friend Complex operator+(Complex n1,Complex n2);
};
Complex operator+(Complex n1,Complex n2)
{
	Complex ans;
	ans.rel=n1.rel+n2.rel;
	ans.img=n1.img+n2.img;
	return ans;//We are returning an answer, which will be stored in the `main` part and then can be used to display. 
}
int main()
{
    Complex c1;
    c1.set_amount(5,3);
    Complex c2;
    c2.set_amount(3,7);
    c1.display();
    c2.display();
    Complex total=c1+c2;
    total.display();
    return 0;
}

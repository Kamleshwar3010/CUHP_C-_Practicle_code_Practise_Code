#include<iostream>
using namespace std;
class base{
	public:
	int x;
   virtual void display ()=0;
};

class derived:public base{
	public :
	void display(){
		cout<<"Derived Class value "<<x<<endl;
	}
};
int main(){
	//base b; //not allowed
	derived d;
	base *bptr=&d;
	derived *dptr=&d;
	bptr->x=100;
    bptr->display();
	dptr->display();
  return 0;
}
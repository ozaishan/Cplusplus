/* 1. C++ program to create a simple class and object.*/

#include  <iostream>
using namespace std;
 
class Hello
{
	public:
    	void sayHello()
    	{
            	cout << "Hello World" << endl;
    	}
};
 
int main()
{
	Hello h;
	 
	h.sayHello();
	 
	return 0;
}

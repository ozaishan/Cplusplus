#include<iostream>
using namespace std;
class A
{
private:
    int id;
    static int count; 
public:
    A();
    ~A();
};

A::A()
{
    count ++;
    id = count;
    cout << "constructir for id "<<id<<endl;
}

A::~A()
{
    cout << "destructor for id"<<id << endl;
}
int A:: count = 0;
int main(){
    A a[3];
    return 0;
}

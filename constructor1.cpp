// construcctor are special member function of class that are automatically invoked whenever a object is created
// they donot have return type
// they have same name as of the class
//it can have default arguements 
//it should be declared in public section of the class
// we cannot refer to their address
 #include<iostream>
 using namespace std;
 class Ishan{
    int a , b;
    public:
    Ishan(){ a=0; b=0;}
    void prinddata(){
        cout << "The value of a and b are " << a << "and " <<b <<endl;

    }
 };
 int main(){
    Ishan I;
    I.prinddata();
 }
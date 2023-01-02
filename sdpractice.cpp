#include<iostream>
using namespace std;
class complex{
private :
 float a ;
 float b;
public:
 friend complex sumcomplex(complex o1, complex o2);
void setnumber(int n1, int n2){
    a= n1;
    b= n2;
}
void print_number(){
cout << "the complex number is "<< a << " + " <<b<< "i" <<endl; 

}
};
complex sumcomplex(complex o1, complex o2){
    complex c3;
    c3.setnumber(o1.a + o2.a , o1.b + o2.b);
    return c3;
}
int main(){
complex c1;
c1.setnumber(1,2);

complex c2;
c2.setnumber(3,4);

complex sum;
sum = sumcomplex(c1,c2);
sum.print_number();
return 0;

}
#include<iostream>
using namespace std;
class Number{
int num;
public:
Number(){}
Number(int a){
num = a;

}
Number(Number & obj){
    cout << "copy constructor called" <<endl;
    num = obj.num; 
}
void printdata(){
    cout << " Your number is " <<num <<endl;
}
};

int main(){
    Number x, y(10);
    x.printdata();
    y.printdata();
    Number z(y);
    z.printdata();
}

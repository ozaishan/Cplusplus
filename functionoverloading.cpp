#include<iostream>
using namespace std;
class Ishan{
int a;
int b;
public:
void add();
void add(int a, int b);


};
 void Ishan::add()
 {
cout << "Malai use garyo yelle" << endl;


}
 void Ishan::add(int a, int b){
cout << " the added numers is " << a+b << endl;

}

int main(){
Ishan ojha;
ojha.add();
ojha.add(2,3);
return 0;

}
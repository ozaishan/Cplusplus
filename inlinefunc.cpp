#include<iostream>
using namespace std;
 inline int sum (int a , int b);
 int main (){
    int a , b;
    cout << " Enter the value of a and b"<<endl;
    cin >> a >> b;
    cout << " the sum is :" <<sum (a,b)<<endl;
    return 0;
 }
 inline int sum (int a , int b){
    return (a+b);
 }
#include<iostream>
using namespace std;
void numswap(int *a, int *b); // function declaration
int main(){
    int a, b;
    cout << " Enter any two numbers : \n";
    cin >> a>> b;
    cout <<" ***BEFORE SWAPPING*** " << endl;
    cout<< a<<" "<< b << endl;
    numswap(&a, &b);
    cout <<" ***AFTER SWAPPING*** " << endl;
    cout<< a<<" "<< b<< endl;
    return 0;
}
void numswap(int *a, int *b){
    int temp;
    temp = *a; 
    *a = *b;
    *b = temp;

}
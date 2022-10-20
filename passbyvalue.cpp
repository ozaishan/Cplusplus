#include<iostream>
using namespace std;
int sum(int x, int y);

int main(){
    int a ;
    int b;
    cout << " Enter the value for a : " <<endl;
    cin>> a;
    cout << " enter the value for b :"<< endl;
    cin >> b;
    int result;
     result = sum (a,b);
     cout << " the result is : "<< result << endl;

    return 0;

}
int sum(int x, int y){
    int result1;
    result1 = x + y;
    return result1;
}
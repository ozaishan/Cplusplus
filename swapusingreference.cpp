#include<iostream>
using namespace std;
void swap (  int *a,   int *b);
int main(){
    int x , y , z ;
    cout << " enter a value for x : "<<endl;
    cin >> x;
    cout << " enter a value for y : "<< endl;
    cin >> y;
    cout << " the value beforre swapping is "<< x << " " <<y<<endl;
    swap(&x,&y);
    cout << " The value after swapping is " <<x <<" "<<y<< endl;
    return 0;
}
void swap ( int *a, int *b ){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
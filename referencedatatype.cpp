#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int & b = a; // b is now a refereence variable that refers to a also int &b is invlid because it must be initialized.
    int c = a;
     c = 10;
    cout << " the value of a is "<< a << endl;
    cout << " the value of b is "<< b << endl;
    cout << " the value of c is "<< c << endl;
    return 0;
}
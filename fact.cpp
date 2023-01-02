#include<iostream>
using namespace std;
class factorial{
    int number;
    
    public:
    factorial(int n){
        number = n;

    }
    int calculate(){int result = 1;
        for (int i = 1; i <= number; i++)
        {
            result = result *i;
        }
        return result;
    }
};
int main(){
    int num, fact;
    cout << " Enter a number " << endl;
    cin >>num;
    factorial getnum(num);
     fact = getnum.calculate();
    cout << " the factorial of given number is " << fact << endl;
    return 0;
}
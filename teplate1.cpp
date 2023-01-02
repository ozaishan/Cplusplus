#include<iostream>
using namespace std;
template<class T>
class Calculator{
    private:
    T num1;
    T num2;
    public:
    Calculator(){}
    Calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }
    void calculate(){
        cout << " The addition is " <<add() << endl;
        cout << " The subtraction is "<<substraction() << endl;
        cout << " The division is " <<division() << endl;
        cout << " the multiplication is " <<multiplication() << endl;
        }
      T add(){   return num1+ num2;  }
      T substraction(){   return num1- num2;  }
      T multiplication(){   return num1* num2;  }
      T division(){   return num1/ num2;  }  
     
};
int main(){
    Calculator <int> calc1(1,2);
    Calculator <float> calc2(1.1,2.2);
    calc1.calculate();
    calc2.calculate();
}
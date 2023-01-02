#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a ,  float b){
        id= a;
        price = b;

    }
    void getdata(void){
        cout << " The Id of this item is " << ":"<< id << endl;
        cout << " price of this item is " << ":"<< price << endl;
    }
};
int main(){
int p, i;
float q;
int num;
cout << " Enter the number of object you want to create:"<<endl;
cin >>num;
shop *ptr = new shop[num];
shop *ptrtemp = ptr;
for ( i = 0; i < num; i++)
{
    cout << " Enter the id and price for "<<i+1<< " shopp"<<endl;
    cin >> p >> q;
    ptr->setdata(p,q);
    ptr++;
}

for ( i = 0; i < num; i++)
{
    cout << "the id and price for "<<i+1<< " shopp"<<endl;
    ptrtemp->getdata();
    ptrtemp++;
}
delete ptr;
delete ptrtemp;


}
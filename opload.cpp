#include<iostream>
#include<string.h>

using namespace std;
class Ishan{
    private:
    string name;
    int id;
    public:
    Ishan(){name = "Ishan";
    id = 0;}
    friend ostream &operator <<(ostream & hyaadekhaideuna , Ishan & I);
    friend istream &operator >>(istream & hyachitoliuna, Ishan & I);

};
ostream &operator <<(ostream & hyaadekhaideuna , Ishan & I){
    hyaadekhaideuna << "Tmro naam " << I.name << "ho ki haina "<< endl;
    hyaadekhaideuna << "tmro Id"<<I.id <<" ho ki haina" << endl;
    return hyaadekhaideuna;
}
istream &operator >>(istream & hyachitoliuna, Ishan & I){
    cout << "Tmro naam vana chitoooooooo";
    hyachitoliuna >> I.name ;
     cout << "Tmro Id vana chitoooooooo";
     hyachitoliuna >> I.id;
     return hyachitoliuna;
}
int main(){
Ishan I;
cout << I << endl;
cin >> I;
cout << I << endl;

}
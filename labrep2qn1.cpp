#include<iostream>
#include<string.h>
using namespace std;

 class student
 {
 private:
    string name;
    long books[];
 public:
    void setupname();
    void getname();
    void issuebooks();
    void getissuedbooks();
 };
 
 void student::setupname()
 {
    cout << "Enter your name : \n";
    cin >> name;
 }
 
 void student::getname()
 {
    cout << " your name is : \n" << name << "\n";
 }
  
void student::issuebooks()
{
cout << " Enter your book number : \n";
for (int i=0 ; i<5; i++){
cin >> books[i];
}
}
void student::getissuedbooks()
{
cout << " Your books that are stored are : \n";
for (int i = 0; i < 5; i++)
{
cout >> books[i];
}

}
int main()
{
    student stud;
    stud.setupname();
    stud.getname();
    stud.issuebooks();
    stud.getissuedbooks();
    return 0;
}
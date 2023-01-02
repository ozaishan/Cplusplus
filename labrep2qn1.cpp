#include<iostream>
#include<string.h>
using namespace std;

 class student
 {
 private:
    string name;
    long books[3];
    int book=0;
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
  
void student::issuebooks(long boook)
{

cout << " Enter your book number : \n";
books[book]=boook;
book++;
getissuedbooks();
}

void student::getissuedbooks()
{
for (int i = 0; i < book; i++)
{
   cout << books[book]<<endl;
}



}
int main()
{
    student stud;
    stud.setupname();
    stud.getname();
    stud.issuebooks(2003);
   
    return 0;
}
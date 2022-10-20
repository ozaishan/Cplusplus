#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double arr[10], sum =0, anothersum=0, deviation, s, mean;
cout << " Enter any 10 numbers: \n";
for (int j=0; j<10; j++)
{
    cin >> arr[j];  
}
for (int j=0; j<10; j++)
{
sum = sum + arr[j];  
}
mean = sum /10;
cout << " Mean of 10 numbers are : "<< mean << endl;
for (int j=0; j<10; j++)
{
    s = pow ((arr[j]-mean),2);
    anothersum = anothersum + s;  
}
deviation = sqrt(anothersum/ (10-1));
cout << " The deviatioon is"<< deviation<<endl;

}

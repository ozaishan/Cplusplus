#include<iostream>
#include<cmath>// for calculating mathmatical calculatioonnss
using namespace std;
 
float calculateSd(float data[]);
int main(){
    int i;
    float data[10];
    cout << " Enter the data "<< endl;
    for (i=0 ; i < 10; i++){
        cout << " Enter the value of " << i+1 << "data ";
        cin >> data[i];
    }
cout << " Standard deviation = " <<calculateSd(data);
return 0;
}
float calculateSd(float data[]){
float sum = 0.0, mean, standardDeviation = 0.0;
  int i;

  for(i = 0; i < 10; ++i) {
    sum += data[i];
  }

  mean = sum / 10;

  for(i = 0; i < 10; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }

  return sqrt(standardDeviation / 10);

}

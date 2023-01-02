#include<iostream>
#include<cmath>
using namespace std;

class point {
    private: 
    // data members kept in private because it is able to be ascessed by the methods 
    //inside the class and inascessible outside the class.    
    double x;
    double y;
    public :
    // public because members are accessible from outside the class.
    void setcoordinates(double x, double y);
    double distancefrom(const point &anotherpoint);
};
void point::setcoordinates(double x, double y){
    this->x=x;
    this->y=y;  
}
 double point::distancefrom(const point &anotherpoint){
    double xq_diff = pow(anotherpoint.x - this->x,2);
    double yq_diff = pow(anotherpoint.y - this->y,2);
    return sqrt(xq_diff+ yq_diff);   
 }
int main(){
    point p1;
    p1.setcoordinates(10,20);
    point p2;
    p2.setcoordinates(0,10);
    cout << " the distance between two points is :"<<p1.distancefrom(p2)<<endl;
}
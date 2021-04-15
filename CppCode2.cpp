#include <iostream>
using namespace std;

void Product(double a, double b){
    double result = a*b;
    cout<<"Product = "<<result;
}

int main(){
    double a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    Product(a,b);
    return 0;
}
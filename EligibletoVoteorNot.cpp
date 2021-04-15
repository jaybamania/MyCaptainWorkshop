#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int age, age_limit;
    int nationality;
    string nation;
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<"Now Enter Your Country as per Index(0to9): ";
    cout<<"\n1.India";
    cout<<"\n2.USA";
    cout<<"\n3.Russia";
    cout<<"\n4.Australia\n";
    cin>>nationality;

    switch (nationality)
    {
    case 1 :
        age_limit = 18;
        nation = "India";
        break;
    case 2 :
        age_limit = 16;
        nation = "USA";
        break;
    case 3 :
        age_limit = 19;
        nation = "Russia";
        break;
    case 4 :
        age_limit = 17;
        nation = "Australia";
        break;
    default:
        age_limit = 18;
        nation = "India";
        break;
    }
    if(age>age_limit){
        cout<<"\nIn "<<nation<<" You are Eligible for voting";
    }else if(age==age_limit){
        cout<<"\nIn "<<nation<<" You are Eligible for voting 1st time";
    }else{
        cout<<"\nIn "<<nation<<" You are not Eligible for voting";
        cout<<"\nWait for "<<age_limit-age<<" years for voting";
    }

    return 0;
}
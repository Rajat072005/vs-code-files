#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the amount : ";
    cin>>n;
    
    int a = n/100;
    int b = n/50;
    int c = n/20;
    int d = n/1;
    


    switch (1){
        case a : cout<<"total 100 rupees note is : "<<a<<endl;
        case b: cout<<"total 50 rupees note is : "<<b<<endl;
        case c : cout<<"total 20 rupees note is : "<<c<<endl;
        case d : cout<<"total 1 rupees note is : "<<d<<endl;
    }
    
}
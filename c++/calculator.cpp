#include <iostream>
using namespace std;
#include <math.h>

int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    int operation;
    
    cout<<"1 = Multiplication"<<endl;
    cout<<"2 = division"<<endl;
    cout<<"3 = addition"<<endl;
    cout<<"4 = subtraction"<<endl;
    cout<<"provide operation you want to perform : ";
    cin>>operation;

    switch(operation){
        case 1 : cout<<a*b;
                 break;
        case 2 : cout<<a/b;
                 break;
        case 3 :cout<<a+b;
                break;
        case 4 : cout<<a - b;
                 break;

    }
}
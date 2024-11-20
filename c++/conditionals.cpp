#include <iostream>
using namespace std;

int main(){
    /*int a;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    if(a>b){cout<<a<< " is greater than "<< b <<endl;
    }
    
    else{
        cout<<b<< " is greater than "<< a<<endl;
    }


    int a;
    cout<<"enter the number: "<<endl;
    cin>>a;

    if(a>0){
        cout<<"Number is positive"<<endl;
    }

    else if(a=0){
        cout<<"Input is zero"<<endl;
    }

    else{
        cout<<"Number is negative"<<endl;
    }
*/
    

char ch;
cin>>ch;
if(ch=("a"-"z")){
    cout<<"lowercase"<<endl;
}

else if(ch=("A"-"Z")){
    cout<<"Uppercase"<<endl;
}

else if(ch=(0-9)){
    cout<<"Numeric"<<endl;
}
}
#include <iostream>
#include<string>
using namespace std;

string isEven(int a){
   
    if(a&1){
        return "number is odd";
    }

    return "number is odd";

}

int main(){
    int n ;
    cin>>n;
    
    cout<<isEven(n);

}
#include <iostream>
using namespace std;

int power(int num1,int num2){
    
    
    int multi = 1;
    for(int i = 1;i<=num2;i++){
        multi = multi*num1;
    }
    return multi;
}

int main(){
    
    int a,b;
    int ans = power(a,b);

    
    cout<<ans;
}
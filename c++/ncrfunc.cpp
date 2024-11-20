#include <iostream>
using namespace std;

int fact(int a){
    
    int fact = 1;
    
    for(int i =1;i<=a;i++){
        fact = fact*i;
    }
    int factorial = fact;
}

int ncr(int n , int r){
    int num=fact(n);
    int denom=fact(r)*fact(n-r);

    
    int ans = num/denom;
    return ans;
}

int main(){
    int x;
    int z;
    cin>>x>>z;

    cout<<ncr(x,z);
}




#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    /*int a = 0; 
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int sum = a + b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }*/
    

    bool isprime = 1;
    for(int i = 2 ;i<n;i++){
        if(n%i  == 0){
            isprime = 0;
            break;
            
        }
    }

if(isprime==0){
    cout<<n<<" is  not a prime number";
}
else{
    cout<<n<<" is a prime number";
}

}
           

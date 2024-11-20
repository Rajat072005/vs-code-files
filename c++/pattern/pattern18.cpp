#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : " <<" ";
    cin>>n;
    int i = 1;
    
    while(i<=n){
        
        int j = 1;
        int star=n-i+1;
        while(j<=i){
            cout<<star;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
       

    }
}

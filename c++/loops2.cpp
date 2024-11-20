#include<iostream>
using  namespace std;
int main(){

    int n;
    cout<<"Enter the number: "<<" ";
    cin>>n;
    int i = 2;
    
    while(i<n){

        if (n%i==0){
            
        
            cout<<"not a prime number"<<endl;
        }
        else{
            cout<<" prime number"<<endl;
            
        }
        

        i=i+1;
        
           

        
    }
    

}

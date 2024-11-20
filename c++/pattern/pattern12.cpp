#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int i = 1;
    char ch1 = 'A';
    
    

    while(i<=n){
        int j = 1;
        while(j<=n){

            
            cout<<ch1;
            j=j+1;
            ch1 = ch1 + 1;
        }

        cout<<endl;
        i=i+1;

    }

}
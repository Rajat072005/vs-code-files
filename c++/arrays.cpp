#include <iostream>
using namespace std;

int printarray(int Ar[] , int size){
    

    for(int i = 0 ; i< size ; i++){
        cout<<Ar[i]<<" ";
    }
}


int main(){
    int ar1[10]={1,1,1,1};
    

    printarray(ar1 , 10);
    cout<<endl;

    cout<<sizeof(ar1)/ sizeof(int);

    char ch[2] = {'a' , 'b'};
    

}



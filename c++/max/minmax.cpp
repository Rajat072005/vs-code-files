#include <iostream>
using namespace std;

int getmax(int ar[] , int n){

    int max = INT32_MIN;
    for(int i = 0 ; i<n ; i++){
        if(ar[i]>max){

            max = ar[i];
        }
    }
    return max;

}
int getmin(int ar[] , int n){

    int min = INT32_MAX;
    for(int i = 0 ; i<n ; i++){
        if(ar[i]<min){
            min = ar[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"size of array : ";
    cin>>size;
    int ar[100];

    for(int i = 0; i<size; i++ )
    
    cin>> ar[i];

    cout<<"max value is : "<<getmax(ar , size)<<endl;
    cout<<"min value is : "<<getmin(ar , size)<<endl;

}

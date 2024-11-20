# include <iostream>
using namespace std;

int arrsum(int arr[] , int size){
    int sum = 0;
    for(int i = 0 ; i<size ; i++){

        sum = sum + arr[i];
    }
    return sum;
}


int main(){
    int size;
    cout<<"size of array : ";
    cin>>size;
    int arr[100];

    for(int i = 0; i<size; i++ )
    
    cin>> arr[i];
    cout<<"sum of array is : "<<arrsum(arr , size);

}
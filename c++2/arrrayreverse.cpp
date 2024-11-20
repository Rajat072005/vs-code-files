#include <iostream>
using namespace std;

void reverse(int arr[] , int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size){
    for(int i =0; i<size ; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {34 , 67 ,89 ,34 , 90, 8};
    reverse(arr1 , 5);
    reverse(arr2 ,6);

    print(arr1,5);
    print(arr2,6);
}
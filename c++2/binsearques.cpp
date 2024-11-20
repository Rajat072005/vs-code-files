#include <iostream>
using namespace std;


int bin(int arr[] , int size ){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if (arr[mid] >= arr[0]){
            s = s + 1;

        }

        else{
            e = mid;
            
            
        }
        mid = s + (e-s)/2;
        

    }

    return arr[s];
}
int main(){
    int arr1[5] = {7,9,1,2,3};
    cout<<"pivot element is : " << bin(arr1 , 5);


}
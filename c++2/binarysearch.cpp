#include <iostream>
using namespace std;

// elements should be in inc/dec order

int bin(int ar[], int size, int key ){
    int i = 0;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(ar[mid] == key){

            return mid;
        }

        if(key > ar[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
        
    
        
    }

    return -1;
}

int main(){
    int even[6] = {2, 4, 6 , 8 , 12 ,18};
    int odd[5] = {-1};

    int index = bin(even , 6 , 20);
    int index1 = bin(odd , 5 , 3);

    cout<<index<<endl;
    cout<<index1<<endl;

    pair<int,int> p;
    p.first = 5;
    p.second = 7;
    


}
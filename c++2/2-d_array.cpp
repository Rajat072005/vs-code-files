#include<iostream>
using namespace std;

bool isPresent(int arr[][4] , int row, int col , int target){
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<4 ; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }

    return 0;
        
}

int main(){
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    int arr[3][4];
    
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<4 ; j++){
            cin>>arr[i][j];
        }
    }
    

    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"enter element to be found : ";
    cin>>target;
    

    if(isPresent(arr,3,4,target)){
        cout<<"found"<<endl;

    }
    else{
        cout<<"not found"<<endl;
    }

    
    for(int i = 0; i<3 ; i++){
        int sum = 0;
        for(int j = 0; j<4 ; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }

    


    
}
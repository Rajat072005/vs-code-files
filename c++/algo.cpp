#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    
    v.push_back(13);


    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    //max,min,swap,reverse

    rotate(v.begin()+1,v.begin()+2,v.end());

    cout<<"after rotating : "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"after sorting : "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    
    
}
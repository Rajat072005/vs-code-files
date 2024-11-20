#include <iostream>
#include<array>
#include <vector>
#include<deque>
#include <list>
#include<stack>
#include<queue>
#include <set>
#include <map>
using namespace std;

int main(){
    // array
   /* array<int,4> a = {1,2,3,4};

    int size = a.size();
    for(int i = 0; i< size ; i++){
        cout<<a[i]<<endl;
    }
    cout<<"size of array : "<<size<<endl;
    cout<<"element at index 2 : "<<a.at(2)<<endl;
    cout<<"first element : "<<a.front()<<endl;
    cout<<"last element : "<<a.back()<<endl;
    cout<<"empty or not : "<<a.empty()<<endl;
    

   // vector

    vector<int> v;
   vector<int> a(5,1);
   vector<int> last(a);

   cout<<"capacity : "<<v.capacity()<<endl;

   v.push_back(1);
   cout<<"capacity : "<<v.capacity()<<endl;

   v.push_back(2);
   cout<<"capacity : "<<v.capacity()<<endl;

   v.push_back(3);
   cout<<"capacity : "<<v.capacity()<<endl;
   cout<<"size : "<<v.size()<<endl;

   cout<<"element at index 2 : "<<v.at(2)<<endl;

   v.pop_back(3);
   // clear can also be used
   

  //deque

   deque<int> d;

   d.push_back(2);
   d.push_front(1);

   // pop back,popfront,at index,

   cout<<"before erase : "<<d.size()<<endl;

   d.erase(d.begin() , d.begin() + 1);
   cout<<"after erase : "<<d.size()<<endl;

   for(int i:d){
    cout<<i<<endl;
   }
   


   //list

   list<int> l;
   l.push_back(2);
   l.push_front(1);

   for(int i:l){

    cout<<i<<" "<<endl;
   }

   l.erase(l.begin());

   for(int i:l){
    cout<<i<<" ";
   }

   
   

   //stack

   stack<string> s;

   s.push("rajat");
   s.push("trehan");
   s.push("kumar");

   cout<<"top element : "<<s.top();
   cout<<endl;

   s.pop();
   cout<<"top element : "<<s.top();
   

  //queue
   
   queue<string> q;

   q.push("rajat");
   q.push("trehan");
   q.push("kumar");

   cout<<"first element : "<<q.front();
   

  //priority queue

   priority_queue<int> maxi;

   priority_queue<int , vector<int> , greater<int> > mini;

   maxi.push(0);
   maxi.push(3);
   maxi.push(1);
   maxi.push(2);
   int n = maxi.size();

   for(int i =0;i<n;i++){

    cout<<maxi.top()<<" ";
    maxi.pop();

    
   }
   mini.push(0);
   mini.push(3);
   mini.push(1);
   mini.push(2);
   int m = mini.size();

   for(int i =0;i<m;i++){

    cout<<mini.top()<<" ";
    mini.pop();

    
   }
   

  //set

   set<int> s;

   s.insert(5);
   s.insert(5);
   s.insert(5);
   s.insert(0);
   s.insert(0);
   s.insert(6);
   s.insert(3);

   for(auto i : s){
    cout<<i<<endl;
   }
   */

  //map
   
   map<int,string> m;

   m[1] = "rajat";
   m[2] = "trehan";
   m[13] = "kumar";

   m.insert({5,"bheem"});

   for(auto i :m){
    cout<<i.first<< " : " <<i.second<<endl;
   }

   //m.erase(13)

   auto it= m.find(5);

   for(auto i =it; i!=m.end();i++){
    cout<<(*i).first<<endl;
   }
   
   

   



}
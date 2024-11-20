/*#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : " <<" ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<" ";
            space=space-1;

        }
        int j = 1;
        while(j<=i){
            cout<<j;
            j=j+1;

        }
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;


void print(int n){
	
	for(int row = 0; row<n;row++){
		for(int space = 0;space<=n-row;space++){
			cout<<" ";
		}
		for(int star =0 ;star<=2*row - 1; star++){
			cout<<"*";
		}
		for(int space =0;space<=n-row;space++){
			cout<<" ";
		}
		cout<<endl;
		
		
	}
  

}


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int t;
	cin>>t;
	for(int i = 1; i<t;i++){
		int n;
		cin>>n;
		print(n);

	}
}



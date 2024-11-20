#include <iostream>
using namespace std;

int x = 10;

void func() {
    int x = 5; 
    cout << x <<","; 
}

int main() {
    func();
    cout << x << endl; 
    return 0;
}
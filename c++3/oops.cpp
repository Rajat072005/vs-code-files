#include <iostream>
using namespace std;

class hero{
    // public:
    int health;
    public:
    char lvl;

    hero(int health){
        cout<<"this :"<<this<<endl;
        cout<<"constructor called"<<endl;
        this  -> health = health;
    }

    int gethealth(){
        return health;
    }

    char getlvl(){
        return lvl;
    }

    void sethealth(int h){
        health = h;
    }
};

int main(){
    //static allocation
    hero paul(100);
    cout<<&paul<<endl;
    

    
   










    // paul.sethealth(100);
    // paul.lvl = 'B';
    // cout<<"health : "<<paul.gethealth()<<endl;
    // cout<<"lvl : "<<paul.lvl<<endl;

    // //dynamic
    // hero *nia = new hero;
    // nia->sethealth(100);
    // nia->lvl='A';

    // cout<<"health(b) : "<<nia->gethealth()<<endl;
    // cout<<"lvl(b) : "<<(*nia).lvl<<endl;
    

    
}
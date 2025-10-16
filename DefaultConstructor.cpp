#include<iostream>
using namespace std;
class Hero{
    
//class name[100];
int health;
public:
Hero(){
    cout<<"Constructor called!"<<endl;
}
void print(){
    cout<<"Hello"<<endl;
}
char level;

int getHealth(){
    return health;
}
char getLevel(){
    return level;
}
void setLevel(char ch){
    level = ch;
}

void setHealth(int h, char name){
    health = h;
}

// int health;
};
int main(){
    //static allocation
    cout<<"Hi"<<endl;
    Hero h1;
    cout<<"Hello "<<endl;

    //dynamic allocation
    Hero *h = new Hero;
    cout<<"Hi"<<endl;

return 0;
}
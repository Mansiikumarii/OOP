#include<iostream>
using namespace std;
class Hero{
    
//class name[100];
int health;
public:
Hero(){
    cout<<"Constructor called!"<<endl;
}

//parametrised constructor
Hero(int health){
    this->health = health;
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
  
    Hero h1;
    h1.getHealth();
    cout<<"Address of h1 "<<&h1<<endl;
    //dynamic allocation
    Hero *h = new Hero();

return 0;
}
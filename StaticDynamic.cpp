#include<iostream>
using namespace std;
class Hero{
    
//class name[100];
int health;
public:
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
Hero h1;
h1.setHealth(50, 'A');
h1.setLevel('B');

cout<<"level is "<<h1.level<<endl;
cout<<"health is "<<h1.getHealth()<<endl;
//dynamic allocation
Hero *b = new Hero;
b->setLevel('M');
b->setHealth(70, 'M');  
cout<<"level is "<<(*b).level<<endl;
cout<<" health is "<<(*b).getHealth()<<endl;

cout<<"level is "<<b->level<<endl;
cout<<" health is "<<b->getHealth()<<endl;

return 0;
}
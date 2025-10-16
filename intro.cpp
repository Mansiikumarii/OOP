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
Hero h1;
cout<<"Health is "<<h1.getHealth()<<endl;
cout<<"size : "<<sizeof(h1)<<endl;


h1.level='A';
cout<<"level is "<<h1.level<<endl;

//use setter
h1.setHealth(70, 'A');
return 0;
}
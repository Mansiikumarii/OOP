#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"animal sound\n";
    }
};

class Dog: public Animal{
    public:
    void sound() override{
        cout<<"Dog barks\n";
    }
};

int main(){
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); //Output : Dog barks
    return 0;
}
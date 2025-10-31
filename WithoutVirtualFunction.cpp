#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"Animal sound\n";
    }
};
class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks\n";
    }
};
int main(){
    Animal* a; // base class pointer
    Dog d; // derived class object
    a = &d; //Point the base class pointer to the Dog object
    a->sound(); //call the sound() function
    return 0;
}
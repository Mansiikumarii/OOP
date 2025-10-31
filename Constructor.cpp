#include<iostream>
using namespace std;
class MyClass{ //the clas
    public: //access specifier
    MyClass(){ //Constructor
        cout<<"Hello World!";
    }
};
int main(){
    MyClass myObj; 
    return 0;
}
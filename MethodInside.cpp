#include<iostream>
using namespace std;

class MyClass{ //The class
    public:  //Access specifier
    void myMethod(){ //Method / function defined inside class
        cout<<"Hello World!";

    }

};

int main(){
    MyClass myObj; //Create an object of MyClass
    myObj.myMethod(); //call the method
    return 0;
}
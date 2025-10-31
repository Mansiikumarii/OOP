#include<iostream>
using namespace std;

class MyClass{//The class
    public: //Access Specifier
    void myMethod(); //Method/function declaration

};
//Method/Function define karna hai outside the class
void MyClass::myMethod(){
    cout<<"Hello World!";
}
int main(){
    MyClass myObj; //Create an object of MyClass
    myObj.myMethod(); //call the method
    return 0;

}
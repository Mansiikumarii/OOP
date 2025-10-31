#include<iostream>
using namespace std;

class MyClass{
    public:
    void myFunction(){
        cout<<"Some content in parent class.";
    }
};

//derive 
class MyChild : public MyClass{

};

//derive class
class MyGrandChild : public MyChild{

};

int main(){
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}
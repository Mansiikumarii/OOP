#include<iostream>
using namespace std;

class MyClass{ //The Class
    public: //Access Specifier
    int myNum; //Attribute (int variable)
    string myString; //Attribute (string variable)
};

int main(){
    MyClass myObj; //Create an object of MyClass

    //Access attribute and set values
    myObj.myNum = 15;
    myObj.myString = "Some String";

    //Print attribute values
    cout<<myObj.myNum<<"\n";
    cout<<myObj.myString;
    return 0;
}
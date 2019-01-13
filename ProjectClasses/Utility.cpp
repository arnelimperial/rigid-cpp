//For Function definition
#include "Utility.h"

Utility::Utility(){

    cout << "Object is created!!" << endl;

}

Utility::Utility(string a){
   // a = "HELLO C++";
    txt1 = a;
}


Utility:: Utility(int c){
    num = c;

}


string Utility::display(){
    return txt1;

}


int Utility::operate(){
    return num * 100;

}

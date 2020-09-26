#include <iostream>
#include <string>
using namespace std;

class User{

    int secret = 22;

public:
    string name = "default";
    void classMessage(){cout << "class is great: " << name << endl;}

};
 int main(){

     User John;
     John.name = "Johnny";
     John.classMessage();

     User Rishabh;
     Rishabh.classMessage();
     Rishabh.name = "Rashu" ;
     Rishabh.classMessage();

     return 0;
 }
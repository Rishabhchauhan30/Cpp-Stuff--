#include <iostream>
#include <string>
using namespace std;

class User{

    int _secret = 22;

public:
    string name = "default";
    void classMessage();
    void setsecret(const int & newsecret){_secret = newsecret;}
    int getsecret() const;

};

void User::classMessage(){
    cout << "class is great: " << name << endl;
}

int User::getsecret()const{
    return _secret;
}
 int main(){

     User John;
     John.name = "Johnny";
     John.classMessage();
     John.setsecret(444);

     cout << John.getsecret() << endl;

     User Rishabh;
     Rishabh.classMessage();
     Rishabh.name = "Rashu" ;
     Rishabh.classMessage();

     const User Batista;
     cout << Batista.getsecret() << endl;

     return 0;
 }
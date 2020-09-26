#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}  //default constructor
    friend class Superman;

protected:
    Man(const string & name , const int & age): _name(name) , _age(age){}
    void run(){puts("I can run");}

public:
    void sayName() const;
};

void Man::sayName() const {
    cout << "My name is: " << _name << " My age is: " << _age << endl;
}

//Superman class

class Superman : public Man{
    bool fly;
public:
    Superman(string name) : Man(name , 26){}
    void run(){printf("I can run at speed of light %d\n", _age);}     
};

// Spiderman class

class Spiderman : public Man{
    bool webbing;
public:
    Spiderman(string name): Man(name , 20){}
    void run(){puts("I can run at normal speed only");}
};

int main()

{
    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("parker");
    peter.sayName();
    peter.run();
    return 0;
}


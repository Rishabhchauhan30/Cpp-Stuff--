#include <iostream>
#include <string>
using namespace std;

class Money{
public:    
    void getMoney(){puts("I got 10k$ in my account");}
};

class Man{
    string _name;
    int _age;
    Man(){}  //default constructor

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
    void run(){puts("I can run at speed of light");}     
};

// Spiderman class

class Spiderman : public Man, public Money{ 
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
    peter.getMoney();
    return 0;
}


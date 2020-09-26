#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone(); //default constructor
    Phone(const string & name, const string & os, const int & price); //parameter constructor
    Phone(const Phone &); //copy constructor
    string getName(){return _os;} 
    ~Phone(); //Destructor
     
};

Phone::Phone() : _name(), _os("Android"), _price(){
    puts("Defaul constructor");
} 

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("This is parametric constructor");
}

Phone::Phone(const Phone & value){
    puts("overwrite copy constructor");
    _name = "new-"+value._name;
    _os = "skinned-"+value._os;
    _price= value._price;
}
Phone::~Phone(){
    printf("destructor called for %s\n", _name.c_str());
}

int main(){

    Phone samsungA6;
    cout << samsungA6.getName() << endl;

    Phone onePlus8("OP8", "Android-Oxy", 799);
    cout << onePlus8.getName() << endl;

    Phone onePlus8S = onePlus8;
    cout << onePlus8S.getName() << endl;


    return 0;
}
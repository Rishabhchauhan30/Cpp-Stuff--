#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User{
public:
    User(){  
        cout << "user created\n";  //constructor
    }
    ~User(){
        cout << "user destroyes\n";  //destructor
    }    

    void testFunction(){
        cout << "I am a test function\n";
    }
};

int main()
{
    {
//        unique_ptr<User> Sam(new User()); This is one of the way...but not liked by dev.
    
    unique_ptr<User> Sam = make_unique <User>();
    Sam-> testFunction();

//    unique_ptr<User> Samm = Sam;  NOT ALLOWED in unique pointers i.e copying.    
    }

    {
        //shared_ptr<User> Tam(new User());

        shared_ptr<User> Tam = make_unique <User>();
        shared_ptr<User> Tam_Tam = Tam;
    }



    cout << "outside code\n";
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

string api_call(){
    return "got some data from web\n";
}

int another_api_call(){
    return 4;
}

int main(){

    auto response = api_call();
    auto rep = another_api_call();

    cout << "API CALL  VALUE: " <<response;
    cout << "ANOTHER API CALL VALUE: " << rep << endl;

    if(typeid(response) == typeid(string));{
        puts("Type of both ID matches");
    }

    if(typeid(rep) == typeid(int)){
        puts("Type of both ID is int");
    }

    return 0;
}
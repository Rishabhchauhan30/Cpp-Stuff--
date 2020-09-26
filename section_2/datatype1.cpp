#include <iostream>
#include <string>
using namespace std;

int main(){

    string first_name;
    string second_name;

    cout << "Enter your first name: ";
    cout << "Enter your second name: ";

    getline(cin, first_name);
    getline(cin, second_name);

    cout << "your name is " << first_name << " " << second_name << endl;

    return 0;
}
#include <iostream>

using namespace std;

void printval(int a){
    
    cout << "integer value is " << a << endl;
}

void printval(double a){

    cout << "double value is " << a << endl;
}

void printval(int *a){

    cout << "pointer value is " << a << endl;

}

int main(){

    printval(nullptr);
    return 0;
}
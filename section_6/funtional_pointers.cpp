#include <iostream>

using namespace std;

int getTwo(){
    return 2;
}

void intresting(){
    puts("I am intresting");
}

int main(){

    int whatIgot = getTwo();

    void (*pointsTointresting)() = intresting;

    cout << whatIgot << endl;

    pointsTointresting();
    (*pointsTointresting)();  //or



    return 0;
}
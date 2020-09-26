#include <iostream>

using namespace std;

int main(){

    int *myp;

    try{
        myp = new int[1000];
        cout << "memory space allocated \n";
    }catch(...){
        cout << "failed in allowing memory\n";
    }

    delete [] myp;
    return 0;
}
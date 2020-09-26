#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b){

    int temp = move(a);
    a = move(b);
    b = move(temp);
}

string PrintMe(){
    return "I am print";
}
int main(){
    int a = 3;
    int b = 4;

    swap(a ,b);

    cout <<"A: " << a << " B: " << b << endl;

    string s = PrintMe();      // copy refernce
    string&& ss = PrintMe();   // move semantics

    return 0;
}
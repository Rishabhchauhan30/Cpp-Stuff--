#include <iostream>

int factorial (int n);

using namespace std;

int main(){

    //Factorial 5*4*3*2*1
    //Factorial 1*2*3*4*5

    int n;

    cout << "Enter a value: ";
    cin >> n;

    cout << "your value for factorial is: " << factorial(n) << endl;

    return 0;

}

int factorial (int n){

    if(n-1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}
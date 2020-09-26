#include<iostream>
using namespace std;

int main(){

    int integer_array[4] = {1,2,3,4};  //This is the new way in c++ of intializing and declearing array.
    cout << integer_array [1] << endl; 

    int another_array[4];  //This is in the older version.
    another_array[0] = 200;  
    another_array[1] = 300;

    cout << another_array[0] << endl;
    cout << another_array << endl;      //If we don't pass any indexing then it will auto.lly pass the very first memory adress.

    *another_array = 29;
    cout << another_array[0] << endl;
    cout << another_array[1] << endl;

    int *ap = another_array;   //using memory adress
    ap++;                       //incrementing 
    *ap = 210;
    cout << another_array[1] << endl;
    
    
    return 0;

}
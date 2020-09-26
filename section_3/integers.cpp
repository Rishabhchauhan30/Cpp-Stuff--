#include <iostream>

using namespace std;

int main(){

    //1 byte is of 8 bits.

    printf("size of this data type is %ld bits\n", sizeof(char) * 8);    //inbuilt 
    printf("size of this data type is %ld bits\n", sizeof(short int) * 8);
    printf("size of this data type is %ld bits\n", sizeof(int) * 8);
    printf("size of this data type is %ld bits\n", sizeof(long int) * 8);
    printf("size of this data type is %ld bits\n", sizeof(long long int) * 8);

    return 0;


}
#include <iostream>
#include <cstdint> //New library which includes all the values of bits no need to declare


using namespace std;

int main(){
    //1 byte is of 8 bits.
    
    printf("size of this data type is %ld bits\n", sizeof(int16_t) * 8);
    printf("size of this data type is %ld bits\n", sizeof(int8_t) * 8);
    printf("size of this data type is %ld bits\n", sizeof(int64_t) * 8);

    printf("size of this data type is %ld bits\n", sizeof(uint16_t) * 8);
    printf("size of this data type is %ld bits\n", sizeof(uint8_t) * 8);
    printf("size of this data type is %ld bits\n", sizeof(uint64_t) * 8);

    //To convert binary to hexa octa etc.
    //To convert hexa to binary octa etc.

    int fun = 0x16;
    printf("Fun value is %d\n",fun);

    




    return 0;


}

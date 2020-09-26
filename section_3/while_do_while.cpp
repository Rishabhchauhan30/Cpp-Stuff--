#include <iostream>

using namespace std;

int main(){

    int my_number[] = {4,5,6,7,8,9,0};

    int i = 0;
    do{
        cout << "current number is:" << my_number[i] << endl;
        i++;
    }while(i<7);

    cout << "outside the loop" << endl;

    return 0;
    
    }

   
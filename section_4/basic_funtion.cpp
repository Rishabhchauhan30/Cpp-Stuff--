#include <iostream>

using namespace std;

void sayhello(){
    puts("Hello threre!");
}
int saytwo(){
    //puts("2");
    return 2;
}

void saythree(){
    puts("3");
}

int main(){

    sayhello();
    printf("%d\n",saytwo() + 2);
    saythree();

    return 0;
}

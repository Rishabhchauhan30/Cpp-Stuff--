#include <iostream>
using namespace std;

int main(){

    int life;
    life = 5;

    int card;
    card = 50;
    int my_card = card;

    int *myp;
    myp = &card;

    my_card = *myp;  //pointers derefernce

    printf("value of card is: %d\n",my_card);
    printf("value of card is: %p\n",myp);
    printf("value of card is: %d\n",my_card);

}
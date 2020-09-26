#include <iostream>

using namespace std;

int main(){

    int rating = 4;

    if (rating == 4){
        puts ("4 star rated");
    }

    else if (rating == 5){
        puts ("5 star rated");
    }

    else{
        puts("NOT 4 adn 5 star rated");
    }

    printf("Your rating is : %s\n", rating > 4 ? "true block" : "false block");

    return 0;
}

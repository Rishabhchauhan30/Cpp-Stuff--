#include <iostream>

using namespace std;

int main(){

    int rating = 4;

    if (rating == 1){
        puts("better try next time");
    }

    else if (rating == 2){
        puts("need more pracise");
    }

    else if (rating == 3){
        puts("can do better");
    }

    else if (rating == 4){
        puts("well done");
    }

    else if(rating == 5){
        puts("excellent");
    }

    else{
        puts("please put valid rating ");
    }

    return 0;

}
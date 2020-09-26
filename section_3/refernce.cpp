#include<iostream>
using namespace std;

int main(){

    int score = 200;
    int *myp = &score;

    printf("value of score is: %d\n",score);
    printf("value of score adress is: %p\n",myp);

    int &another_score = score;
    another_score = 800;

    printf("value of score is: %d\n",score);
    printf("value of score adress is: %p\n",myp);

    return 0;



}
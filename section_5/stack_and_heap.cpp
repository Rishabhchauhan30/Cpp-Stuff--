#include <iostream>

struct user
{
    const int id;
    int age;
    user(): id(01) , age(20){}
};

int main(){
    using namespace std;

    //STACK
    int score = 100;
    user mike;

    //HEAP
    int* heap_score = new int;
    *heap_score = 200;

    user* nike = new user();

    delete heap_score;
    delete nike;

    return 0;
}


#include <iostream>

using namespace std;

int lifeup(){
    static int life = 3;
    return --life;
}
int main(){

    int life = 3;
    cout << "your starting game life is: "<< life << endl;

    life = lifeup();
    printf("your updated game life is: %d\n",life);

    life = lifeup();
    printf("your updated game life is: %d\n",life);

    life = lifeup();
    printf("NO life left you are out: %d\n",life);

    return 0;

}
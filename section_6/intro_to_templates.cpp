#include <iostream>

using namespace std;

void lifeup (int &life){
    ++life;

}
template<typename T>

T addme(T a , T b){
    return a + b;
}

int main(){
    int life = 3;
    lifeup(life);
    cout << life << endl;



    int v1 = 4;
    int v2 = 5;
    float v3 = 14.1;
    float v4 = 12.6;

    cout << addme(v3 , v4) << endl;

    return 0;
}
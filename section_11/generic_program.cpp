#include <iostream>

using namespace std;

template <typename R>
R getbigger(R a , R b){
    return (a>b) ? a : b;
}

int main(){
    cout << getbigger (5 , 7) << endl;
    cout << getbigger (6.3 , 5.14) << endl;
    cout << getbigger ('c' , 'd') << endl;

    return 0;

}
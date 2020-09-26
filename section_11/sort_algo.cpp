#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    float numbers[6] = {4.5, 5.7, 3.6, 9.6, 5.4, 6.8};

    cout << "Unsorted values: " << endl;
    for(float n: numbers){
    cout << n << " ";
    }

    sort(numbers, numbers+6);   
    //sort_heap(numbers, numbers+6);

    cout << "SORTED Values: " << endl;
    for(float n: numbers){
    cout << n << " ";
    }
    return 0;
}
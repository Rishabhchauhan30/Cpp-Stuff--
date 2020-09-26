#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(){

    list <int> mylist;

    for(int i = 3; i <= 10; ++i){
        mylist.push_back(i);
    }

    cout << mylist.front() << endl;   // just to see the front values

    cout << mylist.back() << endl;   // just to see the back values

    mylist.pop_back();              // the last value is peranently delete or destroyes

    mylist.pop_front();            // the front value is peranently delete or destroyes
    
    mylist.reverse();             // reverse the list

    for (auto i : mylist){
        cout << i << " ";
    }

    cout << endl;

    mylist.sort();
    for(auto i : mylist){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
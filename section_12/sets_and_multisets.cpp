#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

class User{
public:
    string name;
    int score;

    bool operator < (const User& u) const {return score < u.score;};
    bool operator > (const User& u) const {return score > u.score;};
};

int main(){

    set <int> myset = {12, 13, 14, 15, 14, 12};

    myset.insert(2);
    myset.insert(3);
    myset.insert(4);
    myset.insert(2);
    myset.insert(6);

    for (auto i = myset.begin(); i != myset.end(); ++i){
        cout << " " << *i << endl;
    }
    for (const auto &v : myset){
        cout << v << " ";
    }
    cout << endl;

    set <User, less<>> myUserset = {{"John", 200}, {"Tam",20}, {"Tam",20}};

    for (const auto &v : myUserset){
        cout << v.name << " ";
    }
    cout <<  endl;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> nums;
    vector <string> cartoons {"Shinchan", "Doremon", "Tom and jerry", "Oggy", "Ostwald"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(9);

    for(int i =0; i<=5; ++i){
        nums.push_back(i);
    }

    cout << nums.size() << endl << nums.capacity() << endl << nums.max_size() << endl;

    cout << nums.empty() << endl;

    for (auto i = begin(nums); i != end(nums); ++i){
        cout << *i << " ";
    }
    return 0;
}
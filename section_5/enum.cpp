#include <iostream>

using namespace std;

enum MSoffice{

    EXCEL,
    WORD,
    POWERPOINT,
    OUTLOOK,
};
                                   
int main(){

    int myAttribute = POWERPOINT;

    cout << myAttribute << endl;        //if we don't give any value to enum elements then by default they start from 0 and increment

    return 0;
}

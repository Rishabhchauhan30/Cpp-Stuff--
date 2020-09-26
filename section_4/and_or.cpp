#include <iostream>

using namespace std;

int main(){

    bool isfbuser = "true";
    bool isinstauser = "false";
    bool isadmin = "true";

    if( (isfbuser || isinstauser) && isadmin){
        puts("welcome admin");
        printf("Welcome dude\n");
        cout << "WElcome cout" << endl;
    } else{
        puts("NO admin access!");
    }
    return 0;
}
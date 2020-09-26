#include <iostream>

using namespace std;

int main(){

    char my_number[] = "Rashu";
    char my_name[] = {'R' , 'a' , 's' , 'h' , 'u' , 0};

    printf("My name is: %s\n",my_name);

    cout << "take a break\n";

    for(int i = 0; my_name[i]; i++){
        cout << "character is: " << my_name[i] << endl;

    }

    cout << "take a break part2\n";
    for (char *cp = my_name; *cp !=0 ; cp++){
        cout << "character is :" << *cp <<endl;
    }

    cout << "take a break part2\n";
    for (char i: my_name){
        if(i==0) break;
        cout << "char is: " << i << endl;
    }

    return 0;
}
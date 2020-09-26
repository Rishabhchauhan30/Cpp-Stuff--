#include <iostream>

using namespace std;

struct User{

    const int uid;
    const char *name;
    const char *email;
    int course_count;
};

int main(){

    User doremon = {001, "doremon", "doremon@hungama.com", 3};
    User shinchan = {002, "shinchan", "shinchan@hungama.com", 5};
    User * s = &shinchan;

    cout << doremon.name << endl;
    cout << doremon.email << endl;
    cout << shinchan.name << endl;

    shinchan.course_count = 7;
    //shinchan.uid = 22; can't change id because we are fixing the value by const.

    shinchan.email = "shin@pogo.com";

    cout << shinchan.email << endl;

    s->course_count = 15;
    cout << shinchan.course_count << endl;

    return 0;

}
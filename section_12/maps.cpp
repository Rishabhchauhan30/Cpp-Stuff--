#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main(){

    map <string , string> languages;
    languages ["py"] = "python";
    languages ["cpp"] = "c plus plus";
    languages ["js"] = "java script";
    languages ["rb"] = "ruby";
    languages ["rb"] = "ruby-one";

    languages.insert(make_pair("pl" , "perl"));

    for(auto &val : languages){
        cout <<  val.first << " : " << val.second << endl;
    }
    return 0;
}
#include <iostream>
#include <string>

constexpr int maxbuffer = 1024;

using namespace std;

int main(){

    const char *filename = "myfile.txt";
    const char *information = "Tara Rum Pum Tara Pum Pum";

    //FILE * fh = fopen(filename, "a");

    //for (int i = 0; i<50; ++i){
    //    fputs(information,fh);
    //}

    //fclose(fh);

    char buf[maxbuffer];

    FILE *fh = fopen(filename, "r");
    while (fgets (buf , maxbuffer , fh)){
        fputs(buf , stdout);
    }
    fclose(fh);

    return 0;

}
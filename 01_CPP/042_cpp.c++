#include <iostream>
#include <string>


using namespace std;

const int maxbuffer = 1024;


int main(){


    const char * filename = "mythisfile.txt";
    const char * information = "lorem ipsum doloar sit amet";


    // FILE * fh = fopen(filename, "w");

    // for (int i = 0; i < 50; ++i) {
    //     fputs(information, fh);

    // }
    // fclose(fh);

    char buf[maxbuffer];

    FILE * fh = fopen(filename, "r");
    while (fgets(buf, maxbuffer, fh)) {
        fputs(buf, stdout);

    }
    fclose(fh);




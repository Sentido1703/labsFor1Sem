#include <stdio.h>
#include <string.h>
#include "stringutils.h"
#include "coders.h"

char*   argvReader(int argc,char* argv[]) {
    int len = 0;

    for (int i = 2; i < argc - 1; ++i) {
        len += strlen(argv[i]) + 1;
    }
    char* str = malloc((len + 1) * (sizeof(char)));
    
    for (int i = 2; i < argc - 1; ++i) {
    strcat(str, argv[i]);
    strcat(str, " ");
    }
    return str;
}


int main(int argc, char* argv[]) {
    char* command = argv[0];
    char* method = argv[1];
    char* str = argvReader(argc, argv);
    char* key = argv[argc - 1];

    if (strcmp(method, "Caesar") == 0) {
        muttableEndStrip(str);
        mutableToLower(str);
        muttableCaesarDecoder(str, key);
	    printf("%s\n", str);
    }
    if (strcmp(method, "XOR") == 0) {
        muttableEndStrip(str);
        mutableToLower(str);
        muttableXorCoder(str, key);
        printf("%s\n", str);
    }
        
    else {
	    printf("Incorrect data");
    }

    return 0;
}
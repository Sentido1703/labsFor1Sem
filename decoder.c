#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stringutils.h"
#include "coders.h"


int main() {
    char cipher[6];
    printf("Enter cipher (Caesar or XOR): "); 
    scanf("%s", cipher);
    char text[200];
    printf("Enter text: ");
    scanf("%s", text);

    if (strcmp(cipher, "Caesar") == 0) {
	    int offset;
	    printf("Enter key: ");
        scanf("%d", &offset);
        printf("%s\n", muttableCaesarDecoder(text, offset));
    }
    else if (strcmp(cipher, "XOR") == 0) {
	    char password[200];
	    printf("Enter password: ");
        scanf("%s", password);
        printf("%s\n", muttableXorCoder(text, password));
    }
        
    else {
	    printf("Incorrect data");
    }

    return 0;
}
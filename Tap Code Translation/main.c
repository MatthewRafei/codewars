#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// for the return string value
// assign characters *tap_code
void tap_code_translation(const char *text, char *tap_code) {

    char *tap_code_arr[] = {
        ". ." /* A */, ". .." /* B */, ". ..." /* C/K */, ". ...." /* D */, ". ....." /* E */,
        ".. ." /* F */, ".. .." /* G */, ".. ..." /* H */, ".. ...." /* I */, ".. ....." /* J */,
        "... ." /* L */, "... .." /* M */, "... ..." /* N */, "... ...." /* O */, "... ....." /* P */,
        ".... ." /* Q */, ".... .." /* R */, ".... ..." /* S */, ".... ...." /* T */, ".... ....." /* U */,
        "..... ." /* V */, "..... .." /* W */, "..... ..." /* X */, "..... ...." /* Y */, "..... ....." /* Z */
    };

    int text_len = (int)strlen(text);
    for(int i = 0; i <= text_len - 1; i++) {
        //printf("%c\n", *text);

        switch(*text) {
            case 'a':
            case 'A':
                strncat(tap_code, tap_code_arr[0], strlen(tap_code_arr[0]));
                break;
            case 'b':
            case 'B':
                strncat(tap_code, tap_code_arr[1], strlen(tap_code_arr[1]));
                break;
            case 'c':
            case 'C':
            case 'k':
            case 'K':
                strncat(tap_code, tap_code_arr[2], strlen(tap_code_arr[2]));
                break;
            case 'd':
            case 'D':
                strncat(tap_code, tap_code_arr[3], strlen(tap_code_arr[3]));
                break;
            case 'e':
            case 'E':
                strncat(tap_code, tap_code_arr[4], strlen(tap_code_arr[4]));
                break;
            case 'f':
            case 'F':
                strncat(tap_code, tap_code_arr[5], strlen(tap_code_arr[5]));
                break;
            case 'g':
            case 'G':
                strncat(tap_code, tap_code_arr[6], strlen(tap_code_arr[6]));
                break;
            case 'h':
            case 'H':
                strncat(tap_code, tap_code_arr[7], strlen(tap_code_arr[7]));
                break;
            case 'i':
            case 'I':
                strncat(tap_code, tap_code_arr[8], strlen(tap_code_arr[8]));
                break;
            case 'j':
            case 'J':
                strncat(tap_code, tap_code_arr[9], strlen(tap_code_arr[9]));
                break;
            case 'l':
            case 'L':
                strncat(tap_code, tap_code_arr[10], strlen(tap_code_arr[10]));
                break;
            case 'm':
            case 'M':
                strncat(tap_code, tap_code_arr[11], strlen(tap_code_arr[11]));
                break;
            case 'n':
            case 'N':
                strncat(tap_code, tap_code_arr[12], strlen(tap_code_arr[12]));
                break;
            case 'o':
            case 'O':
                strncat(tap_code, tap_code_arr[13], strlen(tap_code_arr[13]));
                break;
            case 'p':
            case 'P':
                strncat(tap_code, tap_code_arr[14], strlen(tap_code_arr[14]));
                break;
            case 'q':
            case 'Q':
                strncat(tap_code, tap_code_arr[15], strlen(tap_code_arr[15]));
                break;
            case 'r':
            case 'R':
                strncat(tap_code, tap_code_arr[16], strlen(tap_code_arr[16]));
                break;
            case 's':
            case 'S':
                strncat(tap_code, tap_code_arr[17], strlen(tap_code_arr[17]));
                break;
            case 't':
            case 'T':
                strncat(tap_code, tap_code_arr[18], strlen(tap_code_arr[18]));
                break;
            case 'u':
            case 'U':
                strncat(tap_code, tap_code_arr[19], strlen(tap_code_arr[19]));
                break;
            case 'v':
            case 'V':
                strncat(tap_code, tap_code_arr[20], strlen(tap_code_arr[20]));
                break;
            case 'w':
            case 'W':
                strncat(tap_code, tap_code_arr[21], strlen(tap_code_arr[21]));
                break;
            case 'x':
            case 'X':
                strncat(tap_code, tap_code_arr[22], strlen(tap_code_arr[22]));
                break;
            case 'y':
            case 'Y':
                strncat(tap_code, tap_code_arr[23], strlen(tap_code_arr[23]));
                break;
            case 'z':
            case 'Z':
                strncat(tap_code, tap_code_arr[24], strlen(tap_code_arr[24]));
                break;
        }

        strcat(tap_code, " ");

        text++;
    }

    tap_code[strlen(tap_code)] = '\0';
}

int main(void) {

    //Real
    // . ..... ..... ... . . ... .. ... ..... ... . . .....
    // . ..... ..... ... . . ... .. ... ..... ... . . .....
    char* text = "example";
    char* tap_code = (char*)malloc(sizeof(char) * 200);
    memset(tap_code, '\0', strlen(tap_code));

    tap_code_translation(text, tap_code);

    printf("%s\n", tap_code);


    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* reverseString(char* string)
{
    char* s = (char*)malloc(sizeof(char) * strlen(string));
    memset(s, '\0', strlen(s));
    strcpy(s, string);

    char c = ' ';

    for(int i = 0, j = (int)strlen(s) - 1; i <= j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}

char* reverseWords(const char* text)
{
    char* submit = (char*)malloc(sizeof(char) * strlen(text));
    memset(submit, '\0', strlen(text));

    char* tmp = (char*)malloc(sizeof(char) * strlen(text));
    memset(tmp, '\0', sizeof(text));


    while(*text) {

        if(*text == ' ') {
            strncat(submit, reverseString(tmp), strlen(tmp));

            if(*text+1 == ' ') {
                strncat(submit, "  ", strlen(text));
            }
            else{
                strncat(submit, " ", strlen(text));
            }
            memset(tmp, '\0', strlen(text));
        }
        else {
            strncat(tmp, &(*text), 1);
        }
        text++;
    }

    strncat(submit, reverseString(tmp), strlen(tmp));
    memset(tmp, '\0', strlen(tmp));

    return submit;
}


int main(void)
{
    char *s0 = "This is an example!";

    char *s1 = "The quick brown fox jumps over the lazy dog.";

    char *s2 = "a b c d";

    char *s3 = "double  spaced  words";

    char *s4 = "This is god domain child and I will hunt you";

    char *s5 = "Antidisestablishmentarianism";

    char *s6 = "_vM;#4?0 )u_O % '_/$zvQu3\"P~4w:61J:tW ";

    printf("%s\n", reverseWords(s0));
    printf("%s\n", reverseWords(s1));
    printf("%s\n", reverseWords(s2));
    printf("%s\n", reverseWords(s3));
    printf("%s\n", reverseWords(s4));
    printf("%s\n", reverseWords(s5));

    return 0;
}

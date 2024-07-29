#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* reverseWords(const char* text)
{
    char* tmp = (char*)malloc(sizeof(char) * strlen(text));
    memset(tmp, '\0', strlen(text));

    char* submit = (char*)malloc(sizeof(char) * strlen(text));
    memset(submit, '\0', strlen(text));

    char c = ' ';
    //strncat(tmp, &(*text), 1);

    while(*text) {
        //text++;

        if(*text == '\0') {
            for(int i = 0, j = strlen(tmp) - 1; i <= j; i++, j--) {
                c = tmp[i];
                tmp[i] = tmp[j];
                tmp[j] = c;
            }
            strncat(submit, tmp, strlen(tmp));
        }

        if(*text == ' ') {
            for(int i = 0, j = strlen(tmp) - 1; i <= j; i++, j--) {
                c = tmp[i];
                tmp[i] = tmp[j];
                tmp[j] = c;
            }
            strncat(submit, tmp, strlen(tmp));

            #if 0
            if(*text++ == ' ') {

                //printf("1 What is %c\n", *text++);

                strncat(submit, "  ", strlen(submit));
                memset(tmp, '\0', strlen(text));
                //text++;
            }
            else {

                //printf("2 What is %c\n", *text++);

                printf("1");

                strncat(submit, " ", strlen(submit));
                memset(tmp, '\0', strlen(text));
                //text++;
            }
            #endif

            //printf("3 What is %c\n", *text++);

            //strncat(submit, " ", strlen(submit));

            //memset(tmp, '\0', strlen(text));
            //text++;
            //printf("\n");
        }


        //printf("The size of tmp is %d\n", (int)strlen(tmp));
        strncat(tmp, &(*text), 1);
        text++;


        //printf("%s\n", tmp);
    }



    return submit;
}


int main(void)
{
    char *s1 = "The quick brown fox jumps over the lazy dog.";

    char *s2 = "a b c d";

    char *s3 = "double  spaced  words";

    printf("%s\n", reverseWords(s1));
    printf("%s\n", reverseWords(s2));
    printf("%s\n", reverseWords(s3));

    return 0;
}

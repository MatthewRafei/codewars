#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* reverseWords(const char* text)
{
    char* buffer = (char*)malloc(sizeof(char) * strlen(text));
    memset(buffer, '\0', strlen(buffer));
    memcpy(buffer, text, strlen(text));

    char* tmp = buffer;
    char c = '\0';

    while(*tmp) {
        tmp++;
        if(*tmp == '\0') {
            for(int i = 0, j = strlen(tmp) - 1; i < j; i++, j--){
                c = buffer[i];
                buffer[i] = buffer[j];
                buffer[j] = c;
            }
        }
        else if (*tmp == ' ') {
            for(int i = 0, j = strlen(tmp) - 1; i < j; i++, j--){
                c = buffer[i];
                buffer[i] = buffer[j];
                buffer[j] = c;
            }
            buffer = tmp + 1;
        }
    }




    return buffer;
}


int main(void)
{
    char *s = "This is an example!";

    printf("%s\n", reverseWords(s));

    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int findEnd(char* s) {
    int index = 0;

    while(*s && *s != ' '){
        s++;
        index++;
    }

    return index;
}

char* reverseWords(const char* text)
{
    char* buffer = (char*)malloc(sizeof(char) * strlen(text));
    memset(buffer, '\0', strlen(buffer));
    memcpy(buffer, text, strlen(text));
    char c = ' ';
    int index = 0;

    index = findEnd(buffer+index);

    for(int i = 0, j = index - 1; i < j; i++, j--){
        c = buffer[i];
        buffer[i] = buffer[j];
        buffer[j] = c;
    }

    return buffer;
}


int main(void)
{
    char *s = "This is an example!";

    printf("%s\n", reverseWords(s));

    return 0;
}

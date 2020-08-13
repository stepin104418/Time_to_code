#include "stringSeperator.h"
#include <string.h>
#include <stdlib.h>

struct string_array* stringSeperator(char strInput[])
{
    char *str;
    static struct string_array *strOutput;
    static struct string_array substrings;
    strOutput = &substrings;
    char delimiter[2] = "_";
    char *token;
    str = (char *)malloc(((strlen(strInput)+1)* sizeof(char)));
    strcpy(str, strInput);
    token = strtok(str, delimiter);
    int i = 0;
    while( token != NULL )
    {
        strcpy(strOutput->string_array[i],token);
        i++;
        token = strtok(NULL, delimiter);
    }
    return strOutput;

};


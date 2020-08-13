#include "stringSeperator.h"
#include <string.h>
#include <stdlib.h> 

const struct string_array* stringSeperator(const char strInput[])
{
    char *str;                                                   /// Pointer to string array to store input
    static struct string_array *strOutput;                       /// Pointer to structure(string_array) which will store the returning strings 
    static struct string_array substrings;                       /// string_array to store the strings 
    strOutput = &substrings;
    memset(strOutput,0,sizeof(substrings));                      ///values of substrings is set to zero to reset any values in the static structure
    char delimiter[2] = "_";                                     ///character to split strInput[] by
    char *token;                                                 ///Pointer to implement strtok function
    str = (char *)malloc(((strlen(strInput)+1)* sizeof(char)));  ///memory is dynamically allocated according to the length of the string
    strcpy(str, strInput);                                       ///string is copied from strInput to str
    token = strtok(str, delimiter);                              ///strtok function is implemented from string.h to splint string into tokens
    int i_tokens = 0;                                            ///iterable
    /*
    *Each token is then stored as a character array in the 2D array in substrings
    */
    while( token != NULL )
    {
        strcpy(strOutput->string_array[i_tokens],token);
        i_tokens++;
        token = strtok(NULL, delimiter);
    }
    free(str);
    return strOutput;

};


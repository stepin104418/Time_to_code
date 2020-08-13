/**
* @file stringSeperator.h
*
*/
#ifndef __STRINGSEPERATOR_H__
#define __STRINGSEPERATOR_H__
/**
*2D STRING ARRAY
*A structure is defined to hold a 2D array
*@param[out] struct string_array consisting of an array[50][50]
*/
struct string_array
{
    char string_array[50][50];
};
/**
* SEPERATES A STRING
* @param[in] String which is separated
* @param[out] Structure consisting of a 2D array
* @return Array of separated sub strings
* @note Returns -1 for negative values
*/

struct string_array* stringSeperator(char strInput[]);

#endif /* #ifndef __STRINGSEPERATOR_H__ */

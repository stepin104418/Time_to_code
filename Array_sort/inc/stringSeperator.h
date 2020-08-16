/**
* @file stringSeperator.h
*
*/
#ifndef __STRINGSEPERATOR_H__
#define __STRINGSEPERATOR_H__

struct string_array ///>structure with a 2D array as a member
{
    char string_array[50][50];
};
/**
* SEPERATES A STRING
* @param[in] strInput[] Input string
* @param[out] string_array Structure consisting of a 2D array
* @return Array of separated sub strings
*/

const struct string_array* stringSeperator(const char strInput[]);

#endif /* #ifndef __STRINGSEPERATOR_H__ */

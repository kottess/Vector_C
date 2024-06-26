#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
int countOccurrences(char * str, char * toSearch);


int main()
{
    char str[MAX_SIZE];
    char toSearch[MAX_SIZE];

    /* Input string and word from user */
    printf("Enter any string: ");
    scanf(" %[^\n]",str);
    printf("Enter word to search occurrences: ");
    scanf(" %s",toSearch);

    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(str);      // length of string
    searchLen = strlen(toSearch); // length of word to be searched

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }


        if(found == 1)
        {
            count++;
        }
    }

    
    printf("Total occurrences of '%s': %d\n", toSearch, count);

    return 0;
}





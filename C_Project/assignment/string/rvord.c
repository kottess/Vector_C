#include <stdio.h>
int main()
{
    char s[50], r[50];
    int i,l, index, wordStart, wordEnd;
    printf("Enter any string: ");
    scanf("%[^\n]",s);
    for(l=0;s[l];l++); 
    index = 0;
    wordStart = l - 1;
    wordEnd   = l - 1;
    while(wordStart > 0)
    {
        if(s[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
              r[index] = s[i];
              i++;
              index++;
            }
            r[index++] = ' ';
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }
    for(i=0; i<=wordEnd; i++)
    {
        r[index] = s[i];
        index++;
    }
    r[index] = '\0'; 
    printf("Original string \n%s\n\n", s);
    printf("Reversed string \n%s\n\n", r);
}

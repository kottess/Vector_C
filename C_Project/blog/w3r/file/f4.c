#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LSIZ 128 
#define RSIZ 10 
int main(void) 
{
	char line[RSIZ][LSIZ], fname[20];
    FILE *fptr = NULL; 
    int i = 0, tot = 0;
    printf("Read the file and store the lines into an array :\n");
	printf("Input the filename to be opened : ");
	scanf("%s",fname);	
	fptr = fopen(fname, "r");
    while(fgets(line[i], LSIZ, fptr)) 
	{
    	line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
	printf("The content of the file %s are:\n",fname);    
    for(i = 0; i < tot; ++i)
    {
        printf(" %s\n", line[i]);
    }
    printf("\n");
    return 0;
}


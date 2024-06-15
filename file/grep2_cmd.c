#include<stdio.h>
#include<string.h>
int main()
{
	char fn[10], pat[10], temp[200];
        FILE *fp;
        printf("\n Enter file name : ");
        scanf("%s", fn);
	fp = fopen(fn, "r");	
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}        
	printf("Enter the pattern: ");
        scanf("%s", pat);
        while (!feof(fp))
        {
            fgets(temp, 200, fp);
            if (strstr(temp, pat))
                printf("%s", temp);
        }
        fclose(fp);
}

#include<stdio.h>
int main()
{
char a[20],b[20];
int i,j,n;
printf("Enter the string:");
scanf(" %[^\n]",a);
printf("Enter the substring:");
scanf(" %[^\n]",b);
for(n=0;b[n];n++);

    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++)
    {
        if (a[i] == b[j])
            j++;
        else
           j = 0;
    }
      if (j == n)
          printf("Substring found\n");
      else
          printf("Substring not found\n");
}


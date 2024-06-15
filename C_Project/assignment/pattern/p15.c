#include<stdio.h>
int main() {
int n, f=1, s, i, j;
printf("Enter n value:");
scanf("%d", &n);
for (i=0; i<n; i++)
{
for (s=1; s <= n-i; s++)
printf("  ");
for (j=0; j<=i; j++)
{
if (j==0 || i==0)
f = 1;
else
f=f*(i-j+1)/j;
printf("%4d", f);
}
printf("\n");
}
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[100] = "HackerRank ";
        int t;
    double g;
    char h[100];
    printf("enter the integer:");
    scanf("%d",&t);
    printf("enter the real number:");
    scanf("%lf",&g);
    printf("enter the string");
    scanf(" %[^\n]",h);
    i+=t;
    printf("%d\n",i);
    d+=g;
    printf("%f\n",d);
    strcat(s,h);
    printf("%s\n",s);
}

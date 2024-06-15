#include<stdio.h>
 int main()
 {

int x = 123456789;

FILE *fp = fopen("data.txt","w");


//fprintf(fp,"%d",x); //writes the data in 9bytes.

fwrite(&x,sizeof(int),1,fp); //writes the data in 4bytes
 }

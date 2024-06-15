#include<stdio.h>  
#include<string.h>  
void permu(char * , int , int );  
int main()  
{  
char str[50];                
int n;
printf("Enter the string\n");
scanf("%s",str);  
n=strlen(str);  
printf("All the permutations of the string are: \n");  
permu(str,0,n);  
}  
      
void permu(char *str,const int start, int end)  
{  
char temp;  
int i,j;  
for(i = start; i < end-1; i++)
{ 
	for(j = i+1; j < end; j++)  
	{  
	        temp = str[i];  
	        str[i] = str[j];  
	        str[j] = temp;  
        
	      permu(str , i+1 ,end); 
	 
	        temp = str[i];  
	        str[i] = str[j];  
	        str[j] = temp;  
	}  
}  
printf("%s\n",str);  
}  

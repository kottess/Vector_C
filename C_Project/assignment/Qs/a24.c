#include <stdio.h>
typedef struct complex {
    int real;
    int imag;
} complex;

complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
void print(char *,complex);
int main() {
    complex n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%d %d", &n2.real, &n2.imag);

    result = add(n1, n2);
    print("Addition", result);    
    result = sub(n1, n2);	
    print("Subraction", result);    
    
    return 0;
}

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex sub(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}
void print(char *op,complex res)
{ 
   if(res.imag<0)
	printf("%s of complex num is %d%di\n",op,res.real,res.imag);
   else
	printf("%s of complex num is %d+%di\n",op,res.real,res.imag);

}


#include<stdio.h>

int main()
{
    int i, fss;
    char ch, source[20] = "data.txt", target[20]="target.txt", t;
    FILE *fs, *ft;
    fs = fopen(source, "r");
    ft = fopen(target, "w");
    while(1)
    {
        ch=getc(fs);
        if(ch==EOF)
            break;
        else
        {
            fseek(fs, 4, SEEK_CUR);
            fputc(ch, ft);
        }
    }
    return 0;
}


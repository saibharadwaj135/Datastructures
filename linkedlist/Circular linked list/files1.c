#include<stdio.h>
int main()
{
    FILE *f1;
    int l=1,w=1,c=0;
    f1=fopen("matter1.txt","r"); 
    char ch;
    ch=fgetc(f1);
    while(ch!=EOF)
    {
        if(ch==' ')
        {
            w++;
        }
        if(ch=='\n')
        {
            l++;
        }
        else
        {
            c++;
        }
          ch=fgetc(f1);
    }
   printf("lines:%d\n",l);
   printf("words:%d\n",w);
   printf("character:%d\n",c);
    fclose(f1);
}
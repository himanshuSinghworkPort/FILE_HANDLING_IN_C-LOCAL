#include<stdio.h>
#include<conio.h>

void main()
{
FILE *file;
char ch;

file=fopen("pranjul.txt","a+");
while(1)

{
ch=fgetc(file);
 if(ch==EOF)
 {
 break;
 }
printf("%c",ch);
}

fclose(file);
getch();
}

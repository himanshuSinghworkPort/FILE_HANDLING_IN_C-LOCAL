#include<stdio.h>
#include<conio.h>

void main()
{
FILE *file;
char ch;
char name_file[20];
printf("ENTER FILE NAME WHICH YOU WANT TO OPEN with .txt :");

scanf("%s",name_file);
//}
file=fopen(name_file,"a+");
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

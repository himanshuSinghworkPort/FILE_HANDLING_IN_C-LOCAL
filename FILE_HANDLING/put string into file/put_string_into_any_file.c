// put string to any file
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *file;
char ch;

char name_file[20];
char string_data[200];

printf("ENTER FILE NAME WHICH YOU WANT TO OPEN with .txt :");
scanf("%s",name_file);


//writing data to any file

file=fopen(name_file,"a+");
//fputs("STRING",FILE_OBJECT);
//printf("ENTER THE STRING :");
fputs("string",file);  


fclose(file);
getch();
}
  
  



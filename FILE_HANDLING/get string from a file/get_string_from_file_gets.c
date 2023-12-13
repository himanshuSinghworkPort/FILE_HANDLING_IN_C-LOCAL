// get a string from file and print it to console via gets

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *file;

char name_file[20];
char text[500];
printf("ENTER NEW FILE NAME- WHICH YOU WANT TO CREATE with .txt :");
scanf("%s",name_file);

file=fopen(name_file,"a+");
//gets(array_in_which_you_want_to_take_data,array_data_size,file_object_name);

printf("%s",fgets(text,500,file));


fclose(file);
getch();
}

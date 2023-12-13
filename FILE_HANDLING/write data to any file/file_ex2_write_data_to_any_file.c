#include<stdio.h>
#include<conio.h>
void main()
{
FILE *file;
char ch;

char name_file[20];

int roll_no;
char name[10];
int no_stu;
printf("ENTER FILE NAME WHICH YOU WANT TO OPEN with .txt :");
scanf("%s",name_file);

printf("ENTER NO OF STUDENTS: :");
scanf("%d",&no_stu);

//writing data to any file

file=fopen(name_file,"a+");
for(int i=0;i<no_stu;i++)
{
printf("enter roll no:");
scanf("%d",&roll_no);
printf("enter name:");
scanf("%s",name);

//fprintf(file,"ROLL NUMBER	NAME\n");
fprintf(file,"\n______________________\n");

fprintf(file,"%d	  |	%s",roll_no,name);
//fprintf(file,"\n______________________\n");

}
fclose(file);
getch();
}

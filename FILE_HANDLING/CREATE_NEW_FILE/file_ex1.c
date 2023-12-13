#include<stdio.h>
#include<conio.h>
void restart();

void main()
{
FILE *file;

char name_file[20];

printf("ENTER NEW FILE NAME- WHICH YOU WANT TO CREATE with .txt :");
scanf("%s",name_file);


file=fopen(name_file,"a+");
fclose(file);
printf("\nTHANKS!!!!!!!YOU HAVE CREATED A NEW FILE LOOK OUT THE FOLDER\n");
restart();

getch();
}

void restart()
{
char restart;
printf("DO YOU WANT TO CONTINUE PRESS Y-y|N-n:");
scanf("%c",&restart);
if(restart=='y'|| restart=='Y')
{
return main();
}
else if(restart=='n'|| restart=='N')
{
return 0;
}
}
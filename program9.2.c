//Open an existing file and read its content character by character, and then close the file. 

#include<stdio.h>
int main() 
{
FILE *fp;
char ch;

fp = fopen("File.txt","r"); // Open the file in the reading mode 

if (fp == NULL) 
{
printf("File not found!\n");
return 0;
}

printf("Reading file character by character:\n");

while((ch = fgetc(fp)) != EOF) // read the character one by one till the end of the file 
{
putchar(ch);// print the character 
}

fclose(fp); // close the file 

return 0;
}

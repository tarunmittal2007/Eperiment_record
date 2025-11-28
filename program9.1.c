//Write a program to create a new file and write text into it.

#include<stdio.h>
int main() 
{
FILE *fp;
char text[500];

fp = fopen("File.txt","w");  // Create the file and open it in the writeable format 
// consider the case if we find any error in opening the file 
if (fp == NULL)
{
printf("Error creating file!\n");
return 0;
}

printf("Enter text to write into the file:\n");
fgets(text,sizeof(text),stdin); // input the string from the user 

fprintf(fp,"%s",text);  // Write the string to the file

fclose(fp); // close the file 

printf("File created and text written successfully.\n");

return 0;
}

/* 
WAP to generate the following set of output.
  1
 2 3 
4 5 6

*/

#include <stdio.h>

int main() 
{
int i, j, k, num = 1;
int rows = 3;

for(i = 1; i <= rows; i++) 
{
// print leading spaces
for(k = 1; k <= rows - i; k++) 
{
printf(" ");
}
// print numbers
for(j = 1; j <= i; j++) 
{
printf("%d ",num);
num++;
}
printf("\n");
}

return 0;
}

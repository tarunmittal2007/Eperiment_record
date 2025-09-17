/*                                                                 
WAP to generate the following set of output.
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1

*/

#include <stdio.h>

int main() 
{
int n = 5; // number of rows
int i, j, k, val;

for(i = 0; i < n; i++) 
{
// print leading spaces
for(k = 0; k < n-i-1 ; k++) 
{
printf(" ");
}

val = 1; // first number in each row

for(j = 0; j <= i; j++) 
{
printf("%d ",val);
val = val * (i - j)/(j + 1); // binomial coefficient
}
printf("\n");
}
return 0;
}

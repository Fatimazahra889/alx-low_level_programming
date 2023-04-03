#include <stdio.h>
int main(void)
{
long int i, j, k, next;
k = 2;
j = 1;
for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}
return (0);
}

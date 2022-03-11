#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastdigit= n%10
if (lastdigit>5)
{
printf("Last digit of%d", n, "is and is greater than 5");
else if (lastdigit==0)
{
printf("Last digit of%d", n, "is and is 0");
}
else if (lastdigit<6&&!=0)
{
printf("Last digit of%d", n, "is and is less than 6 and not 0");
}
}
return (0);
}

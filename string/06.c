#include <stdio.h>

int main ()
{
   char *can_change = "Hello world";
   //gets(can_change);
   
   puts(can_change);
   can_change = "hello";
   puts(can_change);

    return 0;
}
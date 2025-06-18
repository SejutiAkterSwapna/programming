#include <stdio.h>
#include <unistd.h> 
int main()
{
    int a, b, c,d;
    for(a= 1; a<= 4; a++){
        for(b= 1; b<= 4 && b!=a; b++){
            for(c= 1; c<= 4 && c!=a && c!=b; c++){
                for(d=1; d<=4 && d!=a && d!=b && d!=c; d++)
              printf("%d, %d, %d, %d\n", a, b, c,d);
              sleep (0);
            }
           
        }
    }
    return 0;
}

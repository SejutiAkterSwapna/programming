#include <stdio.h>

int main()
{ 
    int n, i=1, m=0;
    for(n=1; n<=20; n++){
        
        for(i=1; i<=10; i++){
            
        printf("%d*%d=%d\n", n, i, m);
        m= m+n;

        }
    } 
        
    return 0;
    
}
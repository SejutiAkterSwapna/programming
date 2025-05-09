#include <stdio.h>

int main()
{
    char day;// m-mon; t-tues; w-wed; T-thu; f-fri; s-sat; S-sun;
    printf("Enter day(1-7):");
    scanf("%c",&day);

    switch(day){
        case 'm': printf("monday\n");
                break;
        case 't': printf("tuesday\n");
                break;
        case 'w': printf("wednesday\n");
                break; 
        case 'T': printf("thursday\n");
                break;
        case 'f': printf("friday\n");
                break; 
        case 's': printf("saturday\n");
                break;
        case 'S': printf("sunday\n");
                break; 
        default: printf("Not a valid day!\n");                  
    }
    return 0;
}
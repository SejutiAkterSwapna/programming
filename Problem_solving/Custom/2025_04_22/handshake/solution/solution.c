#include <stdio.h>
int main()
{
    int number_of_people,number_of_handshakes;

    printf("Enter the number of people:");
    scanf("%d",&number_of_people);

    number_of_handshakes=(number_of_people * number_of_people - number_of_people)/2;

    printf("The number of people handshaks is:%d\n",number_of_handshakes);

    return 0;
    
}
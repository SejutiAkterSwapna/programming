#include <stdio.h>
int main()
{
    int ft_marks,st_marks,final_marks;
    double total_marks;

    ft_marks=80;
    st_marks=74;
    final_marks=97;

    total_marks = ft_marks/0.4+st_marks/0.4+final_marks/0.2;
    printf("%0.2lf\n",total_marks);

    return 0;
}
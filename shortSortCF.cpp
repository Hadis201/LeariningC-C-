#include<stdio.h>

int main()
{
    char array[3];

    
    scanf("%s", &array);
    
    if (array[0] == 'a') printf("Yes");
    else if (array[1] == 'b') printf("Yes");
    else if (array[2] == 'c') printf("Yes");
    else printf("No");
}
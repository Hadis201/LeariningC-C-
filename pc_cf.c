#include<stdio.h>
int main(){

    int i;
    char temp;
    char array[3] = {'a', 'b', 'c'};

    char array2[3];

    /*for (i = 0; i<3; i++)
    {
        scanf("%c", array[i]);
    }
    */
    for(i =0; i<=2; i++)
    {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    
    
        printf("%c", array[i]);


    }

    scanf("%c%c%c", &array2[0], &array2[1], &array2[2]);
    if (array2[3] == array[3])
        printf("Yes");
    else printf("False");
}
#include<stdio.h>
#include<string.h>

int main()
{

    int num_test_case ,i;
    scanf("%d", &num_test_case);

    for(i = 0; i < num_test_case; i++)
    {
        char array[4];
        scanf("%s", &array);

        if (array[0] == 'a' || array[1] == 'b' || array[2] == 'c') printf("Yes\n");

        else printf("No\n");
    }
}

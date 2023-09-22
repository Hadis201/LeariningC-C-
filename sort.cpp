#include<stdio.h>

void sort(int array[], int size){
    
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}
/*
void printArray(int array[], int size)
{
    for (int i = 0; i<size; i++)
    {
        printf("%d\n", array[i]);
    }


*/


int main()
{

    int size, i;

    int a[size];// = {1, 6, 4, 5, 8, 0, 9, 2 ,3 };
      // = sizeof(array)/sizeof(array[0]);

    scanf("%d", size);
    for (i =0; i<size; i++){
        scanf("%d", &a[i]);
    }

    sort(a, size);

    a[size]+=1;

    int product = 1;
    //printArray(array, size);
    for (i = 0; i<size; i++)
        product = a[i]*product;
        

    printf("%d", product);
    return 0;
}
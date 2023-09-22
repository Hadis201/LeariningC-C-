#include<stdio.h>
int  main(){
    int temp[31], i, max, min, avg;
    int days;

    printf("How many days in the month?");
    scanf("%d", &days);

    for (i = 0; i<31; i++){

        printf("Enter noonday temperature for day %d", i+1);
        scanf("%d", &temp[i]);
    }

    //find average
    avg = 0;
    for (i = 0; i<days; i++) avg = avg + temp[i];
    printf("%d is the average temperature", avg/days);
    
    max = temp[0];
    for (i = 1; i <= sizeof(temp) / sizeof(temp[0]); i++)
        if(max<temp[i]) 
            max = temp[i];

    min = temp[0];
    for (i = 1; i <= sizeof(temp) / sizeof(temp[0]); i++)
        if(min<temp[i])
            min = temp[i];

    printf("Maximum temperature was %d", max);
    printf("Minimum temperature was %d", min);

}
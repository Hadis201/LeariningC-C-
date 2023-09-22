
#include<stdio.h>
int  main()
{
    int days, temp[days], i, max, min, avg;
    

    printf("How many days in the month?\n");
    scanf("%d", &days);

    for (i = 0; i<days; i++){

        printf("Enter noonday temperature for day: %d\n", i+1);
        scanf("%d", &temp[i]);
    }

    //find average
    avg = 0;
    for (i = 0; i<days; i++) avg = avg + temp[i];
    printf("%d is the average temperature\n", avg/days);
    
    //finding max
    max = temp[0];
    for (i = 1; i <= sizeof(temp) / sizeof(temp[0]); i++){
        if(temp[i]>max) 
            max = temp[i];}
        
    min = temp[0];
    for (i = 0; i <= sizeof(temp) / sizeof(temp[0]); i++){
        if(temp[i]<min)
            min = temp[i];}

    printf("Maximum temperature was %d\n", max);
    printf("Minimum temperature was %d\n", min);


    return 0;
}
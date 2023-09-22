#include<stdio.h>
int main(){
    int i;

    float prices[10] ;

    printf("%d bites", sizeof(prices));

    for(int i = 0; i < sizeof(prices)/ sizeof(prices[0]); i++)scanf("%f", &prices[i]);

    for(int i = 0; i < sizeof(prices)/ sizeof(prices[0]); i++)printf("%f", prices[i]);
    
    
    //printf("%.04f", prices[0]);


}
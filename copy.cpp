#include<stdio.h>
int main(){
    int a1[10] = {10, 2, 3,4,5,6,7,7,8,8};
    //int a2[] = a1[10]; cannot copy directly
    int a2[10], i;
    for (i=0; i<10; i++) i = a1[i];
    for (i=0; i<10; i++) a2[i] = a1[i];
    for (i=0; i<10; i++) printf("%d", a2[i]);
}

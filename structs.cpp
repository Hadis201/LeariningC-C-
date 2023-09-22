#include<stdio.h>



struct Player//defining class
{
    char name[12];
    int score;
};

int main()
{

    struct Player Player1;
    struct Player Player2;

    strcpy(Player1.name, "Hadis");
    Player1.score = 5;

    strcpy(Player2.name, "Rakib");
    Player2.score = 4;
    printf("%s", Player2.name);



}


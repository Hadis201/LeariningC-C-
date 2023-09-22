#include<stdio.h>

struct book
{
    char name[50];
    char writer[50];
    int edition;

};

int main()
{
    //Please follow the sequence: name, writer, edition
    struct book book1 ={"Discrete Mathematics and Its Application", "Rosen", 8};
    struct book book2 ={"Programming with C", "Gottfried", 3};
    struct book book3 ={"Fundamentals of Electric Circuits", "Alexander Sadiku", 6};

    int bookNo;
    printf("Please enter the serial number of your desired book: ");
    scanf("%d", &bookNo);

    if (bookNo == 1)
        printf("Book %d:\n   Name: %s,   Writer: %s,Edition: %i\n",bookNo, book1.name, book1.writer, book1.edition);
    if (bookNo == 2)
        printf("Book %d:\n   Name: %s,   Writer: %s,Edition: %i\n",bookNo, book2.name, book2.writer, book2.edition);
    if (bookNo == 3)
        printf("Book %d:\n   Name: %s,   Writer: %s,Edition: %i\n",bookNo, book3.name, book3.writer, book3.edition);
}
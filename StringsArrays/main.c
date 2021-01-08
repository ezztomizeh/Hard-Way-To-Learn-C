#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[4] = {2};
    char name[4] = {'e'};
    printf("the numbers : %d %d %d %d \n",
           numbers[0],numbers[1],numbers[2],numbers[3]);
    printf("The chars : %c %c %c %c \n",
           name[0],name[1],name[2],name[3]);
    numbers[0] = 2;
    numbers[1] = 9;
    numbers[2] = 7;
    numbers[3] = 1;
    name[0] = 'e';
    name[1] = 'z';
    name[2] = 'z';
    name[3] = '\0';
    printf("the numbers : %d %d %d %d \n",
           numbers[0],numbers[1],numbers[2],numbers[3]);
    printf("The chars : %c %c %c %c \n",
           name[0],name[1],name[2],name[3]);
    printf("name : %s \n" , name);
    char *another = "ezz";
    printf("the another : %s \n",another);
    printf("the another char : %c %c %c %c %c",
           another[0],another[1],another[2],another[3]);
    return 0;
}

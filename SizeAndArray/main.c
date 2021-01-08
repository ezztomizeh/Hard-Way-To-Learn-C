#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area[] = {5,4,7,89,4};
    char name[] = "ezz";
    char FullName[] = {
            'E','z','z',
            ' ','G','.',' ',
            'T','o','m','i','z','e','h','\0'};
    printf("the size of int is : %ld \n" , sizeof(int));
    printf("the size of area (int[]) : %ld \n",sizeof(area));
    printf("the numbers of int in area is : %d \n",sizeof(area)/sizeof(int));
    printf("the size of 1st area is : %d , and 2nd area : %d \n",area[0],area[1]);
    printf("the size of the char is : %ld \n",sizeof(char));
    printf("the size of the name (char[]) : %ld \n",sizeof(name));
    printf("the numbers of char in name : %ld \n" , sizeof(name)/sizeof(char));
    printf("the size of the full name (char[]) : %ld \n",sizeof(FullName));
    printf("the number of char is : %ld \n",sizeof(FullName)/sizeof(char));
    printf("name : \"%s\" and full name : \"%s\" ",name,FullName);
    return 0;
}

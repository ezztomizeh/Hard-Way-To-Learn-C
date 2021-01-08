#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 65;
    float b = 9.92812f;
    double t = 49.88;
    char FatherChar = 'A';
    char FirstName[] = "Zed";
    char LastName[] = "Tomizeh";
    printf("%d \n",x);
    printf("%f \n",b);
    printf("%.2f \n",t);
    printf("my whole name is %s %c %s",FirstName,FatherChar,LastName);
    return 0;
}

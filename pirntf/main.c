#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c \n",'b');
    printf("%03d \n",509.3);
    printf("%9d \n",409);
    printf("%e \n",90);
    printf("%f \n",9.5);
    printf("%i \n",598328741);
    printf("%o \n",7);
    printf("Hello %s \n","Ezz");
    printf("%u \n",5784);
    printf("%x \n","ezz");
    // %d
    printf("%-5d \n",90);
    printf("%+5d \n",98);
    // %f
    printf("%.1f \n",9.7);
    printf("%4.1f \n",8547.47);
    printf("%08.2f \n",45.577);
    printf("%-08.2f \n",9.45);
    // %s
    printf("%10s","ezz");
    // \a
    print("\a");
    return 0;
}

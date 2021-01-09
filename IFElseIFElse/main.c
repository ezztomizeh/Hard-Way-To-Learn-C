#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int i = 0;
    if(argc == 1){
        printf("You are only have one argemmnet you are sick. \n");
    }
    else if(argc > 1 && argc < 4){
        printf("here you argemment: \n");
        for(i ;i < argc ;i++){
            printf("%s ",argv[i]);
        }
        printf("\n");
    }
    else{
        printf("You have so many args.");
    }
    return 0;
}

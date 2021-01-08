#include <stdio.h>

int main(int argc , char *argv[])
{
    int i = 0;
    for(i = 1; i < argc ; i++){
        printf("arg %d : %s \n",argv[i]);
    }
    char *states[] = {
        "Califorina","Texas",
        "New York","London"
    };
    int num_states = 4;
    for(i = '\0' ; i < num_states ; i++){
        printf("State: %s\n",states[i]);
    }
    return 0;
}

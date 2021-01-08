#include <stdio.h>

int main(int argc , char *argv[])
{
    int i = 0;
    while(i < argc){
        printf("arg %d : %s \n",argv[i]);
        i++;
    }
    char *states[] = {
        "Califorina","Texas",
        "New York","London"
    };
    int num_states = 4;
    i = 0;
    while(i < num_states){
        printf("State: %s\n",states[i]);
        i++;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *name[] = {'a','e','s'};
    for(int i;i <= 2;i++){
        char letter = name[i];
        switch(letter){

            case 'a': /* fall through */
            case 'A':
                printf("%d : 'A' \n",i);
                break;
            case 'e': /* fall through */
            case 'E':
                printf("%d : 'E' \n",i);
                break;
            case 'i': /* fall through */
            case 'I':
                printf("%d : 'I' \n",i);
                break;
            case 'o': /* fall through */
            case 'O':
                printf("%d : 'O' \n",i);
                break;
            case 'u': /* fall through */
            case 'U':
                printf("%d : 'U' \n",i);
                break;
            case 'y': /* fall through */
            case 'Y':
                if(i > 2){
                    printf("%d : 'Y' ",i);
                }
                break;
            default:
                printf("%d : %c isn't a vowel \n",i,letter);
        }
    }
    return 0;
}

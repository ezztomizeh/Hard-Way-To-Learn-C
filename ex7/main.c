#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bugs = 100;
    double rate_bugs = 1.2;
    printf("you have %d bugs at rate %.1f \n",bugs,rate_bugs);
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs \n",universe_of_defects);
    double expected_bugs = bugs * rate_bugs;
    printf("you are expected to have %.1f bugs \n",expected_bugs);
    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n",part_of_universe);
    char null_byte = '\0';
    int care_precent = bugs * null_byte;
    printf("%c \n",null_byte);
    printf("%s \n",null_byte);
    printf("%d \n",null_byte);
    printf("which means you should care %d%%",care_precent);
    return 0;
}

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    execl("sequential_min_max"," ","10","100",NULL);
    return 0;
}
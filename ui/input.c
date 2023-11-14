#include <stdio.h>
#include <sys/prctl.h>
#include <unistd.h>
#include "input.h"


int input()
{
    printf("나 input 프로세스!\n");

    while (1) {
        sleep(1);
    }

    return 0;
}
int create_input()
{
    pid_t systemPid;
    const char *name = "input";

    printf("여기서 input 프로세스를 생성합니다.\n");
    input();
    return 0;
}


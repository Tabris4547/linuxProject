#include <stdio.h>
#include <sys/prctl.h>
#include<unistd.h>



#include "system_server.h"

int system_server()
{
    printf("나 system_server 프로세스!\n");

    while (1) {
        sleep(1);
    }

    return 0;
}

int create_system_server()
{
    pid_t systemPid;
    const char *name = "system_server";

    printf("여기서 시스템 프로세스를 생성합니다.\n");
	/*fork 사용*/
    system_server();
    return 0;
}

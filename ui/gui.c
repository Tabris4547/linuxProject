#include <stdio.h>
#include <unistd.h>

#include "gui.h"



int create_gui()
{
    pid_t systemPid;

    printf("여기서 GUI 프로세스를 생성합니다.\n");
    sleep(3);
    execl("/usr/bin/google-chrome-stable", "google-chrome-stable", "http://localhost:8282", NULL);

    /* fork + exec 를 이용하세요 */
    /* exec으로 google-chrome-stable을 실행 하세요. */
    /* (execl("/usr/bin/google-chrome-stable", "google-chrome-stable", "http://localhost:8282", NULL)) */



    return 0;


}

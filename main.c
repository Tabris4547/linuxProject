#include <stdio.h>
#include <sys/wait.h>
int main()
{

    pid_t spid, gpid, ipid, wpid;
    int status, savedErrno;
    printf("메인 함수입니다.\n");
    if(spid=fork()==0){
	    spid=create_system_server();
	    printf("시스템 서버를 생성합니다.\n");

    }
    if(wpid=fork()==0){
            wpid=create_web_server();
            printf("웹 서버를 생성합니다.\n");

    }

    if(ipid=fork()==0){
            spid=create_input();
            printf("입력프로세스를를 생성합니다.\n");

    }
    if(gpid=fork()==0){
            gpid=create_gui();
            printf("GUI를 생성합니다.\n");

    }

    waitpid(spid, &status, 0);
    waitpid(gpid, &status, 0);
    waitpid(ipid, &status, 0);
    waitpid(wpid, &status, 0);

    return 0;

}

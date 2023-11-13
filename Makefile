#DIRS=	ui
#	web_server
#	system

LIBS	=-unistd.h


all: main.o input.o gui.o webserver.o system_server.o
	gcc -o toy_system.out main.o input.o gui.o webserver.o system_server.o

main.o : main.c
	gcc -c  main.c

input.o:  ui/input.c
	gcc -c  ui/input.c $(LIBS)

gui.o: ui/gui.c
	gcc -c  ui/gui.c $(LIBS)

webserver.o: web_server/web_server.c
	gcc -c -o webserver.o web_server/web_server.c $(LIBS)


system_server.o:  system/system_server.c
	gcc -c system/system_server.c $(LIBS)

CC = gcc
CFLAGS = -Wall -Wno-missing-braces -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm

all: ttt.c
	$(CC) ttt.c -o a.exe -O1 $(CFLAGS); \
	echo Ran compiler
	
push:
	git push
	echo Pushed repository
	
pushall:
	git push -f -u
	echo Pushed repository (force rewrite all files)
	
echo:
	echo Hello! Making sure Make is up and running.
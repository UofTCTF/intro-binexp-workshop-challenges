all: chal

chal: challenge.c
	gcc -O0 -z execstack -g -no-pie -fno-stack-protector -D_FORTIFY_SOURCE=0 --std=c99 ./challenge.c -o challenge


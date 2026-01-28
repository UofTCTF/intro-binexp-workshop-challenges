all: chal

chal: challenge.c helper.o
	gcc -O0 -z execstack -g -no-pie -fno-stack-protector --std=c99 ./challenge.c helper.o -o challenge

helper.o: helper.s
	as helper.s -o helper.o

#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>
#define int long long // works with 64 bit target
		      //
int token;
char *src, *old_src;
int poolsize;
int line;

void next() {
	token = *src++;
	return;
}

void expression(int level) {
	//donothing
}

void program() {
	next();
	while(token > 0) {
		printf("token is: %c\n", token);
		next();
	}
}

int eval() {
	return 0;
}

int main(int argc, char **argv) {
	int i, fd;

	argc--;
	argv++;

	poolsize = 256 * 1024;
	line = 1;

	if ((fd = open(*argv, 0)) < 0) {
		printf("could not open(%s)\n", poolsize);
		return -1;
	}

	src[i] =0;
	close(fd);

	program();
	return eval();
}

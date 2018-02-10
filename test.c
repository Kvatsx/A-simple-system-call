#include <unistd.h>
#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>

#define _GNU_SOURCE
#define sys 315

int main(){
	long int s = syscall(315, 1, "hey.txt");
	printf("Returned Value: %ld\n", s);
	return 0;
}


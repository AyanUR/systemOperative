#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
	printf("\nidentification for user: %d",getuid());
	printf("\nidentification for user efective: %d",geteuid());
	puts("");return 0;
}

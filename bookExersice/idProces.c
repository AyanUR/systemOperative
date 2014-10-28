#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
	printf("\nid for proces: %d",getpid());
	printf("\nid for proces father: %d",getppid());
	sleep(60);
	puts("");return 0;
}

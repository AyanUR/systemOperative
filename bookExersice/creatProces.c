#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
void functionSon(int *i){
	printf("\ni am son and my pid is %d the my father is %d i=%d",getpid(),getppid(),*i);
	*i=*i+1;
}
void functionFather(int *i){
	printf("\ni am father my pid is %d the my father is %d i=%d",getpid(),getppid(),*i);
	*i=*i-1;
}
void createProces(){
	int state,i=0;
	pid_t pid=fork();
	switch(pid){
		case -1:printf("\nerror of fork");break;
		case 0:
			functionSon(&i);
			puts("");exit(0);
		break;
		default:
			functionFather(&i);
			wait(&state);
			exit(0);
	}
	printf("\nstate \"is the value of retur the son\"=%d",state);
}
void procesHuerfano(){
	int i=0;
	pid_t pid=fork();
	switch(pid){
		case -1:printf("\nerror of fork");break;
		case 0:
			sleep(3);
			functionSon(&i);
			puts("");exit(0);
		break;
		default:
			functionFather(&i);
			exit(0);
	}
}
int main(){
	procesHuerfano();
	puts("");return 0;
}

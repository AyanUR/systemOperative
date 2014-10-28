#include <stdio.h>
#include <stdlib.h>
extern char **environ;
int main(){
	int i;
	printf("\nvalue of HOME is: %s",getenv("HOME"));
	printf("\nlas variables de entorno son");
	for(i=0;environ[i]!=NULL;i++)
		printf("\n\tenviron[%d]=%s",i,environ[i]);
	puts("");return 0;
}

#include <stdio.h>
#include <string.h>
int main(int ari,char **arc){
	int tokens;
	for(tokens=0;arc[tokens]!=NULL;tokens++){
		if(arc[tokens][0]=='-')
			printf("\noption %s",arc[tokens]+1);
		else
			printf("\nargument %d\t%s",tokens,arc[tokens]);
		printf("\tsize of cadena is = %d",strlen(arc[tokens]));
	}
	puts("");return 0;
}

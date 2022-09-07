#include <stdio.h>
#include <string.h>
#include <math.h>



void crypt(char *m){
	int i;
	for(i=0;i<strlen(m);i++){
		if(m[i]<110){
		m[i]+=13;
		}else{
		m[i]-=13;	
		}
		
	}
}
main()
{
	char mes[10];
	scanf("%s",mes);
	crypt(mes);
printf("%s",mes);
}


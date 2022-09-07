#include <stdio.h>
#include <string.h>
#include <math.h>

int validatenumber(char *password){
	int i,countN=0;
	for(i=0;i<strlen(password);i++){
		if((password[i]=='0') || (password[i]=='1') ||(password[i]=='2')||(password[i]=='3') || (password[i]=='4') ||(password[i]=='5')  || (password[i]=='6')  ||(password[i]=='7')  ||(password[i]=='8') ||(password[i]=='9')  ){
			countN++;
		}
	}
	return countN;
}
int validatechar(char *password){
	int i,countC=0;
	for(i=0;i<strlen(password);i++){
		if(password[i]=='!' || (password[i] =='@') ||(password[i]=='#') ||(password[i]=='$') || (password[i]=='%')  || (password[i]=='&')  || (password[i]=='*')  ){
			countC++;
		}
	}
	return countC;
}
main(){
	int countN,countC;
	char pass[10];
	scanf("%s",pass);
	countN=validatenumber(pass);
	
	countC=validatechar(pass);
	
    if (countN>=2 && countC>=2 && strlen(pass)>=7){
    	printf("strong");
	}else{
	printf("weak");	
	}
	
	
}

#include<stdio.h>
#include<string.h>

int main(){
	int len, i;
	char str[100];
	
	printf("enter the string: ",str);
	scanf("%s",&str);
	
	len = strlen(str);
	
	if(str > 2 && str[0] == '0' && str[len-1] == '1'){
		for(i = 1; i < len-1;i++){
			if(str[i] != '0' && str[i] != '1'){
				printf("Rejected by CFG");
				break;
			}
		}printf("Accepted by CGF");
	}else{
		printf("Rejected by CFG");
	}
	
	return 0;
}
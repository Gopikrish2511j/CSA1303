#include<stdio.h>
#include<string.h>

int main(){
	int len;
	char str[100];
	
	printf("enter the string: ",str);
	scanf("%s",&str);
	
	len = strlen(str);
	
	if(str > 0 && str[0] == '0' && str[len-1] == '1'){
		printf("Accepted");
	}else{
		printf("Rejected");
	}
	
	return 0;
}
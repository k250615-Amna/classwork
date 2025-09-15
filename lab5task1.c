#include <stdio.h>
#include <string.h>
int main(){
	char quali[10];
	char interview[5];
	printf("What is your qualification: ");
	scanf("%s", &quali);

	
	if(strcmp(quali, "MS")==0){
		printf("What is your interview status: ");
	    scanf("%s", &interview);
	    if(strcmp(interview , "pass") ==0){
	    	printf("You are selected");
		}
		else{
			printf("You did not pass the intrview");
		}	
	}
	else{
		printf("You do not qualify");
	}
	
}

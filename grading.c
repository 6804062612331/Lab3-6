#include<stdio.h>

int main(){
	int score;
	scanf("%d",&score);
	if(score<100){
		if(score>0){
			if (score>68){
		if(score>=80){
			printf("A");
		}
		else if(score>=75){
			printf("B");
		}
		else if(score>=70){
			printf("C %d",75-score);
		}	
	}
	else if(score>=60){
			printf("D");
			}
	else{
		printf("F");
	}	
			
		}
		else {
		printf("Score Error");	
		}
	}
	else {
		printf("Score Error");
	}
}

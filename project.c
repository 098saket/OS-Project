#include<stdio.h>

int counter = 0;

struct process{
	int arvTime;
	int burstTime;
	int priority = 0;
};


int main(){
	printf("This is fork test.\n");
	int id = fork();
	wait();
	if(id == 0){
		printf("THis is child with id %d and parent  wiht id %d\n",getpid(),getppid());
		for(int i =0;i<10;i++){
			sleep(1);
			printf("%d\n",i);
		}
	}else if(id > 0){
		printf("THis is parent with id %d and parent  wiht id %d\n",getpid(),getppid());
	}else{
		printf("Child not created\n");
	}

	return 0;
}
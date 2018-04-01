#include<stdio.h>

int counter = 0;
int no_process = 0;						//no of process

struct process{
	int arvTime ;
	int burstTime ;
	int waitTime ;
	int priority ;
};


int main(){

	printf("Enter the no. of Process\n");
	
	scanf("%d",&no_process);
	while(no_process < 1){
		printf("Please enter the number of process greater than one.\n");
		scanf("%d",&no_process);
	}

	struct process pros[no_process];

	//takeing input 'arvTime' and 'burstTime' for all the precesses.
	for(int i=0; i<no_process; i++){

		printf("Enter the input for Process %d\n", i+1 );
		
		//arvTime
		pros[i].arvTime = 0;
		while(pros[i].arvTime > -1){
			
			printf("Arrival Time : ");
			scanf("%d",&pros[i].arvTime);
			
			if(pros[i].arvTime > -1)
				break;
		}

		//burstTime	
		pros[i].burstTime = 0;
		while(pros[i].burstTime > -1){
			
			printf("Burst Time : ");
			scanf("%d",&pros[i].burstTime);
			
			if(pros[i].burstTime > -1)
				break;
		}
		
	}


	//Print the arrival time and burst time of all the process.
	for(int i=0; i<no_process; i++){
		printf("%d Arrival %d Burst %d\n",i+1, pros[i].arvTime, pros[i].burstTime);
	}


	// printf("This is fork test.\n");
	// int id = fork();
	// wait();
	// if(id == 0){
	// 	printf("THis is child with id %d and parent  wiht id %d\n",getpid(),getppid());
	// 	for(int i =0;i<10;i++){
	// 		sleep(1);
	// 		printf("%d\n",i);
	// 	}
	// }else if(id > 0){
	// 	printf("THis is parent with id %d and parent  wiht id %d\n",getpid(),getppid());
	// }else{
	// 	printf("Child not created\n");
	// }

	return 0;
}
#include<stdio.h>

int counter = 0;
int no_process = 0;						//no of process

struct process{
	int arvTime ;
	int burstTime ;
	int waitTime ;
	int priority ;
};

void burstAndArrivalSort(struct process pros[]);

int main(){

	printf("Enter the no. of Process\n");
	
	scanf("%d",&no_process);
	while(no_process < 1){
		printf("Please enter the number of process greater than one.\n");
		scanf("%d",&no_process);
	}

	//init the sturct.
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

	burstAndArrivalSort(pros);

	for(int i=0; i<no_process; i++){
		printf("%d arival time : %d  burstTime : %d\n", i+1, pros[i].arvTime, pros[i].burstTime);
	}

	return 0;
}


//method to sort the struct depending on arival time.
void burstAndArrivalSort(struct process pros[]){

	//sorting according burst time.
	for(int i=0; i<no_process-1; i++){
		for(int j=i+1; j<no_process; j++){

			if(pros[i].burstTime > pros[j].burstTime){
				int a = pros[j].burstTime;
				pros[j].burstTime = pros[i].burstTime;
				pros[i].burstTime = a;
			}

		}
	}


	//sorting on arrival time.
	for(int i=0; i<no_process-1; i++){
		for(int j=i+1; j<no_process; j++){

			if(pros[i].arvTime > pros[j].arvTime){
				int a = pros[j].arvTime;
				pros[j].arvTime = pros[i].arvTime;
				pros[i].arvTime = a;
			}

		}
	}

}
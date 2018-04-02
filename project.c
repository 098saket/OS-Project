#include<stdio.h>

int processTime = 0;			//->stores the current execution time.
int no_process = 0;				//->no of process

void sortOnArrivalT(struct process pros[]);
void startProcessing(struct process process[]);
void printProcess(struct process pros[]);

struct process{
	int id;
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

	//init the sturct.
	struct process pros[no_process];

	//takeing input 'arvTime' and 'burstTime' for all the precesses.
	for(int i=0; i<no_process; i++){

		printf("Enter the input for Process %d\n", i+1 );
		pros[i].id = i+1;
		pros[i].waitTime = 0;
		pros[i].priority = 1;
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

		printf("\n");
	}


	sortOnArrivalT(pros);

	startProcessing(pros);

	printProcess(pros);

	return 0;
}


//method to sort the struct depending on arival time and burst time.
void sortOnArrivalT(struct process pros[]){

	//sorting on arrival time.
	for(int i=0; i<no_process-1; i++){
		for(int j=i+1; j<no_process; j++){

			if(pros[i].arvTime > pros[j].arvTime){
				struct process a = pros[j];
				pros[j] = pros[i];
				pros[i] = a;
			}

		}
	}

}


//process algo.
void startProcessing(struct process pros[]){

	int i = 0;    //process index starts for 0

	while(i < no_process){

		sturct process topProcess = pros[i++];
		processTime =+ topProcess.burstTime;

		updateProcesses(pros,)

	}	

}


struct process getTopProcess(int i){


}

//method to pring the process.
void printProcess(struct process pros[]){

	for(int i=0; i<no_process; i++){
		printf("Proccess :%d \narivlTime : %d  \nburstTime : %d\n\n", pros[i].id, pros[i].arvTime, pros[i].burstTime);
	}

}
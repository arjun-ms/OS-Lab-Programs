#include <stdio.h>
#define N 4
int mutex=1,empty=N,full=0;
int item=0,buff[N],i=0;

int wait(int s){
	while(s<=0); // busy waiting
	return --s;
}

int signal(int s){
	return ++s;
}

void producer(){
	empty = wait(empty);
	mutex = wait(mutex);
	
	item++;
	i++;
	buff[i]=item;
	printf("Producer produces item: %d\n",buff[i]);
	
	mutex = signal(mutex);
	full = signal(full);
}

void consumer(){
	full = wait(full);
	mutex = wait(mutex);
	
	printf("Consumer consumes item: %d\n",buff[i]);
	i--;
	item--;
	
	mutex = signal(mutex);
	empty = signal(empty);
}

int main(){
	int op;
	printf("1.Producer\n2.Consumer\n3.Exit\n");
	while(1){
		printf("Enter a choice: ");
		scanf("%d",&op);
		switch(op){
			case 1: 
				if((mutex==1) && (empty!=0))
					producer();
				else
					printf("Buffer is full!\n");
				break;
			case 2:
				if((mutex==1) && (full!=0))
					consumer();
				else
					printf("Buffer is Empty!\n");
				break;
			case 3:
				return 0;
			default:
				break;
		}
	
	}
}

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main(){
	key_t key = 15678;
	int shmid = shmget(key,1024,0666|IPC_CREAT);
	char *str = (char*)shmat(shmid,0,0);
	printf("Enter data to write: ");
	gets(str);
	printf("Data written to memory: %s",str);
	shmdt(str);
	return 0;
}

#include <stdio.h>
int main(){
	int p,r,i,j,flag,count=0;
	printf("Enter the no of process: ");
	scanf("%d",&p);
	printf("Enter the no of resources: ");
	scanf("%d",&r);
	int alloc[p][r],max[p][r],need[p][r];
	int avail[r];
	
	printf("Enter the allocation:\n");
	for(i=0;i<p;i++){
		printf("Process P%d:\n",i)
		for(j=0;j<r;j++){
			scanf("%d",&alloc[i][j]);
		}
	}
	
	printf("Enter the max resources:\n");
	for(i=0;i<p;i++){
		printf("Process P%d:\n",i)
		for(j=0;j<r;j++){
			scanf("%d",&max[i][j]);
		}
	}
	
	printf("Need Matrix:\n");
	for(i=0;i<p;i++){
		printf("Process P%d:\t",i)
		for(j=0;j<r;j++){
			need[i][j] = max[i][j] - alloc[i][j]);
			printf("%d\t",need[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the available resources:\n");
	for(j=0;j<r;j++){
		scanf("%d",&alloc[i][j]);
	}
	
	for(i=0;i<p;i++){
		finish[i]=0;
	}
	
	for(k=0;k<p;k++){
		for(i=0;i<p;i++){
			if(finish[i]==0){
				for(j=0;j<r;j++){
					if(need[i][j]<= avail[j]){
						flag=1;
					}
					else{
						flag=0;
						break;
					}
				}
				if(flag==1){
					safe[count] = i;
					for(j=0;j<r;j++)
						avail[j] +=alloc[i][j];
					finish[i] = 1;
					count++;
				}
			}
		}
	}
	
		
}

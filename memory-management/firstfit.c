#include <stdio.h>
int main(){
		int i,j,n,np,bsize[50],psize[50];
		int bflag[50],pflag[50];
		
		// Blocks
		printf("Enter the no of blocks: ");
		scanf("%d",&n);
		printf("Enter the size of each blocks: ");
		for(i=0;i<n;i++){
			scanf("%d",&bsize[i]);
		}
		
		// Process
		printf("Enter the no of processes: ");
		scanf("%d",&np);
		printf("Enter the size of each processes: ");
		for(i=0;i<np;i++){
			scanf("%d",&psize[i]);
		}
		
		printf("\nProcess \tProcess Size \tBlocks\n");
		for(i=0;i<np;i++){
			for(j=0;j<n;j++){
				if(pflag[i]!=1){
					if(bflag[j]!=1 && psize[i] <= bsize[j]){
						pflag[i] = 1;
						bflag[j] = 1;
						printf("\n%d \t\t%d \t\t%d\n",i,psize[i],bsize[j]);
					}
					
				}
			}
		}
		for(i=0;i<np;i++){
			if(pflag[i]!=1){
				printf("\n%d \t\t%d \t\tNot Allocated\n",i,psize[i]);
			}
		}
}

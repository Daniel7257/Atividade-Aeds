
#include "matriz.h"
#include <time.h>

void mat(int n){
	
	int i,j,matriz[n][n];
	int somatorio;
	
	srand(time(NULL));
	
	for(int i=0; i < n;i++){
		for(int j=0; j < n; j++){
			
		matriz[i][j]=rand()%100;
		
		printf("%d  ",matriz[i][j]);
		}
		printf("\n");
	}
	
	somatorio = matriz[0][0];
	matriz[0][0] = -1;
	 
	while(matriz[i][j] != matriz[n-1][n-1]){
		
		
		//andar pra direita e pra baixo
		
		if(j==0 && i != n-1){
			
			if(matriz[i][j+1] < matriz[i+1][j]){
				somatorio+=matriz[i+1][j];
				matriz[i+1][j]=-1;                                 
				i++;
			}else{
				somatorio+=matriz[i][j+1];
				matriz[i][j+1]=-1;
				j++;
			}
			
			
		//andar só pra direita (ultima linha)
		
		}else if(i==n-1){
			
			somatorio+=matriz[i][j+1];           
			j++;
			
			
			
			//andar pra esquerda ou pra baixo
			
		}else if(j==n-1 && i!= (n-1)){
			if(matriz[i+1][j]<matriz[i][j-1]){
				somatorio+=matriz[i][j-1];
				matriz[i][j-1]=-1;
				j--;                                          
			}else{
				somatorio+=matriz[i+1][j];
				matriz[i+1][j]=-1;
				i++;
			}
			
			//andar pra esquerda ou pra direita ou pra baixo.
		}else{
			if(matriz[i][j+1] < matriz[i+1][j] && matriz[i+1][j] > matriz[i][j-1]){
				somatorio+=matriz[i+1][j];
				matriz[i+1][j]=-1;                                 
				i++;
				
			}else if(matriz[i][j+1]>matriz[i+1][j] && matriz[i][j+1]>matriz[i][j-1]){
				somatorio+=matriz[i][j+1];           
				matriz[i][j+1]=-1;
				j++;
				
			}else{
				somatorio+=matriz[i][j-1];
				matriz[i][j-1]=-1;
				j--;         
				
			}	
		}
	}
	
	
	
	
	printf(" Valor total do caminho -> %d \n\n",somatorio);
	
	printf("O maior caminho percorrido foi: \n ");
	
	for(int i=0; i < n;i++){
	for(int j=0; j < n; j++){
			
		printf("%d  ",matriz[i][j]);
	}
		printf("\n");
	}
		
	}
	
	

	
	
	
	

	
	

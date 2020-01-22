#include <stdio.h>

int main(){
	
	printf("Debut du programme\n");
	
	int vie = 100;
	
		printf("J'ai 100HP, commencons le combat.\n");
		
		while(vie > 0){
			printf("coup d'epee !\n");
	
			vie = vie - 10;
	
			printf("%d\n",vie);
		}
	
	printf("\nC'etait un adversaire coriace.");
}
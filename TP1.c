#include <stdio.h>


int main(){
	
	int vie = 100;
	int ennemi = 50;
	
	printf("- J'ai 100HP, commencons le combat.\n\n");
	
	printf("- Je n'ai que 50HP, mais je peux me defendre !\n\n");
	
		while(ennemi > 0){
			
			printf("coup recu !\n");
	
			vie = vie - 10;
	
			printf("Ma vie est de %d points de vie.\n\n",vie);
			
			
			
			printf("Attaque vers l'ennemi !\n");
			
			ennemi = ennemi - 10;
			
			printf("L'ennemi a %d points de vie.\n\n",ennemi);
			
		}
	
	printf("Je t'ai battu.");
}
#include <stdio.h>


int main(){
	
	int vie = 100;
	int ennemi = 50;
	int choix = 0;
	
	printf("- J'ai 100HP, commencons le combat.\n\n");
	
	printf("- Je n'ai que 50HP, mais je peux me defendre !\n\n");
	
		while(ennemi > 0){
			
			scanf("%d",&choix);
			
			if(choix == 1){
				
				printf("coup diminue !\n");
				
				vie = vie - 3;
				
				printf("Ma vie est de %d points de vie.\n\n",vie);
				
				choix = 0;
			}
			else{
				
				printf("coup recu !\n");
			
				vie = vie - 12;
			
				printf("Ma vie est de %d points de vie.\n\n",vie);
			}
			
			
			printf("Attaque vers l'ennemi !\n");
			
			ennemi = ennemi - 8;
			
			printf("L'ennemi a %d points de vie.\n\n",ennemi);
			
		}
	
	printf("Je t'ai battu, ca devenait tendu.");
}
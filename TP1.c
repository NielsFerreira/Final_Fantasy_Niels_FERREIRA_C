#include <stdio.h>
#include <stdlib.h>
#include <time.h>  


int main(void){
	
	int vie = 100;
	int ennemi = 50;
	int choix = 0;
	int mana = 30;
	int poison = 0;
	
	time(NULL);
			
	srand(time(NULL)); // initialisation de rand, permet le vrai aléatoire.
			
	//int rand_a_b(int a, int b);{	// a est plus petit que b, intervalle = a inclu et b exclu
	//	return rand()%(b-a) +a;
	//}
	
	int aleatoire = 0;
	
	
	printf("\n- J'ai 100HP, commencons le combat.\n\n");
	
	printf("- Je n'ai que 50HP, mais je peux me defendre !\n\n");
	
	scanf("%d",&poison);
	
	
		while(ennemi > 0){
			
			if (poison == 2){
					
				printf("attaque poison !\n");
				
				mana = mana-5;
				
				printf("J'ai maintenant %d points de mana.\n",mana);
				
				ennemi = ennemi-4;
					
				printf("L'ennemi prend 4 points de degats a chaque tour, l'ennemi a %d points de vie.\n",ennemi);
					
				mana = mana+1;
				
				// Je ne met pas de retour à 0 de la variable poison pour qu'elle agisse continuellement.
			}
			else{
				
				printf("Je ne t'empoisonne pas.\n");
				
				mana = mana+1; //manque la définition du mana MAX
				
			}
			
			
			scanf("%d",&choix);
			
			if(choix == 1){ // appuyer sur "1" utilise la fonction de defense.
				
				printf("Je bloque et prend moins de degats !\n");
				
				vie = vie - 3;
				
				printf("Ma vie est de %d points de vie.\n",vie);
				
				choix = 0;
			}
			else{
				
				printf("J'ai pris un gros coups !\n");
	
				vie = vie - 12;
	
				printf("Ma vie est de %d points de vie.\n",vie);
			}			
			
			
			
			
			aleatoire = rand();
			
			printf("%d\n",rand()%2); // écrit un chiffre aléatoire entre 0 et 1
			
			
			
			
			if(rand()%2==1){   // si le chiffre aléatoire est égale à 1 alors l'ennemi bloque le coups.
				
				printf("l'ennemi bloque le coups !\n");
				
				ennemi = ennemi-2;
				
				printf("L'ennemi a %d points de vie.\n\n",ennemi);
				
			}
			else{
			
				printf("L'ennemi prend chere !\n");
			
				ennemi = ennemi - 8;
			
				printf("L'ennemi a %d points de vie.\n\n",ennemi);
			}
			
			rand()%2; // permet le reset du random, placé ici, ça fonctionne comme je le souhaite.
			
			if (vie<0){
				ennemi=0;
			}
		
		}
	
	printf("\nFin du combat\n");
}

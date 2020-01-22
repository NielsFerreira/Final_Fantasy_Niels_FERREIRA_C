#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int aleatoire=0;
	int vie = 100;
	int ennemi = 50;
	int choix = 0;
	//int a = 0;
	//int b = 2;
	
	time(NULL);
			
			while(ennemi>0){
				
				scanf("%d",&choix);
				
				if(choix == 1){
					
					printf("Je bloque et prend moins de degats !\n");
					
					vie = vie - 3;	
					
					printf("Ma vie est de %d points de vie.\n",vie);
				}
				else{
					
					printf("J'ai pris un gros coups !\n");
		
					vie = vie - 12;
		
					printf("Ma vie est de %d points de vie.\n",vie);
				}			

				
				aleatoire = rand();
				
				printf("%d\n",rand()%2); // écrit un chiffre aléatoire entre 0 et 1
				
				
				
				if(rand()%2==1){   // si le chiffre aléatoire est égale à 1 alors condition
					
					printf("l'ennemi bloque le coups !\n");
					
					ennemi = ennemi-2;
					
					printf("L'ennemi a %d points de vie.\n\n",ennemi);
					
				}
				else{
					
					printf("\nL'ennemi prend chere !\n");
					
					ennemi =ennemi-8;
				
					printf("L'ennemi a %d points de vie.\n\n",ennemi);
				}
				
				rand()%2; // permet le reset du random, placé ici, ça fonctionne comme je le souhaite.
			
			}
			
			if (vie<0){
				ennemi=0;
				
				printf("\nFin du combat\n");
			}
		
		
		
		}
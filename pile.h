#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//déclaration de la Pile CETTE PILE EST POUR LE TRAITEMENT DES EXPRESSION ARITHMETIQUE
typedef char *Telm;
typedef struct EPile* Pile;
typedef struct EPile { char  *Val; Pile Suiv;} CelluleP;


Pile pile_tmps;


//primitives des Piles
//procedure Initpile

void Initpile()
{pile_tmps=NULL;}

//procedure Empiler
void Empiler(char *x)
{Pile V;
 V=malloc(sizeof(CelluleP));
 V->Val = malloc(strlen(x));  // +1 for \0
 strcpy(V->Val,x);
 V->Suiv=pile_tmps;
 pile_tmps=V;
}

//procedure Depiler
char* Depiler() 
{
 // Check if the stack is empty
 if (pile_tmps == NULL) {
    printf("Error: Stack is empty!\n");
    return NULL;  // or handle this error as you see fit
 }
 Pile V;
 char* x;

   printf("Popping value: %s\n", pile_tmps->Val);

 // memory to store the value being popped
 x = malloc(strlen(pile_tmps->Val) + 1);  // +1 for null terminator '\0'
 if (x == NULL) {
     printf("Error: Memory allocation failed!\n");
     return NULL;
   }
 // top of the stack to x
 strcpy(x, pile_tmps->Val);
 // pointer to the next element
 V = pile_tmps;
 pile_tmps = pile_tmps->Suiv;
    free(V);

  printf("Popped value: %s\n", x);

    return x;
}


//Fonction Pilevide
int Pilevide()
{if (pile_tmps==NULL) return 1;
 else return 0;
}

//Fonction SommetPile
char *  SommetPile(){
    if(Pilevide()){printf(" WARNING LA PILE EST VIDE \n");}
    else{return pile_tmps->Val;}

}

void test_affichage_pile(){ printf("****ICI LA PILE****");}


void Afficher_pile(){
    Pile V;
    V=pile_tmps;
    printf("\n============================================ etat pile ==========================");
    while(V!=NULL){
        
        printf(" \ntmps valeur : %s ",V->Val);
        V= V->Suiv;
    }
    printf("\n============================================ Fin pile ===========================\n");
}


/*
// Dans le cas des if et boucle imbrique le sauvgrade et la mise a jour du quads risque d'etre ecrase
// par de nouvelle valeur dans le cas d'imbriquation 
// d'ou l'utilisation d'une pile de INT pour sauvgarder

Pile pile_sauv_maj;

void Empiler_sm(Telm x)
{Pile V;
 V=malloc(sizeof(CelluleP));
 V->Val=x;
 V->Suiv=pile_sauv_maj;
 pile_sauv_maj=V;
 
}

//procedure Depiler
float Depiler_sm()
{Pile V;
 float x;
 x= pile_sauv_maj->Val;
 V=pile_tmps;
 pile_sauv_maj=(pile_sauv_maj)->Suiv;
 free(V);

 return x;
}*/


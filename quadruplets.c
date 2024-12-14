#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quadruplets.h"

int qc = 0;

qdr quad[1000];

void quadruplet(char opr[],char op1[],char op2[],char res[])
{
	strcpy(quad[qc].oper,opr);
	strcpy(quad[qc].op1,op1);
	strcpy(quad[qc].op2,op2);
	strcpy(quad[qc].res,res);

    qc++;
}

void maj_quad(int num_quad, int colon_quad, char val [])
{
if (colon_quad==0) strcpy(quad[num_quad].oper,val);
else if (colon_quad==1) strcpy(quad[num_quad].op1,val);
         else if (colon_quad==2) strcpy(quad[num_quad].op2,val);
                   else if (colon_quad==3) strcpy(quad[num_quad].res,val);

}

void afficher_qdr()
{
printf("\n\n*********************Les Quadruplets***********************\n");

int i;
//printf("///////////////////////////////// QC = %d //////////////////////////",qc);
for(i=0;i<qc;i++)
		{

 printf("\n %d - ( %s  ,  %s  ,  %s  ,  %s )",i+1,quad[i].oper,quad[i].op1,quad[i].op2,quad[i].res);
 printf("\n--------------------------------------------------------\n");

}
}

char ope1[12];
char ope2[12];


void ajout_quad_opbinaire(char op , char *opa,char * opb)
{
            switch (op)
            {
            case '+': quadruplet("+",opa,opb,"<temporaire>"); break;
            case '-': quadruplet("-",opa,opb,"<temporaire>");break;
            case '*': quadruplet("*",opa,opb,"<temporaire>");  break;
            case '/': quadruplet("/",opa,opb,"<temporaire>"); break;
            }
            
}

// - op
void ajout_quad_opunaire(char *opb)
{
            quadruplet("-","0",opb,"<temporaire>");
            
}

void ajout_quad_affect_val(char entite[],char val[]){
               quadruplet("=",val,"",entite)  ;
}


static int tempCounter = 0;

int newTemp() {
    return tempCounter++; // Increment and return a unique temporary variable index
}

           
//convert interger to string
char* ToSTR(int i){
	char s[15];
	sprintf(s,"%d",i);
	return strdup(s);
}
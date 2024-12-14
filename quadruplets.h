#ifndef QUADRUPLETS_H
#define QUADRUPLETS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct qdr{

    char oper[30];
    char op1[30];
    char op2[30];
    char res[30];

}qdr;

extern qdr quad[1000];
  
extern int qc;

void quadruplet(char opr[],char op1[],char op2[],char res[]);
void maj_quad(int num_quad, int colon_quad, char val []);
void afficher_qdr();
void ajout_quad_opbinaire(char op , char *opa,char * opb);
void ajout_quad_opunaire(char *opb);
void ajout_quad_affect_val(char entite[],char val[]);
char* ToSTR(int i);
int newTemp();/////////////melissa's trying

#endif /* QUADRUPLETS_H */

/*
//creation d'1 quad arithmeitque
void createQuadA(int type, char *cond1, char *cond2, char *res){
	char *TypeBR;
	switch(type){
		case 1 :{//1==> "==" (égale)
			TypeBR=strdup("BNE");
		}
		break;
		case 2 :{//2==> "!=" (different)
			TypeBR=strdup("BE");
		}
		break;
		case 3 :{//3==> ">=" higher Or Equal
			TypeBR=strdup("BL");
		}
		break;
		case 4 :{//4==> "<=" lower Or Equal
			TypeBR=strdup("BG");
		}
		break;
		case 5 :{//5==> "<" lower
			TypeBR=strdup("BGE");
		}
		break;
		case 6 :{//6==> ">" higher
			TypeBR=strdup("BLE");
		}
		break;
	}
	createQuad(TypeBR,ToSTR(qc+3),cond1,cond2);
	createQuad("=","1","",res);
	createQuad("BR",ToSTR(qc+2),"","");
	createQuad("=","0","",res);
}

//creation d'1 quad logique
void createQuadL(int type, char *cond1, char *cond2, char *res){
	switch(type){
		case 1 :{//1==> not
			createQuad("BNZ",ToSTR(qc+3),cond1,"");
			createQuad("=","","1",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","","0",res);
		}
		break;
		case 2 :{//2==> or
			createQuad("BNZ",ToSTR(qc+4),cond1,"");
			createQuad("BNZ",ToSTR(qc+3),cond2,"");
			createQuad("=","","0",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","","1",res);
		}
		break;
		case 3 :{//3==> and
			createQuad("BZ",ToSTR(qc+4),cond1,"");
			createQuad("BZ",ToSTR(qc+3),cond2,"");
			createQuad("=","","1",res);
			createQuad("BR",ToSTR(qc+2),"","");
			createQuad("=","","0",res);
		}
		break;
	}
}


*/
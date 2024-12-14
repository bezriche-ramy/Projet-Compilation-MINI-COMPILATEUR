
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "lex.yy.h"
#include <stdbool.h>
#include <math.h>
#include "TS_tabFormat.h"

////where the scope var still exists it shall be removed////
/*
typedef struct Symbol {
    char name[50];       // Name of the variable/constant
    char type[10];       // Type: INTEGER, FLOAT, CHAR
    int isArray;         // 1 if it's an array, 0 otherwise
    int size;            // Size of the array (positive integer if isArray == 1)
    int isConstant;      // 1 if constant, 0 otherwise
    char val[50];        // Value of the symbol (as a string)
} Symbol;
*/

// The symbol table (array of symbols)
Symbol symbolTable[100];
int symbolCount = 0;

char buffer[32];
void yyerror(const char *s);
int yylex();

void initialisation()
{  printf("Init\n"); }


Symbol* lookupSymbol(char* name) {
    printf("Looking for symbol: %s\n", name);
    for (int i = 0; i < symbolCount; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            return &symbolTable[i];
        }
    }
    return NULL;  // Symbol not found
}


void insertSymbol(char* name, char* type, int isArray, int size, int isConstant, char* value) {
    // Check if the symbol already exists
    Symbol* existingSymbol = lookupSymbol(name);
    if (existingSymbol != NULL) {
        fprintf(stderr, "Error: Variable '%s' is already declared.\n", name);
        return;
    }

    // Insert the new symbol
    strcpy(symbolTable[symbolCount].name, name);
    strcpy(symbolTable[symbolCount].type, type);
    symbolTable[symbolCount].isArray = isArray;
    symbolTable[symbolCount].size = size;
    symbolTable[symbolCount].isConstant = isConstant;

    if (value != NULL) {
        strcpy(symbolTable[symbolCount].val, value);
    } else {
        strcpy(symbolTable[symbolCount].val, ""); // Empty value if not provided
    }

    symbolCount++;
}



/*
void insertArraySymbol(char* name, char* type, int scope, int size) {
    strcpy(symbolTable[symbolCount].name, name);
    strcpy(symbolTable[symbolCount].type, type);
    symbolTable[symbolCount].isArray = 1;  // Mark as an array
    symbolTable[symbolCount].size = size;
    symbolCount++;
}
*/



void insertArraySymbol(char* name, char* type, int size) {
    insertSymbol(name, type, 1, size, 0,""); // 1 indicates it's an array
}




int isTypeCompatible(char* type1, char* type2) {
    // INTEGER and FLOAT are compatible via promotion
    /*if ((strcmp(type1, "INTEGER") == 0 && strcmp(type2, "FLOAT") == 0) ||
        (strcmp(type1, "FLOAT") == 0 && strcmp(type2, "INTEGER") == 0)) {
        return 1; // Compatible with promotion
    }*/
    return strcmp(type1, type2) == 0; // Same types are compatible
}



void insertConstantSymbol(char* name, char* type, char* value) {
    // Check if the constant already exists
    Symbol* existingSymbol = lookupSymbol(name);
    if (existingSymbol != NULL) {
        fprintf(stderr, "Error: Constant '%s' is already declared.\n", name);
        return;
    }

    // Insert the new constant
    insertSymbol(name, type, 0, 0, 1, value); // Pass the constant value
}



int lookup_pos(char entite[])
{
	int i=0;
	while(i<100)
	{
	if (strcmp(entite,symbolTable[i].name)==0) return i;	
	i++;
	}

	return -1;
		
}




// pour recuperer la valeur d'un idf deja initialiser 
void get_value_of_idf(char entite[],char ttmp[]){
  int pos; 
  pos = lookup_pos(entite);
  strcpy(ttmp,symbolTable[pos].val);
}

//   affecter la valeur 

void set_value_of_idf(char entite[],char val_string[]){

  int pos; 
  pos = lookup_pos(entite);

  if(pos!=-1)  { strcpy(symbolTable[pos].val,val_string);
}  
}


void get_type_of_idf(char entite[], char typ []){
	
	int pos = lookup_pos(entite);
	
	strcpy(typ,symbolTable[pos].type);


}



void insert_type(char entite[], char type[])
	{
       int pos;
	   pos=lookup_pos(entite);
	   if(pos!=-1)  { strcpy(symbolTable[pos].type,type);  
	}
}


int is_int_or_float(char t[]) {
    // Convertir la chaîne en un float
    float value = atof(t);

    // Vérifier si la partie décimale est nulle
    if (fabs(value - (int)value) > 0.0) {
        return 0; // C'est un float
    }
    return 1; // C'est un int
}



void afficherTableSymboles() {
    printf("\n===================== Table des Symboles =====================\n");
    printf("| %-15s | %-10s | %-5s | %-5s | %-10s | %-15s |\n",
           "Nom", "Type", "Array", "Size", "Constante", "Valeur");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < symbolCount; i++) {
        printf("| %-15s | %-10s | %-5d | %-5d | %-10d | %-15s |\n",
               symbolTable[i].name,
               symbolTable[i].type,
               symbolTable[i].isArray,
               symbolTable[i].size,
               symbolTable[i].isConstant,
               symbolTable[i].val);
    }

    printf("==============================================================\n");
}

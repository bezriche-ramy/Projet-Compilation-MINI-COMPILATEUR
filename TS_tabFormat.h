#ifndef TS_TABFORMAT_H
#define TS_TABFORMAT_H

typedef struct Symbol {
    char name[50];       // Name of the variable/constant
    char type[10];       // Type: INTEGER, FLOAT, CHAR
    int isArray;         // 1 if it's an array, 0 otherwise
    int size;            // Size of the array (positive integer if isArray == 1)
    int isConstant;      // 1 if constant, 0 otherwise
    char val[50];        // Value of the symbol (as a string)
} Symbol;

// Déclaration des variables globales (avec extern)
extern Symbol symbolTable[100];
extern int symbolCount;
extern char buffer[32];

// Prototypes des fonctions
Symbol* lookupSymbol(char* name);
void insertSymbol(char* name, char* type, int isArray, int size, int isConstant, char* value);
void insertArraySymbol(char* name, char* type, int size);
int isTypeCompatible(char* type1, char* type2);
void insertConstantSymbol(char* name, char* type, char* value);
void initialisation();
void afficherTableSymboles();
void get_value_of_idf(char entite[],char ttmp[]);
void set_value_of_idf(char entite[],char val_string[]);
void get_type_of_idf(char entite[], char typ []);
void insert_type(char entite[], char type[]);
int is_int_or_float(char t[]);
#endif

#ifndef LEX_YY_H
#define LEX_YY_H

extern char *yytext;       // yytext is the string matched by the lexer
extern int yylineno;       // Line number of the current token

int yylex(void);           // The lexer function that returns tokens

#endif

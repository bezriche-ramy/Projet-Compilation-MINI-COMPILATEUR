%{
#include "syntax.tab.h" // Include the header file generated by Bison

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

%}

%option yylineno
%option noyywrap

%%

"VAR_GLOBAL"            { return VAR_GLOBAL; }
"DECLARATION"           { return DECLARATION; }
"INSTRUCTION"           { return INSTRUCTION; }

"INTEGER"               { return INTEGER; }
"FLOAT"                 { return FLOAT; }
"CHAR"                  { return CHAR; }
"CONST"                 { return CONST; }

"IF"                    { return IF; }
"ELSE"                  { return ELSE; }
"FOR"                   { return FOR; }
"READ"                  { return READ; }
"WRITE"                 { return WRITE; }

"&&"                    { return AND; }
"||"                    { return OR; }
"!"                     { return NOT; }

"=="                    { return EQUAL; }
"!="                    { return NOT_EQUAL; }
"<="                    { return LESS_EQUAL; }
">="                    { return GREATER_EQUAL; }
">"                     { return GREATER; }
"<"                     { return LESS; }
"{"                     { return LBRACE; } 
"}"                     { return RBRACE; }  



[0-9]+ {
    yylval.string = strdup(yytext); // Store integer constants as strings
    return INTEGER_CONSTANT;
}

[0-9]+\.[0-9]+ {
    yylval.string = strdup(yytext); // Store float constants as strings
    return FLOAT_CONSTANT;
}

\"[^\"\n]*\" {
    yylval.string = strdup(yytext); // Store string literals
    //printf("Found value %s\n", yytext);
    return STRING_LITERAL;
}


[A-Za-z_][A-Za-z0-9_]*  {  yylval.string = strdup(yytext); printf("Found identifier: %s\n", yytext); return IDENTIFIER; } // Match identifiers

"//"[^"\n]*             ;  // Ignore single-line comments

[ \t\n]+                ;  // Ignore whitespace

.                       { return *yytext; } // Return other characters as-is

"%%".*                  { /* comment %% */ }

%%


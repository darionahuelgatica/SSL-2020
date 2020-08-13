#include <stdio.h>

void Out ();
void In ();

int main() {
    Out();
}

void Out (){
    char c;
    if((c = getchar()) != EOF) 
    if (c == ' ' || c == '\n' || c == '\t') {
        Out();
    }
    else {
        putchar(c);
        In();
    }
}

void In (){
    char c;
    if((c = getchar()) != EOF) 
    if (c == ' ' || c == '\n' || c == '\t') {
        putchar('\n');
        Out();
    }
    else {
        putchar(c);
        In();
    }
}
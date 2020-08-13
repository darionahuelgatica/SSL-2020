#include <stdio.h>

enum state {In, Out};
typedef enum state State;

int main() {
    State s = Out;
    char c;

    while((c = getchar()) != EOF) {
        switch(c) {
            case '\n':
            case '\t':
            case ' ':
                if (s == In) putchar('\n');
                s = Out;
            break;
            default:
                s = In;
                putchar(c);
            break;
        }
    }
}
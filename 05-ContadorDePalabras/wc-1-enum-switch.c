#include <stdio.h>

enum State {In, Out};

int main() {
    enum State state = Out;
    int nc = 0;
    int nl = 0;
    int nw = 0;
    char c;

    while((c = getchar()) != EOF) {
        ++nc;
        switch(c) {
            case '\n':
                ++nl;
                state = Out;
            break;
            case '\t':
                state = Out;
            break;
            case ' ':
                state = Out;
            break;
            default:
                ++nw;
                state = In;
            break;
        }
    }

    printf("%d %d %d \n", nl, nw, nc);
}
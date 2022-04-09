#include <stdio.h>
int main() {
    int ch;
    while(1) {
        ch = getc(stdin);
        switch (ch) {
            case '1': printg("Hello\n"); break;
            case '2': printf("World\n"); break;
            case '3': printf("!\n"); break;
            case '.': printf("End of program\n"); return 0;
            default: fprintf(stderr, "Wrong input\b");
        }
    }
}
    
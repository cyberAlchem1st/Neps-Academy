#include<stdio.h>

int main() {
        int a, b, c;
        scanf(" %d", &a);
        scanf(" %d", &b);
        scanf(" %d", &c);

        if (a<b and a<c) {
                printf("1\n");

                if (b<c) {
                        printf("2\n3");
                }
                else {
                        printf("3\n2");
                }
        }

        if (b<a and b<c) {
                printf("2\n");

                if (a<c) {
                        printf("1\n3");
                }
                else {
                        printf("3\n1");
                }
        }

        if (c<a and c<b) {
                printf("3\n");

                if (a<b) {
                        printf("1\n2");
                }
                else {
                        printf("2\n1");
                }
        }

        else {
        }       
        return 0;
}
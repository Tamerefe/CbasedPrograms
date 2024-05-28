#include <stdio.h>

int main(){

    int x,y,n=2;

    for (y = 0; y <= n; y++){
        for (x = 0; x < n-y; x++){
            printf("   ");
        }
        for (x = 0; x <= y; x++){
            printf(" * ");
        }
        for (x = 0; x <= y-1; x++){
            printf(" * ");
        }
        for (x = 0; x < n-y; x++){
            printf("   ");
        }
        printf("\n");
    }   

    n = 1;

    for (y = 0; y <= n; y++){
        for (x = 0; x <= y; x++){
            printf("   ");
        }
        for (x = 0; x <= n-y; x++){
            printf(" * ");
        }
        for (x = 0; x <= n-y-1; x++){
            printf(" * ");
        }
        for (x = 0; x < y; x++){
            printf("   ");
        }
        printf("\n");
    } 
    

}
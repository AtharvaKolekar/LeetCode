// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char text[] = "ATHARVA";

int main() {
    int len = strlen(text);
    int i=0, j=0;
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            if(i==j || j==(len-1-i) ){
                printf("%2c", text[i]);    
            } else{
               printf("  ");    
            }
        }
        printf("\n");
    }
    return 0;
}

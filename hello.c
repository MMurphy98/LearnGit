#include <stdio.h>

int main(){
    printf("Hello world!\n");
    
    size_t n = 10;
    int a[n];
    for(int i = 0; i < 10; i++){
        a[i] = i+1;
    }

    printf("Done\r\n");

    return 0;
}

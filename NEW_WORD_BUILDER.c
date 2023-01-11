#include <stdio.h>
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))


char wordBuilder(char a[], int e[]){

    char b[NELEMS(a)+1];
    for(int u=0; u<NELEMS(a); u++){
        b[u] = a[e[u]];
    }
    printf("The word is %s: ", b);
    return b;
}


int main(){
    char c[] = {'g','e','o'};
    int p[] = {1,0,2};
    wordBuilder(c,p);
    return 0;
}

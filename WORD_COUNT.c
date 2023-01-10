#include <stdio.h>
#include <string.h>

int wordCount(char a[]){
    int wc = 1;

    for(int f=0; f<strlen(a); f++){
        if(a[f]==' '){
            wc++;
        }
    }
    return wc;

}

void userInput(){
    char p[255];
    printf("\nMax 255 characters for now please!\nEnter some word(s): ");
    fgets(p,sizeof(p),stdin);
    printf("Number of word(s): %d\nHit Escape to quit, or any key to continue.\n",wordCount(p));

}

int main(){
    const int ESC = 27;
    int key = 0;
    do{
       userInput();
       key = getche();
    }while(key != ESC);


return 0;
}

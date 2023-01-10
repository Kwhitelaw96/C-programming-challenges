#include <stdio.h>
#include <math.h>

int cars_needed_easy(int p){
    float cars_n = (float) p/5;
    printf("The number of cars needed for %d people is: %d\n", p, (int)ceil(cars_n));
    userInput();
}

void userInput(){
    int p;
    printf("\nIf you want this program to end enter a number 500 or larger for input\n");
    printf("Enter the number of people:");
    scanf("%d",&p);
    if(abs(p) >= 500){
        exit(0);
    }else{
    cars_needed_easy(abs(p));
    }
}

int main()
{

    userInput();
    return 0;
}

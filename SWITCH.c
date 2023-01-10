#include <stdio.h>
#include <math.h>

int getTheSwitch(int i){
    return (pow(2,i));
}

int main(){
    printf("%d\n", getTheSwitch(10));
}
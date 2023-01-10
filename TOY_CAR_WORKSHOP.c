#include <stdio.h>
#include <math.h>



int modelCarsMade(int a, int b,int c){

    int wheelSets, bodySets, figureSets,completeSets=0;

    if( a < 4 || b < 0 || c < 2){
        return 0;
    }else{
        bodySets = b;
        wheelSets = a/4;
        figureSets = c/2;
        for(int z=0;z<bodySets;z++){
            if(wheelSets<=0 || figureSets<=0){
                break;
            }else{
                wheelSets--;
                figureSets--;
                completeSets++;
            }
        }
    }
    return completeSets;

}

int main(){

    printf("Total complete sets: %d",modelCarsMade(78,56,68));
    return 0;

}

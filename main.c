#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){

    double N;
    scanf("%lf",&N);
    if(N>=0 && N<=25.00){
        printf("Intervalo [0,25]");
    }
    else if(N>=25.01 && N<=50.00){
        printf("Intervalo (25,50]");
    }
    else if(N>=50.01 && N<=75.00){
        printf("Intervalo (50,75]");
    }
    else if(N>=75.01 && N<=100.00){
        printf("Intervalo (75,100]");
    }
    else
        printf("Fora de intervalo");

    printf("\n");


    }
    return 0;
}

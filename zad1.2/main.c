#include <stdio.h>
#include <stdlib.h>
float a=0,b,c;
float pierwiastek(float liczba, float przyblizenie){
    float kandydat=1;
    while(kandydat*kandydat-liczba>przyblizenie || liczba-kandydat*kandydat>przyblizenie){
        kandydat=(kandydat+liczba/kandydat)/2;
    }
    return kandydat;
}
int main()
{
    while(a==0){
        printf("Podaj wartość współczynnika przy x^2\n");
        scanf("%f", &a);
    }
    printf("Podaj wartość współczynnika przy x\n");
    scanf("%f", &b);
    printf("Podaj wartość współczynnika wolnego\n");
    scanf("%f", &c);
    int delta=b*b-4*a*c;
    if(delta<0)
        printf("Równanie nie ma pierwiastków\n");
    else
        if(delta==0)
            printf("Pierwiastek jest równy %f\n",-b/(2*a));
        else{
            printf("Pierwszy pierwiastek jest rowny %f\n",(-b+pierwiastek(delta,0.000001))/(2*a));
            printf("Drógi pierwiastek jest rowny %f\n",(-b-pierwiastek(delta,0.000001))/(2*a));
            }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "sortari.h"
int matrice[200][200];
int nrnoduri;

int main()
{
    int iterator1,iterator2;
    time_t t;
    srand((unsigned)time(&t));

    nrnoduri=rand() %5+3;


    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        for(iterator2=1;iterator2<nrnoduri;iterator2++){
                matrice[iterator1][iterator2]=rand() % 2;
        }
    }




     valori_matrice(matrice,nrnoduri);
    printare_matrice(matrice,nrnoduri);
    printf("Ordinea pieselor din instructiuni este : ");
    sortare_topologica(matrice,nrnoduri);
    return 0;
}


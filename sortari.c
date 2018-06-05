#include "sortari.h"

int verificare_ciclu(int matrice[200][200],int nrnoduri) {
int iterator1;
int iterator2;
int copie[200][200];
int lungime;
int verificare[200];
int suma_coloana;
int aciclitate;

    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        verificare[iterator1]=0;
    }

    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        for(iterator2=0;iterator2<nrnoduri;iterator2++){
            copie[iterator1][iterator2]=matrice[iterator1][iterator2];
        }
    }

    lungime=nrnoduri;

    while(lungime!=0){
        aciclitate=0;
        for(iterator1=0;iterator1<nrnoduri;iterator1++){
            suma_coloana=0;
             if(verificare[iterator1]==0){
            for(iterator2=0;iterator2<nrnoduri;iterator2++){
                suma_coloana=suma_coloana+copie[iterator2][iterator1];
            }

            if(suma_coloana==0){
                aciclitate=1;
                verificare[iterator1]=1;
                lungime--;
                for(iterator2=0;iterator2<nrnoduri;iterator2++){
                    copie[iterator1][iterator2]=0;
                }
            }
             }
        }

        if(aciclitate==1){
            return 1;
        }
    }

    return 0 ;

}


void sortare_topologica(int matrice[200][200],int nrnoduri){
int iterator1;
int iterator2;
int copie[200][200];
int lungime;
int verificare[200];
int suma_coloana;


    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        verificare[iterator1]=0;
    }

    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        for(iterator2=0;iterator2<nrnoduri;iterator2++){
            copie[iterator1][iterator2]=matrice[iterator1][iterator2];
        }
    }

    lungime=nrnoduri;

    while(lungime!=0){

        for(iterator1=0;iterator1<nrnoduri;iterator1++){
            suma_coloana=0;
            if(verificare[iterator1]==0){
            for(iterator2=0;iterator2<nrnoduri;iterator2++){
                suma_coloana=suma_coloana+copie[iterator2][iterator1];
            }

            if(suma_coloana==0){


                verificare[iterator1]=1;
                printf(" %d ",iterator1+1);
                lungime--;
                for(iterator2=0;iterator2<nrnoduri;iterator2++){
                    copie[iterator1][iterator2]=0;
                }
            }
            }

        }


    }



}





void valori_matrice(int matrice[200][200],int nrnoduri){

int iterator1;
int iterator2;


    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        for(iterator2=0;iterator2<nrnoduri;iterator2++){


            if(matrice[iterator1][iterator2]==1){
               matrice[iterator2][iterator1]=0;
            }
            if(iterator1==iterator2){
                matrice[iterator1][iterator2]=0;
            }

        }

    }

 for(iterator1=0;iterator1<nrnoduri;iterator1++){
        if(verificare_ciclu(matrice,nrnoduri)==0){
            for(iterator2=0;iterator2<nrnoduri;iterator2){
                matrice[iterator1][iterator2]=0;
            }
        }

}


}



void printare_matrice(int matrice[200][200],int nrnoduri){

int iterator1;
int iterator2;

    for(iterator1=0;iterator1<nrnoduri;iterator1++){
        for(iterator2=0;iterator2<nrnoduri;iterator2++){

            printf(" %d ",matrice[iterator1][iterator2]);

        }
        printf("\n");
    }

}



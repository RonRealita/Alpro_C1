/* Nama File            : JumPrimaProsedur.c */
/* Deskripsi            : jumlmah dari bilangan prima  */
/* Pembuat              : Rona Realita Najma - 24060122140124 */
/* Tanggal pembuatan    : 28 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

void JumlahPrima(int N)
{
    //Kamus lokal
    int i,j,banyakFaktor, jum;

    //Algoritma
    if(N>0){
        jum = 0;
        for(i=1;i<=N;i++){
            banyakFaktor = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    banyakFaktor++;
                }
            }
            if(banyakFaktor==2 && jum == 0){
                jum = jum + i;
                printf("%d",i);
            }
            else if(banyakFaktor==2 && jum != 0){
                jum = jum + i;
                printf("+%d",i);
            }
            if (i==N){
                printf(" dengan jumlahan Deret Bilangannya adalah %d", jum);
            }
        }
    }
    else{
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahnya Sn=0");
    }
}

int main(){
    JumlahPrima(10);
    return 0;
}

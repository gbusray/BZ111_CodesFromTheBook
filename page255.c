//
//  main.c
//  page255
//
//  Created by Gevher Büşra Yetişen on 15.01.2023.
//

#include <stdio.h>

void ortalama(int ogr_sa, int sinav_sa, int not[][3], double orta[]){
    double toplam;
    int i,j;
    for (i=0; i<ogr_sa; ++i) {
        toplam=0;
        for (j=0; j<sinav_sa; ++j)
            toplam+=not[i][j];
        orta[i]=toplam/3.0;
    }
}

int main(void) {
    int test [30][3];
    int i,j,toplam;
    double averaj[30];
    for (i=0; i<30; ++i) {
        printf("%d. ogrenci \n",i+1);
        for (j=0; j<3; ++j)
            scanf("%d",&test[i][j]);
    }
    ortalama(30, 3, test, averaj);
    for (i=0; i<30; ++i)
        printf("%d. ogrenci ortalamasi:%5.2f\n",i+1,averaj[i]);
    return 0;
}

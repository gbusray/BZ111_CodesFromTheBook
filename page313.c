//
//  main.c
//  page313
//
//  Created by Gevher Büşra Yetişen on 17.01.2023.
//

#include <stdio.h>
#include <string.h>

struct ogrenci{
    char isim[15];
    int yas;
    float ortalama;
};

void oku(struct ogrenci s[]);

int main(void) {
    struct ogrenci sinif[30];
    float enbuyuk = 0.0;
    char birinci[15];
    int i;
    /*sınıf dizisini okuyalım*/
    oku(sinif);
    /*30 öğrenciden en yüksek ortalamayı tutturan ogrencinin ortalamasini ve adini saklayalim */
    for (i=0; i<30; ++i) {
        if ((sinif[i].ortalama)>enbuyuk) {
            enbuyuk = sinif[i].ortalama;
            strcpy(birinci, sinif[i].isim);
        }
        printf("Sinif birincisi: %s\n",birinci);
        printf("Ortalama: %5.2f\n",enbuyuk);
    }

}
//yapi dizisini okuyan fonksiyon

void oku (struct ogrenci s[ ]){
    int i;
    for (i=0; i<30; ++i) {
        scanf("%s,",s[i].isim);
        scanf("%d %f",&s[i].yas,&s[i].ortalama);
    }
}

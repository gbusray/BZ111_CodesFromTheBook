//
//  main.c
//  page310
//
//  Created by Gevher Büşra Yetişen on 17.01.2023.
//

#include <stdio.h>
#include <math.h>

struct noktatipi {
    int x,y;
};

struct noktatipi oku(void);
float mesafe_fon(struct noktatipi*, struct noktatipi*);

int main(void){
    struct noktatipi n1,n2;
    float mesafe;
    /* n1 ve n2 noktalarını okuyalım */
    n1=oku();
    n2=oku();
    /* n1 ve n2 arasındaki mesafeyi hesaplayalım*/
    mesafe=mesafe_fon(&n1, &n2);
    printf("Iki noktanin arasındaki mesafe %5.2f\n",mesafe);
    return (0);
}

/* noktanin koordinatlarini okuyan fonksiyon*/
struct noktatipi oku(void){
    struct noktatipi gecici;
    printf("Noktanin x ve y koordinatlarini giriniz:\n");
    scanf("%d%d",&gecici.x,&gecici.y);
    return (gecici);
}

/* a ve b gostergelerinin gosterdigi noktalarin arasindaki mesafeyi hesaplayan fonksiyon */
float mesafe_fon(struct noktatipi *a, struct noktatipi *b){
    float uz1 = pow((a->x - b->x), 2);
    float uz2 = pow((a->y - b->y), 2);
    return (sqrtf(uz1+uz2));
}

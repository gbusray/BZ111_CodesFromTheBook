//
//  main.c
//  page301
//
//  Created by Gevher Büşra Yetişen on 17.01.2023.
//

#include <stdio.h>
#include <math.h>


int main(void) {
    struct noktatipi{
        int x,y;
    };
    struct noktatipi n1,n2;
    float mesafe;
    /* Iki noktanin koordinatlarini okuyalım */
    printf("1. noktanin x ve y kordinatlarini giriniz:\n");
    scanf("%d%d",&n1.x,&n1.y);
    printf("2. noktanin x ve y kordinatlarini giriniz:\n");
    scanf("%d%d",&n2.x,&n2.y);
    /* Iki nokta arasındaki mesafeyi hesaplayalim */
    mesafe= sqrtf(pow((n1.x-n2.x),2)+pow((n1.y-n2.y), 2));
    printf("Iki nokta arasindaki mesafe: %5.2f\n",mesafe);
    return 0;
}

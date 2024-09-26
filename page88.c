//
//  main.c
//  page88
//
//  Created by Gevher Büşra Yetişen on 6.12.2022.
//

#include <stdio.h>
int main(void) {
    int true=1, false=0;
    /* false is 0;
     true is 1 */
    printf("   p   q    ~pVq\n");
    printf("-------------------\n");
    printf("%3d%5d%7d \n" ,true, true, !true||true);
    printf("%3d%5d%7d \n" ,true, false, !true||false);
    printf("%3d%5d%7d \n" ,false, true, !false||true);
    printf("%3d%5d%7d \n" ,false, false, !false||false);
    return 0;
}

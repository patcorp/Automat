#include <stdio.h>
#include <stdlib.h>
#define W 0.5
#define L 1.0
#define B 2.0

int main()
{

    int g = 0;
    int m = 0;
    float zuzahlen = 0;
    int para = 0;

    printf("1) Wasser %f Euro\n", W);
    printf("2) Limonade %f Euro\n", L);
    printf("3) Bier %f Euro\n", B);

    printf("Waehlen sie ihr Getraenk aus: ");
    scanf("%d", &g);
    printf("Geben sie die gewuenschte Menge ein: ");
    scanf("%d", &m);

    switch(g){
        case 1: zuzahlen = W * m; break;
        case 2: zuzahlen = L * m; break;
        case 3: zuzahlen = B * m; break;
    }

    printf("--- Bezahlvorgang ---\n");
    printf("%f\n", zuzahlen);
    //scanf("%d", &para);
    do{
	scanf("%d", &para);
	if(para != zuzahlen){
        	printf("Noch %f zu zahlen\n", zuzahlen -= para);
	}else{
		break;
	}
    }while(zuzahlen != 0);

    printf("Danke!");

    return 0;
}


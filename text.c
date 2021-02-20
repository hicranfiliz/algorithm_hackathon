#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

char *harfKontrol(const char *p);
char *sifreYapma(const char *d, char krk, int kac, int secim);

    int main(){

    char metin[100];
    char *p;
    char *d;
    char krk;
    int kac;
    int secim;

    printf("***Sifreleme Algoritmasi***\n");

	printf("Kucuk-Buyuk Harf Secimi Yapiniz\n");
	printf("1. Buyuk Harf\n");
    printf("2. Kucuk Harf\n");
    printf("Secim: ");
    scanf("%d",&secim);

    printf("Bir cumle giriniz...\n");
    scanf("%s",&metin);
    printf("Girdiginiz Cumle: %s\n", metin);

    printf("Kac karakter otesi sifrelemek istersiniz...");
    scanf("%d",&kac);

        p=harfKontrol(metin);
        char *harfKontrol(const char *p);

        d=sifreYapma(metin, krk, kac, secim);
        char *sifreYapma(const char *d, char krk, int kac, int secim);
      
      //nokta-ucgen algoritma
        
        printf("\n\n***Nokta-Ucgen Algoritmasi***\n");

    float Ax,Ay,Bx,By,Cx,Cy,Px,Py;
    float bx,by,cx,cy,x,y;
    float k;
    float WA,WB,WC;

    printf("Birinci kose koordinatlari giriniz: ");
    scanf("%f , %f", &Ax,&Ay);

    printf("Ikinci kose koordinatlari giriniz: ");
    scanf("%f , %f",&Bx,&By);

    printf("Ucuncu kose koordinatlari giriniz: ");
    scanf("%f , %f", &Cx,&Cy);

    printf("P noktasinin koordinatlarini giriniz: ");
    scanf("%f , %f", &Px,&Py);

    bx=Bx-Ax;
    by=By-Ay;
    cx=Cx-Ax;
    cy = Cy-Ay;
    x = Px-Ax;
    y = Py-Ay;


    k=bx*cy-cx*by;
    WA= (x*(by-cy)+y*(cx-bx)+bx*cy-cx*by)/k;
    WB=(x*cy-y*cx)/k;
    WC=(y*bx-x*by)/k;

    if(WA>0 && WA<1 && WB>0 && WB<1 && WC>0 && WC<1)
        printf("Nokta ucgenin icindedir.");
    else
        printf("Nokta ucgenin disindadir.");

        //satranc algoritması

        printf("\n\n***Satranc Algoritmasi***");



        return 0;

    }

    char *harfKontrol(const char *p){

	    if( isalpha(*p)){
	        printf( "Character %c is alpha\n",*p );
	    }
	}

    char *sifreYapma(const char *d, char krk, int kac, int secim){

        for(int i=0;i<strlen(d);i++)
    {
        if(d[i]==' ')
    {
        printf(" ");
        continue;
    }
        else if(secim == 1)
    {
        krk = (char) (((int) d[i]-65+kac)%26+65);
        printf("%c",krk);
    }
        else{
            krk = (char) (((int) d[i]-97+kac)%26+97);
            printf("%c",krk);
        }
        }
    }

    /*int deger1 (float WA){
        
        float bx,by,cx,cy,x,y;
        float k;

        return((x*(by-cy)+y*(cx-bx)+bx*cy-cx*by)/k);
    }*/

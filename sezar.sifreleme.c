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

       dongu:
	printf("Kucuk-Buyuk Harf Secimi Yapiniz\n");
	printf("1. Buyuk Harf\n");
    printf("2. Kucuk Harf\n");
    printf("3. Cikis\n");
    printf("Secim: ");
    scanf("%d",&secim);
    if(secim==3)
        return 0;

        dongu2:
    printf("Bir cumle giriniz...\n");
    scanf("%s",&metin);
    printf("%s\n", metin);

    printf("Kac karakter otesi sifrelemek istersiniz...");
    scanf("%d",&kac);

        /*p=harfKontrol(metin);
        char *harfKontrol(const char *p);*/

        d=sifreYapma(metin, krk, kac, secim);
        char *sifreYapma(const char *d, char krk, int kac, int secim);

        sleep(10);
        printf("\n10 Saniye sonra menuye yonlendirileceksiniz.\a");
        system("cls");

        goto dongu;
    }

    /*char *harfKontrol(const char *p){

	    if( isalpha(*p)){
	        printf( "Character %c is alpha\n",*p );
	    }
	}*/

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





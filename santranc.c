#include <stdio.h>
#include <stdlib.h>

void piyon(int a,char b)
{
    int i;
    printf("piyonun koordinatlarini giriniz:");
    scanf("%d,%c",&a,&b);
    printf("Gidebilecegi yerler-->\n");
    for(i=0;i<2;i++)
    {
        if(a>=8 || a<1)
            continue;
        printf("%d-%d,%c\n",i+1,++a,b);
    }

}

void kale(int a,char b)
{
    printf("Kalenin koordinatlarini giriniz:");
    scanf("%d,%c",&a,&b);
    printf("Gidebilecegi yerler..\n");
    for(int i=a;i<8;i++)
    {
        printf("%d,%c",i+1,b);
        printf("\n");
    }
    for(int i=a;i<=8 && i>1;i--)
    {
        printf("%d,%c",i-1,b);
        printf("\n");
    }
    for(int i=b;i<'H' && i>'A';i--)
    {
        printf("%d,%c",a,i-1);
        printf("\n");
    }
    for(int i=b;i<'H' ;i++)
    {
        printf("%d,%c",a,i+1);
        printf("\n");
    }
}

void fil(int a,char b)
{
    int gecici;
    printf("Filin Koordinatlarini giriniz:");
    scanf("%d,%c",&a,&b);
    gecici=a+1;
    printf("Gidebilecegi Yerler..\n");
    for(int i=b;i<'H' && gecici<=8 && gecici>=1 ;i++)
    {
        printf("%d,%c",gecici++,i+1);
        printf("\n");
    }
    gecici=a;
    printf("\n");
    for(int i=b;i>'A';i--)
    {
        printf("%d,%c",gecici-1,i-1);
        gecici--;
        printf("\n");
    }
    gecici=a;
    printf("\n");
    for(int i=b;i>'A' && gecici<8;i--)
    {
        printf("%d,%c",++gecici,i-1);
        printf("\n");
    }
    gecici=a;
    printf("\n");
    for(int i=b;i<'H' && gecici>1;i++)
    {
        printf("%d,%c",--gecici,i+1);

        printf("\n");
    }
}
void sah(int a,char b)
{
    printf("Sah in Koordinatlarini giriniz:");
    scanf("%d,%c",&a,&b);
    int gecici=a;
    printf("Gidebilecegi Yerler..\n");
    for(int i=b+1;i>=b-1 && gecici<=8 && gecici>=1;i--)
    {
        if(gecici>7 || gecici<1 || i<'A' || i>'H')
         {
            continue;
         }
         printf("%d,%c\n",gecici+1,i);
    }
    gecici=a;
    printf("------\n");
    for(int i=b-1;i<=b+1 && gecici<=8 && gecici>=1;i++)
    {
           if(gecici<1 || gecici>8 || i<'A' || i>'H')
               continue;
           if(gecici >1)
               printf("%d,%c\n",gecici-1,i);

    }
    gecici=a;
    printf("------\n");
    for(int i=b+1;i>=b-1 && gecici<=8 && gecici>=1;i--)
    {
        if(i<'A' || i>'H')
            continue;
        if(i==b || gecici<1 || gecici>8)
            continue;
        printf("%d,%c\n",gecici,i);
    }
}
void vezir(int a,char b)
{
    printf("Vezir'in koordinatlarini giriniz:");
    scanf("%d,%c",&a,&b);
    int gecici=a;
    printf("Gidebilecegi yerler..\n");
    for(int i=a;i<8;i++)
    {
        printf("%d,%c",i+1,b);
        printf("\n");
    }
    printf("----1\n");
    for(int i=a;i<=8 && i>1;i--)
    {
        printf("%d,%c",i-1,b);
        printf("\n");
    }
    printf("----2\n");
    for(int i=b;i<'H' && i>'A';i--)
    {
        printf("%d,%c",a,i-1);
        printf("\n");
    }
    printf("----3\n");
    for(int i=b;i<'H' ;i++)
    {
        printf("%d,%c",a,i+1);
        printf("\n");
    }
    printf("----4\n");
    for(int i=b;i<'H' && gecici<8 && gecici>=1;i++)
    {
        printf("%d,%c",gecici+1,i+1);
        gecici++;
        printf("\n");
    }
    gecici=a;
    printf("---5\n");
    for(int i=b;i>'A' && gecici<8 && gecici>1 ;i--)
    {
        printf("%d,%c",gecici-1,i-1);
        gecici--;
        printf("\n");
    }
    gecici=a;
    printf("---6\n");
    for(int i=b;i>'A' && gecici<8;i--)
    {
        printf("%d,%c",++gecici,i-1);
        printf("\n");
    }
    gecici=a;
    printf("--7\n");
    for(int i=b;i<'H' && gecici>1;i++)
    {
        printf("%d,%c",--gecici,i+1);

        printf("\n");
    }
}
void at_2_1(int a,char b)
{
    printf("At'in koordinatlarini giriniz:");
    scanf("%d,%c",&a,&b);
    int gecici=a;
    printf("Gidebilecegi yerler..\n");

    for(int i=b-2;i<='H';i++)
    {
        if(i<'A' || i>'H' || gecici<1 || gecici >8)
            continue;
        if(i==b-1 || i==b || i==b+1 || b+3)
            continue;
        printf("%d,%c\n",gecici+1,i);
    }
    gecici=a;
    printf("---1\n");
    for(int i=b-2;i<='H' && i>='A' && gecici<=8 && gecici>=1;i++)
    {
        if(i<'A' || i>'H' || gecici<1 || gecici >8)
        {
            continue;
        }
        if(i==b-1 || i==b || i==b+1 || i==b+3)
            continue;
        if(gecici-1<1 || gecici-1>8)
            continue;
        printf("%d,%c\n",gecici-1,i);//Ekstra Bir Durum Lazým

    }
    printf("---2\n");
    gecici=a;
    for(int i=b-1;i<=i<='H' && i>='A' && gecici<=8 && gecici>=1;i++)
    {
        if(i<'A' || i>'H' || gecici<1 || gecici >8)
        {
            continue;
        }
        if(i==b || i==b+2 || i==b+3)
            continue;
        if(gecici-2<1 || gecici-2>8)
            continue;
        printf("%d,%c\n",gecici-2,i);//Ekstra Bir Durum Lazým
    }
    gecici=a;
    printf("---3\n");
    for(int i=b-1;i<=b+1 && i<='H';i++)
    {

        if(i<'A' || i>'H' || gecici<1 || gecici >8)
        {
            continue;
        }
        if(i==b || i==b+2 || i==b+3 )
            continue;
        if(gecici+2<1 || gecici+2>8)
            continue;
        printf("%d,%c\n",gecici+2,i);
    }
    gecici=a;
    printf("---4\n");
    for(int i=b-2;i<=b+2 && i<='H';i++)
    {
        if(i<'A' || i>'H' || gecici<1 || gecici >8)
        {
            continue;
        }
        if(i==b-1 || i==b || i==b+1 || i==b+3)
            continue;
        if(gecici+1<1 || gecici+1>8)
            continue;
        printf("%d,%c\n",gecici+1,i);//Ekstra bir durum lazým
    }

}
int main()
{
    int satranc[8][8];
    int i;
    int degisken='A';
    printf("\tA\tB\tC\tD\tE\tF\tG\tH\n");
    for(i=8;i>0;i--)
    {
        printf("%d",i);
        printf("\t");
        for(int j=0;j<8;j++)
        {
            printf("[]\t");
        }
        printf("\n");
    }
    int x,k,c,o,t,r,v;
    char y,m,d,p,u,s,z;
    int secim;
        secim_menusu:
    printf("1-Piyon\n2-Kale\n3-Fil\n4-Sah\n5-Vezir\n6-At\n7-Cikis\n\n ");
    printf("Oynamak istediginiz tasi seciniz-->");
    scanf("%d",&secim);

    if(secim==7)
        return 0;

    switch(secim)
    {
        case 1:
            printf("Piyon'u Sectiniz!\n\n");
            piyon(x,y);
            printf("\n");
            goto secim_menusu;
            break;

        case 2:
            printf("Kaley'i sectiniz!\n\n");
            kale(k,m);
            printf("\n");
            goto secim_menusu;
            break;



        case 3:
            printf("Fil'i sectiniz!\n\n");
            fil(c,d);
            printf("\n");
            goto secim_menusu;
            break;



        case 4:
            printf("Sah'i sectiniz!\n\n");
            sah(o,p);
            printf("\n");
            goto secim_menusu;
            break;



        case 5:
            printf("Vezir'i sectiniz!\n\n");
            vezir(t,u);
            printf("\n");
            goto secim_menusu;
            break;



        case 6:
            printf("At'i sectiniz1\n\n");
            at_2_1(r,s);
            printf("\n");
            goto secim_menusu;
            break;

        default:
            printf("Yanlis bir secim yaptiniz!\n\aLutfen Tekrar Secim Yapiniz.\n");
            printf("\n");
            goto secim_menusu;
            break;
    }
    return 0;
}
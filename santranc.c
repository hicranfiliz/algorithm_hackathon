#include <stdio.h>
#include <stdlib.h>

int satir[8] = {1, 2, 3, 4, 5, 6, 7, 8};
char sutun[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

void piyon(int a, char b)
{
    printf("piyonun koordinatlarini giriniz:");
    scanf("%d,%c", &a, &b);
    printf("Gidebilecegi yerler-->%d,%c", a + 1, b);
}

void kale(int a, char b)
{
    printf("Kalenin koordinatlarini giriniz:");
    scanf("%d,%c", &a, &b);
    printf("Gidebilecegi yerler..\n");
    for (int i = a; i < 8; i++)
    {
        printf("%d,%c", i + 1, b);
        printf("\n");
    }
    for (int i = a; i <= 8 && i > 1; i--)
    {
        printf("%d,%c", i - 1, b);
        printf("\n");
    }
    for (int i = b; i < 'H' && i > 'A'; i--)
    {
        printf("%d,%c", a, i - 1);
        printf("\n");
    }
    for (int i = b; i < 'H'; i++)
    {
        printf("%d,%c", a, i + 1);
        printf("\n");
    }
}

void fil(int a, char b)
{
    int gecici;
    printf("Filin Koordinatlarini giriniz:");
    scanf("%d,%c", &a, &b);
    gecici = a + 1;
    printf("Gidebilecegi Yerler..\n");
    for (int i = b; i < 'H' && gecici <= 8 && gecici >= 1; i++)
    {
        printf("%d,%c", gecici++, i + 1);
        printf("\n");
    }
    gecici = a;
    printf("\n");
    for (int i = b; i > 'A'; i--)
    {
        printf("%d,%c", gecici - 1, i - 1);
        gecici--;
        printf("\n");
    }
    gecici = a;
    printf("\n");
    for (int i = b; i > 'A' && gecici < 8; i--)
    {
        printf("%d,%c", ++gecici, i - 1);
        printf("\n");
    }
    gecici = a;
    printf("\n");
    for (int i = b; i < 'H' && gecici > 1; i++)
    {
        printf("%d,%c", --gecici, i + 1);

        printf("\n");
    }
}

void sah(int a, char b)
{
    printf("Sah in Koordinatlarini giriniz:");
    scanf("%d,%c", &a, &b);
    int gecici = a;
    printf("Gidebilecegi Yerler..\n");
    for (int i = b + 1; i >= b - 1 && i >= 'A' && i <= 'H' && gecici <= 8 && gecici >= 1; i--)
    {
        if (gecici > 7 && gecici < 1)
        {
            continue;
        }
        printf("%d,%c\n", gecici, i);
    }
    gecici = a;
    printf("------\n");
    for (int i = b + 1; i >= b - 1 && i >= 'A' && i <= 'H' && gecici <= 8 && gecici >= 1; i--)
    {
        //gecici--;
        if (gecici < 1)
        {
            continue;
        }

        printf("%d,%c\n", gecici - 1, i);
    }
    gecici = a;
    printf("\n");
    for (int i = b + 1; i >= b - 1 && i >= 'A' && i <= 'H' && gecici <= 8 && gecici >= 1; i--)
    {
        if (i == b)
            continue;
        printf("%d,%c\n", gecici, i);
    }

    /*for(int i=b-1;i<=b+1 && gecici<=8 && gecici>=1 && i<='H' && i>='A';i++)
    {
        if(i<'A' || i>'H')
        {
            break;
        }
        printf("%d,%c\n",gecici+1,i);
    }
    printf("\n");
    for(int i=b-1;i<=b+1;i++)
    {
        if(i<'A' || i>'H')
        {
            continue;
        }
        printf("%d,%c\n",gecici-1,i+1);
    }
    printf("\n");
    for(int i=b-1;i<=b+1;i++)
    {
        if(i==b)
        {
            continue;
        }
        printf("%d,%c\n",gecici,i);
    }*/
}

void vezir(int a, char b)
{
    printf("Vezir'in koordinatlarini giriniz:");
    scanf("%d,%c", &a, &b);
    int gecici = a;
    printf("Gidebilecegi yerler..\n");
    for (int i = a; i < 8; i++)
    {
        printf("%d,%c", i + 1, b);
        printf("\n");
    }
    printf("----1\n");
    for (int i = a; i <= 8 && i > 1; i--)
    {
        printf("%d,%c", i - 1, b);
        printf("\n");
    }
    printf("----2\n");
    for (int i = b; i < 'H' && i > 'A'; i--)
    {
        printf("%d,%c", a, i - 1);
        printf("\n");
    }
    printf("----3\n");
    for (int i = b; i < 'H'; i++)
    {
        printf("%d,%c", a, i + 1);
        printf("\n");
    }
    printf("----4\n");
    for (int i = b; i < 'H' && gecici < 8 && gecici >= 1; i++)
    {
        printf("%d,%c", gecici + 1, i + 1);
        gecici++;
        printf("\n");
    }
    gecici = a;
    printf("---5\n");
    for (int i = b; i > 'A' && gecici < 8 && gecici > 1; i--)
    {
        printf("%d,%c", gecici - 1, i - 1);
        gecici--;
        printf("\n");
    }
    gecici = a;
    printf("---6\n");
    for (int i = b; i > 'A' && gecici < 8; i--)
    {
        printf("%d,%c", ++gecici, i - 1);
        printf("\n");
    }
    gecici = a;
    printf("--7\n");
    for (int i = b; i < 'H' && gecici > 1; i++)
    {
        printf("%d,%c", --gecici, i + 1);

        printf("\n");
    }
}

void at_2_1(int a, char b)
{
    printf("At'in koordinatlarini giriniz:");
    scanf("%d,%c", &a, &b);
    int gecici = a;
    printf("Gidebilecegi yerler..\n");

    for (int i = b - 2; i <= 'H'; i++)
    {
        if (i < 'A' || i > 'H' || gecici < 1 || gecici > 8)
            continue;
        if (i == b - 1 || i == b || i == b + 1 || b + 3)
            continue;
        printf("%d,%c\n", gecici + 1, i);
    }
    gecici = a;
    printf("---1\n");
    for (int i = b - 2; i <= 'H' && i >= 'A' && gecici <= 8 && gecici >= 1; i++)
    {
        if (i < 'A' || i > 'H' || gecici < 1 || gecici > 8)
        {
            continue;
        }
        if (i == b - 1 || i == b || i == b + 1 || i == b + 3)
            continue;
        printf("%d,%c\n", gecici - 1, i);
    }
    printf("---2\n");
    gecici = a;
    for (int i = b - 1; i <= i <= 'H' && i >= 'A' && gecici <= 8 && gecici >= 1; i++)
    {
        if (i < 'A' || i > 'H' || gecici < 1 || gecici > 8)
        {
            continue;
        }
        if (i == b || i == b + 2 || i == b + 3)
            continue;
        printf("%d,%c\n", gecici - 2, i);
    }
    gecici = a;
    printf("---3\n");
    for (int i = b - 1; i <= b + 1 && i <= 'H'; i++)
    {
        if (i < 'A' || i > 'H' || gecici < 1 || gecici > 8)
        {
            continue;
        }
        if (i == b || i == b + 2 || i == b + 3)
            continue;
        printf("%d,%c\n", gecici + 2, i);
    }
    gecici = a;
    printf("---4\n");
    for (int i = b - 2; i <= b + 2 && i <= 'H'; i++)
    {
        if (i < 'A' || i > 'H' || gecici < 1 || gecici > 8)
        {
            continue;
        }
        if (i == b - 1 || i == b || i == b + 1 || i == b + 3)
            continue;
        printf("%d,%c\n", gecici + 1, i);
    }
}

int main()
{
    int satranc[8][8];
    int i;
    int degisken = 'A';
    printf("\tA\tB\tC\tD\tE\tF\tG\tH\n");
    for (i = 8; i > 0; i--)
    {
        printf("%d", i);
        printf("\t");
        for (int j = 0; j < 8; j++)
        {
            printf("[]\t");
        }
        printf("\n");
    }
    int x, k, c, o, t, r, v;
    char y, m, d, p, u, s, z;
    printf("\n");
    //piyon(x,y);
    printf("\n");
    //kale(k,m);
    printf("\n");
    //fil(c,d);
    printf("\n");
    //sah(o,p);
    printf("\n");
    //vezir(t,u);
    printf("\n");
    at_2_1(r, s);
    printf("\n");

    return 0;
}

/*for(i=0;i<20;i++)
{
    for(j=0;j<20;j++)
    if(strcmp(dizi1[i],dizi2[j])==1)
    {
        strcat(dizi1[],dizi2[j])
    }
}*/
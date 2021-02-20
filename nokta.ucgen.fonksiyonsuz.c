#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Ax,Ay,Bx,By,Cx,Cy,Px,Py;
    float bx,by,cx,cy,x,y;
    float d;
    float WA,WB,WC;

    char sec;

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

    d=bx*cy-cx*by;
    WA= (x*(by-cy)+y*(cx-bx)+bx*cy-cx*by)/d;
    WB=(x*cy-y*cx)/d;
    WC=(y*bx-x*by)/d;

    if(WA>0 && WA<1 && WB>0 && WB<1 && WC>0 && WC<1)
        printf("Nokta ucgenin icindedir.");
    else
        printf("Nokta ucgenin disindadir.");

        return 0;
	}

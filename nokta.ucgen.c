#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


    float Ax,Ay,Bx,By,Cx,Cy,Px,Py;
    float bx,by,cx,cy,x,y;
    float k;
    float WA,WB,WC;

int k_degeri (float k,float bx,float cy,float cx,float by);
int deger1 (float WA,float by,float cy, float y, float cx, float bx, float k,float x);
int deger2 (float WB,float x, float cy, float y, float cx, float k);
int deger2 (float WB,float x, float cy, float y, float cx, float k);
int deger3 (float WC,float y,float bx , float x, float by, float k);
int ara1 (float bx,float Bx,float Ax);
int ara2 (float by,float By,float Ay);
int ara3 (float cx,float Cx,float Ax);
int ara4 (float cy,float Cy,float Ay);
int x_degeri (float x , float Px, float Ax);
int y_degeri (float y,float Py,float Ay);


int main()
{

    printf("Birinci kose koordinatlari giriniz: ");
    scanf("%f , %f", &Ax,&Ay);

    printf("Ikinci kose koordinatlari giriniz: ");
    scanf("%f , %f",&Bx,&By);

    printf("Ucuncu kose koordinatlari giriniz: ");
    scanf("%f , %f", &Cx,&Cy);

    printf("P noktasinin koordinatlarini giriniz: ");
    scanf("%f , %f", &Px,&Py);

   
    ara1(bx,Bx,Ax);
    ara2(by,By,Ay);
    ara3(cx,Cx,Ax);
    ara4(cy,Cy,Ay);
    x_degeri(x,Px,Ax);
    y_degeri(y,Py,Ay);
    k_degeri(k,bx,cy,cx,by);
    deger1(WA,by,cy,y,cx,bx,k,x);
    deger2(WB,x,cy,y,cx,k);
    deger3(WC,y,bx,x,by,k);


    if(WA>0 && WA<1 && WB>0 && WB<1 && WC>0 && WC<1)
        printf("Nokta ucgenin icindedir.");
    else
        printf("Nokta ucgenin disindadir.");


    return 0;
	}

    int ara1 (float bx,float Bx,float Ax){
        return((Bx-Ax));
    }

    int ara2 (float by,float By,float Ay){
        return((By-Ay));
    }

    int ara3 (float cx,float Cx,float Ax){
        return((Cx-Ax));
    }

    int ara4 (float cy,float Cy,float Ay){
        return((Cy-Ay));
    }

    int x_degeri (float x , float Px, float Ax){
        return((Px-Ax));
    }

    int y_degeri (float y,float Py,float Ay){
        return((Py-Ay));
    }



    int k_degeri (float k,float bx,float cy,float cx,float by){
        return((bx*cy)-(cx*by));
    }

    int deger1 (float WA,float by,float cy, float y, float cx, float bx, float k,float x){
        return(((x*(by-cy))+(y*(cx-bx))+((bx*cy))-(cx*by))/k);
    }

    int deger2 (float WB,float x, float cy, float y, float cx, float k){
        return(((x*cy)-(y*cx))/k);
    }

    int deger3 (float WC,float y,float bx , float x, float by, float k){
        return(((y*bx)-(x*by))/k);
    }

    


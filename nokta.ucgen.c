
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


    float Ax,Ay,Bx,By,Cx,Cy,Px,Py;
    float bx,by,cx,cy,x,y;
    float k;
    float WA,WB,WC;

float k_degeri (float k,float bx,float cy,float cx,float by);
float deger1 (float WA,float by,float cy, float y, float cx, float bx, float k);
float deger2 (float WB,float x, float cy, float y, float cx, float k);
float deger3 (float WC,float y,float bx , float x, float by, float k);
float ara1 (float bx,float Bx,float Ax);
float ara2 (float by,float By,float Ay);
float ara3 (float cx,float Cx,float Ax);
float ara4 (float cy,float Cy,float Ay);
float x_degeri (float x , float Px, float Ax);
float y_degeri (float y,float Py,float Ay);


int main()
{
    /*float Ax,Ay,Bx,By,Cx,Cy,Px,Py;
    float bx,by,cx,cy,x,y;
    float k;
    float WA,WB,WC;*/

    printf("Birinci kose koordinatlari giriniz: ");
    scanf("%f , %f", &Ax,&Ay);

    printf("Ikinci kose koordinatlari giriniz: ");
    scanf("%f , %f",&Bx,&By);

    printf("Ucuncu kose koordinatlari giriniz: ");
    scanf("%f , %f", &Cx,&Cy);

    printf("P noktasinin koordinatlarini giriniz: ");
    scanf("%f , %f", &Px,&Py);

    //bx=Bx-Ax;
    //by=By-Ay;
    //cx=Cx-Ax;
    //cy = Cy-Ay;
    //x = Px-Ax;
    //y = Py-Ay;


    //k=bx*cy-cx*by;
    //WA= (x*(by-cy)+y*(cx-bx)+bx*cy-cx*by)/k;
    //WB=(x*cy-y*cx)/k;
    //WC=(y*bx-x*by)/k;
    ara1(bx,Bx,Ax);
    ara2(by,By,Ay);
    ara3(cx,Cx,Ax);
    ara4(cy,Cy,Ay);
    x_degeri(x,Px,Ax);
    y_degeri(y,Py,Ay);
    k_degeri(k,bx,cy,cx,by);
    deger1(WA,by,cy,y,cx,bx,k);
    deger2(WB,x,cy,y,cx,k);
    deger3(WC,y,bx,x,by,k);


    if(WA>0 && WA<1 && WB>0 && WB<1 && WC>0 && WC<1)
        printf("Nokta ucgenin icindedir.");
    else
        printf("Nokta ucgenin disindadir.");


    return 0;
	}

    float ara1 (float bx,float Bx,float Ax){
        bx=(Bx-Ax);
        return((Bx-Ax));
    }

    float ara2 (float by,float By,float Ay){
        by=(By-Ay);
        return((By-Ay));
    }

    float ara3 (float cx,float Cx,float Ax){
        cx=(Cx-Ax);
        return((Cx-Ax));
    }

    float ara4 (float cy,float Cy,float Ay){
        cy=(Cy-Ay);
        return((Cy-Ay));
    }

    float x_degeri (float x , float Px, float Ax){
        x=(Px-Ax);
        return((Px-Ax));
    }

    float y_degeri (float y,float Py,float Ay){
        y=(Py-Ay);
        return((Py-Ay));
    }



    float k_degeri (float k,float bx,float cy,float cx,float by){
        k=((bx*cy)-(cx*by));
        return((bx*cy)-(cx*by));
    }

    float deger1 (float WA,float by,float cy, float y, float cx, float bx, float k){
        WA=((x*(by-cy))+(y*(cx-bx))+((bx*cy)-(cx*by)))/k;
        return(((x*(by-cy))+(y*(cx-bx))+((bx*cy))-((cx*by)))/k);
    }

    float deger2 (float WB,float x, float cy, float y, float cx, float k){
        WB=(((x*cy)-(y*cx))/k);
        return(((x*cy)-(y*cx))/k);
    }

    float deger3 (float WC,float y,float bx , float x, float by, float k){
        WC=(((y*bx)-(x*by))/k);
        return(((y*bx)-(x*by))/k);
    }

    


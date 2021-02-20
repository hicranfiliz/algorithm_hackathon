
#include <stdio.h>
#include <stdlib.h>

    float Ax,Ay,Bx,By,Cx,Cy,Px,Py;
    float bx,by,cx,cy,x,y;
    float k;
    float WA,WB,WC;

float k_degeri (float k);
float deger1 (float WA);
float deger2 (float WB);
float deger3 (float WC);
float ara1 (float bx);
float ara2 (float by);
float ara3 (float cx);
float ara4 (float cy);
float x_degeri (float x );
float y_degeri (float y);


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
    ara1(bx);
    ara2(by);
    ara3(cx);
    ara4(cy);
    x_degeri(x);
    y_degeri(y);
    k_degeri(k);
    deger1(WA);
    deger2(WB);
    deger3(WC);


    if(WA>0 && WA<1 && WB>0 && WB<1 && WC>0 && WC<1)
        printf("Nokta ucgenin icindedir.");
    else
        printf("Nokta ucgenin disindadir.");


    return 0;
	}


    float k_degeri (float k){

        return( k=bx*cy-cx*by);
    }

    float deger1 (float WA){

        return((x*(by-cy)+y*(cx-bx)+bx*cy-cx*by)/k);
    }

    float deger2 (float WB){
        return((x*cy-y*cx)/k);
    }

    float deger3 (float WC){
        return((y*bx-x*by)/k);
    }

    float ara1 (float bx){
        return(Bx-Ax);
    }

    float ara2 (float by){
        return(By-Ay);
    }

    float ara3 (float cx){
        return(Cx-Ax);
    }

    float ara4 (float cy){
        return(Cy-Ay);
    }

    float x_degeri (float x ){
        return(Px-Ax);
    }

    float y_degeri (float y){
        return(Py-Ay);
    }



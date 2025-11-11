#include <stdio.h>

void triangulo();

int main(void)
{
        triangulo();
        return 0;
}

void triangulo(void)
{
        int l1,l2,l3,p;

        printf("Ingrese el primer lado: ");
        scanf("%d",&l1);

        printf("Ingrese el segundo lado: ");
        scanf("%d",&l2);

        printf("Ingrese el tercer lado: ");
        scanf("%d",&l3);

        if ((l1==l2) && (l2==l3)){

        p=l1+l2+l3;
        printf("El triángulo es Equilátero y su perímetro es:%d\n", p);}

        else{

                if ((l1==l2) || (l2==l3) || (l1==l3)){

                        p=l1+l2+l3;
                        printf("El triángulo es Isósceles y su perímetro es:%d\n", p);}

                else{

                        p=l1+l2+l3;
                        printf("El triángulo es Escaleno y su perímetro es:%d\n", p);
                }
        }

}

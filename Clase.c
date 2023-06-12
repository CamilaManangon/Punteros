#include <stdio.h>

void funcionPuntero(int* p, int* p2){
    *p = 50;
    *p2 = 100;
}

void cambiar(int* p, int* p2){
    int aux;
    aux = *p2; 
    *p2 = *p;
    *p = aux;

    
}


int main(void) {
    int a = 10;
    int b = 20;
  /*para declarar un puntero: int* p = &a
  para imprimir printf(*p)
  La diferencia entre:
  char nombre[20]
  char* nombre
  el primero se queda con la dimension inicial, el segundo se puede modificar.
  los punteros nunca reciben un valor directamente


int a = 10;
int b = 20;

int * p = &a;
//si pongo *p se cambia el valor, si solo pongo p es la direccion de memoria
*p = 35; //en este caso estoy cambiando el valor de a

int* p2 = &b;


printf("El valor de a es %d\n", a);
printf("El valor de la direccion p es %d\n",p);
printf("El valor de p es %d\n",*p);
printf("El valor de b es %d\n", b);
printf("El valor de la direccion p2 es %d\n",p2);
printf("El valor de p2 es %d\n",*p2);

/*int ent, flo, ch, dou, uent;
ent = sizeof(int);
flo = sizeof(float);
ch = sizeof(char);
dou = sizeof(double);
uent = sizeof(unsigned int);

printf("El entero tiene %d bytes\n",ent);
printf("El float tiene %d bytes\n",flo);
printf("El char tiene %d bytes\n",ch);
printf("El double tiene %d bytes\n",dou);
printf("El entero unsigned tiene %d bytes\n",uent);*/

//funcionPuntero(&a, &b); //estoy asignando a al puntero p y b al puntero p2
cambiar(&a,&b);
printf("El valor de a es %d\n", a);
printf("El valor de b es %d\n", b);


return 0;
}
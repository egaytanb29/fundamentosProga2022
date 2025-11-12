//Gaytán Brieño Ernesto Armando (21-marzo-2022)
//Código C para juego Mastermind

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef int bool; //Declara un tipo especial de variable, denominada booleana que solo puede tener dos valores: cierto \
y falso
#define FALSE 0
#define TRUE 1

int MenuInicio(void);
int Intentos(void);
int ColoresCPU(void);
int ObtenerP1Opc(void);
int OpcionesColor(void);
bool CompararColores();

int main(void){

  int CCPU, MenuI, P1Op, ColOp;
  int CPUOpc[4],P1Opc[4];

  int i, JRes=0,JCont=0, PerderCont=0, IntentosCont=0, Perder=0;

  for(i=0; i<4; ++i)
    {
      P1Opc[i] = 0;
      CPUOpc[i] = 0;
    }

  IntentosCont = Intentos();

  CCPU = ColoresCPU();

  MenuI = MenuInicio();

  if(MenuI == 1)
    {
      while(JRes == 0){

        JCont++;

        if(JCont > 1)
          {
            printf("1-Rojo\n");
            printf("2-Naranja\n");
            printf("3-Amarillo\n");
            printf("4-Verde\n");
            printf("5-Azul\n");
            printf("6-Café\n");
            printf("7-Morado\n");
          }

      P1Op = ObtenerP1Opc();

      ColOp = OpcionesColor();

      JRes = CompararColores();

      if(JCont == IntentosCont && JRes != 1)
        {
          printf("--Fin del Juego  Alcanzaste el número de intentos.--");
          PerderCont++;
          Perder = 1;
          break;
        }
      }
    }
  else if(MenuI == 2)
    {
      exit(EXIT_SUCCESS);
    }

  return 0;
}

int MenuInicio(void){
  int opcion;

  do{
  printf("++++++++++++++++++++++++++++++\n");
  printf("----Bienvenido al Juego Mastermind----\n");
  printf("----El juego consiste descubrir una secuencia de colores oculta creador por el CPU----\n");
  printf("----Para descifrar los colores el jugador deberá ir probando combinaciones aleatorias de colores,----\n");
  printf("----y en cada combinación, el jugador contrario debe darle pistas mediante las espigas blancas y negras.----\n");
  printf("----Por cada clavija acertada en color y posición, colocará una espiga negra, y por cada color acertado----\n");
  printf("----pero en un lugar equivocado colocara una espiga blanca.----\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("--Oprima 1 para comenzar el juego o 2 para terminar--\n");
  scanf("%d",&opcion);
  }while((opcion!=1) && (opcion!=2));

  return opcion;
}

int Intentos(void)
{
  int intC;

  printf("¿Cuántos intentos quieres? (min=5 máx=10): ");
  scanf(" %d",&intC);

  if(intC < 5 || intC > 10)
    {
      printf("Error, ingresar número de intentos entre  1-10.\n");
    }

  return intC;
}

int ColoresCPU(void)
{
  int i, RNum;
  int CPUOpc[4];
  srand(time(0));
  for(i=0;i<4;i++)
    {
      RNum = (rand() % 7) + 1;
      CPUOpc[i] = RNum;
    }

  printf("El CPU ya generó cuatro colores.\n");

  return RNum;
}

int ObtenerP1Opc(void)
{
  int i;
  int P1Opc[4];

  for(i=0;i<4;i++)
    {
      do{
        printf("Del 1 al 7 ingresa 4 números para determinar color %d: ", (i+1));
        scanf("%d", &P1Opc[i]);

        if((P1Opc[i] < 1) || (P1Opc[i] > 7))
          {
            printf("Error. Ingresar números entre el 1 al 7.\n");
          }
      }while((P1Opc[i] < 1) || (P1Opc[i] > 7));
    }
  return P1Opc[i];
}

int OpcionesColor(void)
{
    int i;
  int P1Opc[4];

  printf("Usted eligió: \n");

  for(i=0;i<4;i++)
    {
      switch(P1Opc[i])
        {
        case 1: printf("Rojo\n");
          break;
        case 2: printf("Naranja\n");
          break;
        case 3: printf("Amarillo\n");
          break;
        case 4: printf("Verde\n");
          break;
        case 5: printf("Azul\n");
          break;
        case 6: printf("Café\n");
          break;
        case 7: printf("Morado\n");
          break;
        }
    }
  return P1Opc[i];
}

bool CompararColores()
{
  int i, j, espigabl = 0, espigang= 0, bucle = -1, GanarCont=0;
  int CPUOpc[4],P1Opc[4];

  for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
        {
          if(P1Opc[i] == CPUOpc[j])
            {
              if(i != j)
                {
                  if(i != bucle)
                    {
                      bucle = i;
                      espigabl++;
                    }
                  else
                    {
                      continue;
                    }
                }
              if(i == j)
                {
                  if(i == bucle)
                    {
                      espigang++;
                      j = 4;
                      espigabl -= 1;
                    }
                  else
                    {
                      espigang++;
                      j = 4;
                    }
                }
            }
        }
    }

  printf("Tienes %d Espigas negras y %d Espigas blancas\n", espigang, espigabl);
  
  if(espigang == 4)
    {
      GanarCont++;
      printf("--¡Ganaste!--");
      return (1);
    }
  else
    {
      return (0);
    }
}

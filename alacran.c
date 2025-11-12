#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void historia(void);
void alacran(void);

int main(void)
{
  historia();
  alacran();
  return 0;
}

void historia(void)
{
  printf("\n");
  printf("Cuenta una vieja historia que la celda 5 estaba maldita, ya que todos los presos que dormían en ella,\n");
  printf("al día siguiente aparecían muertos, sin que hubiera explicación alguna de la causa.\n");
  printf("Varias veces se reviso la celda sin obtener pista alguna sobre el misterioso asesino de los presos.\n");
  printf("Un día, un valiente duranguense, se atrevió a pasar la noche en la celda para investigar los asesinatos, así que armado de su valor y de una vela se dispuso a develar el misterio.\n");
  printf("Cual sería su sorpresa, cuando en la madrugada apareció de entre las piedras de la pared un alacrán de 18cm de largo.\n");
  printf("Afortunadamente nuestro valiente solía usar sombrero, con lo que pudo atrapar al misterioso asesino.\n");
  printf("Los alacranes, aunque peligrosos, no son animales agresivos, y por lo general únicamente atacan cuando se les molesta.\n");
  printf("Sabemos que a los alacranes por lo general les gusta pasar la noche en los mismos lugares, por lo que podemos asumir que el asesino de la celda 5,\n");
  printf("pernoctaba siempre en alguno de sus N lugares preferidos. Como no sabes si el cuarto que te toco corresponde a la celda 5,\n");
  printf("seguramente estarás un poco nervioso, pero no te preocupes, ya que resolviendo este problema quedarás salvado.\n");
  printf("\n");
}

void alacran(void)
{
  char tablero[100][100];
  int cama[2][2];

  int x,y,xp,yp,al,i,j,c=0;

  printf("Ingrese el largo del cuarto (mayor a 0): ");
  scanf("%d", &x);
  printf("Ingrese el ancho del cuarto (menor o igual a 100): ");
  scanf("%d", &y);

  for(i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
        {
          tablero[i][j] = '.';
        }
    }

  for(i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
        {
          printf("%c", tablero[i][j]);
        }
      printf("\n");
    }

  do{
    printf("Ingrese la cantidad de alacranes quiere en el cuarto: ");
    scanf("%d", &al);
  }while(al > (x * y) || al > 5000);

  for(i=0;i<al;i++)
    {
      do{
        printf("Ingrese coordenadas: ");
        scanf("%d", &yp);
        yp--;
        scanf("%d", &xp);
        xp--;
        printf("%d %d\n",yp,xp);
        tablero[xp][yp] = 'X';
      }while(xp > x || yp > y);
    }

  for(i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
        {
          printf("%c", tablero[i][j]);
        }
      printf("\n");
    }

  /*for(j=0;j<y;j++)
    {
      for(i=0;i<x;x++)
        {
          if(tablero[i][j] != 'X' && tablero[i+1][j] != 'X' && tablero[i][j+1] != 'X' && tablero[i+1][j+1] != 'X')
            {
            {
          c++;
            }
        }
    }

  printf("Existen %d posibles posiciones", c);*/

  return;
}

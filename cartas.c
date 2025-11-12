#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct carta{
  char color[11];
  int valor;
  char figura[11];
};

int aleatorio(void);
void generar(struct carta baraja[52]);
void imprimir(struct carta baraja[52]);
void revolverc(struct carta baraja[52]);
void cartas(struct carta baraja[52]);

int main(void)
{
  int i,opcion;

  struct carta baraja[52];
  srand(time(0));

  do{
    printf("1. Jugar\n");
    printf("2. Jugar de Nuevo\n");
    printf("3. Fin\n");
    scanf("%d",&opcion);

    if(opcion==1)
      {
        generar(baraja);
        imprimir(baraja);
        revolverc(baraja);
        cartas(baraja);
      }
    else if(opcion==2)
      {
        revolverc(baraja);
        cartas(baraja);
      }
    else if(opcion==3)
      {
        exit(EXIT_SUCCESS);
      }
  }while(opcion!=3);

  return 0;
}

int aleatorio(void)
{
  int n;

  n = rand()%51+0;

  return n;
}

void generar(struct carta baraja[52])
{
  int i,j,k=0;

  for(j=0;j<13;j++)
    {
      strcpy(baraja[k].figura,"♦");
      baraja[k].valor = j+1;
      k++;
    }
  for(j=0;j<13;j++)
    {
      strcpy(baraja[k].figura,"♠");
      baraja[k].valor = j+1;
      k++;
    }
  for(j=0;j<13;j++)
    {
      strcpy(baraja[k].figura,"♥");
      baraja[k].valor = j+1;
      k++;
    }
  for(j=0;j<13;j++)
    {
      strcpy(baraja[k].figura,"♣");
      baraja[k].valor = j+1;
      k++;
    }

  k=0;
  for(j=0;j<26;j++)
    {
      strcpy(baraja[k].color,"Rojo");
      k++;
    }
  for(j=0;j<26;j++)
    {
      strcpy(baraja[k].color,"Negro");
      k++;
    }
}

void imprimir(struct carta baraja[52])
{
  int i;

  for(i=0;i<52;i++)
    {
      printf("%s\n", baraja[i].figura);
      printf("%s\n", baraja[i].color);
      printf("%d\n", baraja[i].valor);
    }
}

void revolverc(struct carta baraja[52])
{
  int i,j,a,b,tempv;
  char tempc[11],tempf[11];

  for(i=0;i<10;i++)
    {
      a = aleatorio();
      b = aleatorio();

      strcpy(tempc, baraja[a].color);
      strcpy(baraja[a].color, baraja[b].color);
      strcpy(baraja[b].color, tempc);

      strcpy(tempf, baraja[a].figura);
      strcpy(baraja[a].figura, baraja[b].figura);
      strcpy(baraja[b].figura, tempf);

      tempv = baraja[a].valor;
      baraja[a].valor = baraja[b].valor;
      baraja[b].valor = tempv;
    }

  printf("\nCartas Revueltas\n");
}

void cartas(struct carta baraja[52])
{
  int opc,i,cartau,cartacpu;

  for(i=0;i<10;i++)
    {
      printf("--------------\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("|            |\n");
      printf("--------------\n");
    }

  printf("Elija una carta de la primera (1) o la última (10): \n");
  scanf("%d",&opc);

  if(opc==1)
    {
      printf("--------------\n");
      printf("|%d          |\n",baraja[i].valor);
      printf("|            |\n");
      printf("|     %s     |\n",baraja[i].figura);
      printf("|            |\n");
      printf("|     %s   |\n",baraja[i].color);
      printf("|            |\n");
      printf("|            |\n");
      printf("|          %d|\n",baraja[i].valor);
      printf("--------------\n");
    }
  else if(opc==10)
    {
      printf("--------------\n");
      printf("|%d          |\n",baraja[i].valor);
      printf("|            |\n");
      printf("|     %s     |\n",baraja[i].figura);
      printf("|            |\n");
      printf("|     %s   |\n",baraja[i].color);
      printf("|            |\n");
      printf("|            |\n");
      printf("|          %d|\n",baraja[i].valor);
      printf("--------------\n");
    }

  if((opc!=1) || (opc!=10))
    {
      printf("\nEl CPU tiene: \n");
      printf("--------------\n");
      printf("|%d          |\n",baraja[i+1].valor);
      printf("|            |\n");
      printf("|     %s     |\n",baraja[i+1].figura);
      printf("|            |\n");
      printf("|     %s   |\n",baraja[i+1].color);
      printf("|            |\n");
      printf("|            |\n");
      printf("|          %d|\n",baraja[i+1].valor);
      printf("--------------\n");
    }

  if(baraja[i].valor > baraja[i+1].valor)
    {
      printf("La carta %s %s %d es mayor que %s %s %d\n",baraja[i].figura,baraja[i].color,baraja[i].valor,baraja[i+1].figura,baraja[i+1].color,baraja[i+1].valor);
      printf("Gana jugador.\n");
    }
  else if(baraja[i+1].valor > baraja[i].valor)
    {
      printf("La carta %s %s %d es mayor que %s %s %d\n",baraja[i+1].figura,baraja[i+1].color,baraja[i+1].valor,baraja[i].figura,baraja[i].color,baraja[i].valor);
      printf("Gana CPU.\n");
    }
}

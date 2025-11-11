// Simulación de juego 'Cubilete', cada jugador tiene 3 intentos para tirar de manera intercalada.
// Juego hecho por Ernesto Gaytán e Isaac Olivo.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dados(void);

int main(void){

  int dado1P1= 0, dado2P1= 0, dado3P1= 0, dado4P1= 0, dado5P1= 0, intento= 3;
  int dado1CPU= 0, dado2CPU= 0, dado3CPU= 0, dado4CPU= 0, dado5CPU= 0;
  int sumaP1,sumaCPU,QuintillaP1,QuintillaCPU,PokerP1,PokerCPU,FullP1,FullCPU,TerciaP1,TerciaCPU,DParP1,DParCPU,ParP1,P\
arCPU;
  char opcion;
  srand(time(0));

  // Instrucciones y valores de cada dado.

  printf("------------- Bienvenido al juego de 'Cubilete' -------------\n");
  printf("------------- Los dados van del número 9 al 14. -------------\n");
  printf("------------- El valor de cada dado es 9, 10, 11 = 'Jack', 12 = 'Reina', 13 = 'Rey' 14 = 'As'  -------------\\
n\n");

  // Se le permite volver a lanzar su dado al usuario.

do{
  dado1P1= dados();
  printf("En el dado 1 obtuvo: %d\n",dado1P1);
  printf("Escriba 'y' para volver a lanzar o 'n' para lanzar el siguiente dado.\n");
  scanf(" %c",&opcion);
  } while ( opcion == 'y');

  do{
    dado2P1= dados();
    printf("En el dado 2 obtuvo: %d\n",dado2P1);
    printf("Escriba 'y' para volver a lanzar o 'n' para lanzar el siguiente dado.\n");
    scanf(" %c",&opcion);
  } while ( opcion == 'y');

  do{
    dado3P1= dados();
    printf("En el dado 3 obtuvo: %d\n",dado3P1);
    printf("Escriba 'y' para volver a lanzar o 'n' para lanzar el siguiente dado.\n");
    scanf(" %c",&opcion);
  } while ( opcion == 'y');

  do{
    dado4P1= dados();
    printf("En el dado 4 obtuvo: %d\n",dado4P1);
    printf("Escriba 'y' para volver a lanzar o 'n' para lanzar el siguiente dado.\n");
    scanf(" %c",&opcion);
  } while ( opcion == 'y');

  do{
    dado5P1= dados();
    printf("En el dado 5 obtuvo: %d\n",dado5P1);
    printf("Escriba 'y' para volver a lanzar o 'n' para lanzar el siguiente dado,\n");
    scanf(" %c",&opcion);
  } while ( opcion == 'y');

  printf("Los dados que obtuvo fueron:\nDado 1: %d\nDado 2: %d\nDado 3: %d\nDado 4: %d\nDado 5: %d\n", dado1P1, dado2P1, dado3P1, dado4P1, dado5P1);
  sumaP1=dado1P1+dado2P1+dado3P1+dado4P1+dado5P1;
  // Aquí puedes poner los resultados, dependiendo de los números que se obtuvieron, da el nombre de la tirada del usuario.
  // Por ejemplo: si obtuvo un full house, poker,  quinta, escalera, etc.

if(dado1P1==dado2P1==dado3P1==dado4P1==dado5P1)
    {
    printf("El jugador tiene Quintilla.\n");
    QuintillaP1;
    }
  else if((dado1P1==dado2P1==dado3P1==dado4P1) || (dado1P1==dado3P1==dado4P1==dado5P1) || (dado1P1==dado2P1==dado4P1==dado5P1) || (dado1P1==dado2P1==dado3P1==dado5P1) ||
          (dado2P1==dado3P1==dado4P1==dado5P1))
    {
    printf("El jugador tiene Poker.\n");
    PokerP1;
    }
  else if(((dado3P1==dado4P1==dado5P1)&&(dado1P1==dado2P1)) || ((dado2P1==dado4P1==dado5P1)&&(dado1P1==dado3P1)) || ((dado2P1==dado3P1==dado5P1)&&(dado1P1==dado4P1)) ||
          ((dado2P1==dado3P1==dado4P1)&&(dado1P1==dado5P1)) || ((dado1P1==dado4P1==dado5P1)&&(dado2P1==dado3P1)) || ((dado1P1==dado3P1==dado5P1)&&(dado2P1==dado4P1)) ||
          ((dado2P1==dado3P1==dado4P1)&&(dado2P1==dado5P1)) || ((dado1P1==dado2P1==dado5P1)&&(dado3P1==dado4P1)) || ((dado1P1==dado2P1==dado4P1)&&(dado3P1==dado5P1)) ||
          ((dado1P1==dado2P1==dado3P1)&&(dado4P1==dado5P1)))
    {
    printf("El jugador tiene Full.\n");
    FullP1;
    }
  else if((dado3P1==dado4P1==dado5P1) || (dado2P1==dado4P1==dado5P1) || (dado2P1==dado3P1==dado5P1) || (dado2P1==dado3P1==dado4P1) || (dado1P1==dado4P1==dado5P1) ||
          (dado1P1==dado3P1==dado5P1) || (dado2P1==dado3P1==dado4P1) || (dado1P1==dado2P1==dado5P1) || (dado1P1==dado2P1==dado4P1) || (dado1P1==dado2P1==dado3P1))
    {
    printf("El jugador tiene Tercia.\n");
    TerciaP1;
    }
else if (((dado1P1==dado2P1)&&(dado3P1==dado4P1)) || ((dado1P1==dado5P1)&&(dado2P1==dado3P1)) || ((dado1P1==dado4P1)&&(dado2P1==dado5P1)) || ((dado1P1==dado3P1)&&(dado4P1==dado5P1)) ||
           ((dado3P1==dado5P1)&&(dado2P1==dado4P1)))
    {
    printf("El jugador tiene Dos Pares.\n");
    DParP1;
    }
  else if ((dado1P1==dado2P1) || (dado3P1==dado4P1) || (dado1P1==dado5P1) || (dado1P1==dado4P1) || (dado1P1==dado3P1) || (dado2P1==dado3P1) || (dado2P1==dado4P1) || (dado2P1==dado5P1) ||
           (dado3P1==dado5P1) || (dado4P1==dado5P1))
    {
    printf("El jugador tiene Par.\n");
    ParP1;
    }
  else{
    printf("El jugador no tiene tirada.\n");
  }

  dado1CPU= dados();
  dado2CPU= dados();
  dado3CPU= dados();
  dado4CPU= dados();
  dado5CPU= dados();
  printf("Los dados que obtuvo el CPU fueron: %d, %d, %d, %d, %d.\n",dado1CPU, dado2CPU, dado3CPU, dado4CPU, dado5CPU);
  sumaCPU=dado1CPU+dado2CPU+dado3CPU+dado4CPU+dado5CPU;

  // Aqui también hay que imprimir la tirada que obtuvo, como lo hicimos arriba.
   if(dado1CPU==dado2CPU==dado3CPU==dado4CPU==dado5CPU)
    {
    printf("El CPU tiene Quintilla.\n");
    QuintillaCPU;
    }
  else if((dado1CPU==dado2CPU==dado3CPU==dado4CPU) || (dado1CPU==dado3CPU==dado4CPU==dado5CPU) || (dado1CPU==dado2CPU==dado4CPU==dado5CPU) || (dado1CPU==dado2CPU==dado3CPU==dado5CPU) ||
          (dado2CPU==dado3CPU==dado4CPU==dado5CPU))
    {
    printf("El CPU tiene Poker.\n");
    PokerCPU;
    }
  else if(((dado3CPU==dado4CPU==dado5CPU)&&(dado1CPU==dado2CPU)) || ((dado2CPU==dado4CPU==dado5CPU)&&(dado1CPU==dado3CPU)) || ((dado2CPU==dado3CPU==dado5CPU)&&(dado1CPU==dado4CPU)) ||
          ((dado2CPU==dado3CPU==dado4CPU)&&(dado1CPU==dado5CPU)) || ((dado1CPU==dado4CPU==dado5CPU)&&(dado2CPU==dado3CPU)) || ((dado1CPU==dado3CPU==dado5CPU)&&(dado2CPU==dado4CPU)) ||
          ((dado2CPU==dado3CPU==dado4CPU)&&(dado2CPU==dado5CPU)) || ((dado1CPU==dado2CPU==dado5CPU)&&(dado3CPU==dado4CPU)) || ((dado1CPU==dado2CPU==dado4CPU)&&(dado3CPU==dado5CPU)) ||
          ((dado1CPU==dado2CPU==dado3CPU)&&(dado4CPU==dado5CPU)))
    {
    printf("El CPU tiene Full.\n");
    FullCPU;
    }
  else if((dado3CPU==dado4CPU==dado5CPU) || (dado2CPU==dado4CPU==dado5CPU) || (dado2CPU==dado3CPU==dado5CPU) || (dado2CPU==dado3CPU==dado4CPU) || (dado1CPU==dado4CPU==dado5CPU) ||
          (dado1CPU==dado3CPU==dado5CPU) || (dado2CPU==dado3CPU==dado4CPU) || (dado1CPU==dado2CPU==dado5CPU) || (dado1CPU==dado2CPU==dado4CPU) || (dado1CPU==dado2CPU==dado3CPU))
    {
    printf("El CPU tiene Tercia.\n");
    TerciaCPU;
    }
  else if (((dado1CPU==dado2CPU)&&(dado3CPU==dado4CPU)) || ((dado1CPU==dado5CPU)&&(dado2CPU==dado3CPU)) || ((dado1CPU==dado4CPU)&&(dado2CPU==dado5CPU)) ||
           ((dado1CPU==dado3CPU)&&(dado4CPU==dado5CPU)) || ((dado3CPU==dado5CPU)&&(dado2CPU==dado4CPU)))
    {
    printf("El CPU tiene Dos Pares.\n");
    DParCPU;
    }
  else if ((dado1CPU==dado2CPU) || (dado3CPU==dado4CPU) || (dado1CPU==dado5CPU) || (dado1CPU==dado4CPU) || (dado1CPU==dado3CPU) || (dado2CPU==dado3CPU) ||
           (dado2CPU==dado4CPU) || (dado2CPU==dado5CPU) || (dado3CPU==dado5CPU) || (dado4CPU==dado5CPU))
    {
    printf("El CPU tiene Un Par.\n");
    ParCPU;
    }
  else{
    printf("El CPU no tiene tirada.\n");
  }

  // Dependiendo de la jugada más alta, imprimir el ganador:

  if(QuintillaP1==QuintillaCPU){
    if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
    }
  else if(PokerP1==PokerCPU){
    if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
    }
  else if(FullP1==FullCPU){
    if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
    }
  else if(TerciaP1==TerciaCPU){
    if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
    }
  else if(DParP1==DParCPU){
    if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
    }
  else if(ParP1==ParCPU){
    if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
 }
  else{
      if(sumaP1>sumaCPU){
      printf("El ganador es: P1\n");}
    else{
      printf("El ganador es: CPU\n");}
    }
  return 0;

}

int dados(void){

  int n = 0, mayor = 14, menor= 9;

  n = (rand() % (mayor - menor + 1)) + menor;

  return n;

}

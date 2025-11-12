#include <stdio.h>

void chatbot(void);

int main (void)
{

        chatbot();

        return 0;

}

void chatbot(void)
{

        printf("Hola!\n");
        scanf(" "); //espera respuesta del usuario: Hola
        getchar();
        getchar();
        getchar();
        printf("¿Cómo estás?\n");
        scanf(" ");
        getchar(); //espera respuesta del usuario Bien, y tú?
        getchar();
        getchar();
        printf("Bien, también.\n");

}

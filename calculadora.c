#include <stdio.h>

int main() {

    float num_1;

    float num_2;

    int escolha;

    float soma;

    float subtracao;

    float multiplicacao;

    float divisao;

    float resultado;

    int ligado = 1;

    while ( ligado == 1)

    {

    printf ("\n qual operacao deseja fazer?\n");

    printf ("adicao = 1\n subtracao = 2 \n multiplicacao = 3\n divisao = 4\n 5 = sair\n");

    scanf ("%d", &escolha);

    if (escolha == 1)


    {

         printf("digite um numero: \n");

            scanf ("%f", &num_1 );

            printf ("agora, digite outro numero: \n");

         scanf ("%f", &num_2);

         float resultado = num_1+num_2;

         printf ("o resultado e:  %f", resultado );

    }

    if (escolha == 2)

    {
     printf("digite um numero: \n");

            scanf ("%f", &num_1 );

            printf ("agora, digite outro numero: \n");

         scanf ("%f", &num_2);

         float resultado = num_1-num_2;

         printf ("o resultado e:  %f", resultado);
    }

    if (escolha == 3)

    {

     printf("digite um numero: \n");

            scanf ("%f", &num_1 );

            printf ("agora, digite outro numero: \n");

         scanf ("%f", &num_2);

         float resultado = num_1*num_2;

         printf ("o resultado e:  %f", resultado);
    }

    if (escolha == 4)

    {
     printf("digite um numero: \n");

            scanf ("%f", &num_1 );

            printf ("agora, digite outro numero: \n");

         scanf ("%f", &num_2);

         float resultado = num_1/num_2;

         printf ("o resultado e:  %f", resultado);
    }
}

    if (escolha == 5)
    {
        ligado = 0;
    };

}
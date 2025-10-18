/*
Projeto: SISTEMA DE AGENDAMENTO E ORÇAMENTO DE EVENTOS
Autor: Arthur Gabriel e Lorrany Gabrielly
Data de criação: 18/10/2025
Descrição: Estrutura inicial do projeto integrador.
*/


#include <stdio.h>

int main(){
    int numero_convidados;
    int confirmar;
    int espaco;
    char data[50];
    char solenidade[50];
    float valor;

    printf ("================================================\n");
    printf ( "BEM VINDO AO SISTEMA DE AGENDAMENTO DE EVENTO\n");
    printf ("================================================\n");

    printf ("======= SOLICITAR AGENDAMENTO =======\n"); // PEGANDO AS INFORMAÇÕES DO USARIO 
    printf ("Digite o tipo de solenidade:");
    scanf ("%s", solenidade);

    printf ("Digite a data do evento (EX:DD/MM/AAAA):");
    scanf ("%s", data);

    printf ("Digite o numero de convidados:");
    scanf ("%d", &numero_convidados);
    
    printf ("Escolha o espaco para o evento:\n");
    printf ("1-BELLE VUE (R$50,00 por convidado)\n");
    printf ("2-UNIQUE PALACE (R$45,00 por convidado)\n");
    printf ("3-PORT VITTORIA (R$40,00 por convidado)\n");
    printf ("Digite o numero do espaco desejado:\n");
    scanf ("%d", &espaco);

    //VALOR CALCULADO COM BASE NA QUANTIDADE DE CONVIDADOS
    if (espaco == 1) 
    {
        valor = numero_convidados * 50; 
    } else if (espaco == 2)
    {
        valor = numero_convidados * 45;
    } else if (espaco == 3)
    {
        valor = numero_convidados * 40;
    } else {
        printf ("Espaco inexistente!");
    }

    //RESULTADO DO ORÇAMENTO 
    printf ("======= ORCAMENTO =======\n");
    printf ("Solenidade: %s \n", solenidade);
    printf ("Numero de convidados: %d\n", numero_convidados);
    printf ("Valor total: %2.f\n", valor);
    printf ("Deseja confirmar o agendamento?\n");
    printf ("1 - SIM | 2 - NAO\n"); // PERGUNTA SE QUER CONFIRMAR 
    scanf ("%d", &confirmar);

    // SE CONFIRMAR MOSTRA TODAS AS INFORMAÇÕES DA RESERVA 
    if (confirmar == 1)
    {
        printf ("==============================================\n");
        printf ("A sua reserva foi confirmada!\n");
        printf ("==============================================\n");
        printf ("Confirmando informacoes de agendamento:\n");
        printf ("Solenidade: %s\n", solenidade);
        printf ("Data do evento: %s\n", data);
        printf ("Quantidade de convidados: %d \n", numero_convidados);
        printf ("Local do evento: %d", espaco);
        
    } else {
        printf ("Reserva cancelada."); // SE CANCELAR MOSTRA A MESANGEM INFORMADO QUE O AGENDAMENTO FOI CANCELADO. 
    }
    

    return 0;
}
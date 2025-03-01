#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ComponentePalavraLista{
    char palavra[50];
    size_t contador;
}Palavra;
//O componente da lista contém a palavra e o seu número de aparições no arquivo.
typedef struct celula *apontador;
typedef struct celula{
    Palavra palavra_lista;
    apontador prox;
}celula;
typedef struct ListaPalavra{
    apontador Primeiro,Ultimo;
}Lista;

//Lista Encadeada contendo todas as palavras presentes no arquivo.
void Inicializa_Lista(Lista *var);
Palavra* Inicializa_Palavra(Palavra *palavra,char *string);
void Lista_Vazia(Lista *var);
void Inserir_Componente(Lista *var,char *string);
void Retirar_Componente(Lista *var,Palavra *palavra);
void Imprimir_Conteudo(Lista *var);
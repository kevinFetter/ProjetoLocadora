#include <stdio.h>

void main() {

  int opcao;

  struct Filme {
    char titulo[60];
    int codigo;
    char statusDeLocacao[20];
    float multaAplicada;
    char dataLocacao[8];
  };

  struct Filme filmes[1000];

  do {
    printf("Menu de opcoes.\n");
    printf("1 - Cadastrar um novo filme.\n");
    printf("2 - Editar um filme existente.\n");
    printf("3 - Procurar por um filme por meio de titulo ou codigo.\n");
    printf("4 - Gerar relatorio.\n");
    printf("5 - Consultar informacoes do filme.\n");
    printf("6 - Gerar relatorio em formato PDF.\n");
    printf("0 - Sair\n");

    scanf("%d", &opcao);
    printf("A opção escolhida foi: %d\n", opcao);
  } while (opcao != 0);
  

}
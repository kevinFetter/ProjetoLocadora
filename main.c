#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void main() {

  int opcao;

  // struct file {
  //   int a, b;
  // };

  //int fd;
  
  // struct file t;

  //printf("fd = %d\n", fd);

  //if (fd == -1) {
  //  printf("Error\n");
 // }

//  printf("opened the fd = %d\n", fd);

//  int close(int fd);

  //if(close(fd) < 0) {
//    perror("c1");
 // }

   //printf("closed the fd\n");

//  size_t read (int fd, void* buf, size_t cnt);

  // int  sz;

  // char *c = (char *) calloc(100,sizeof(char));

  // sz = read(fd, c, 10);
  
  // printf("called read(%d, c, 10).returned that"
  //       " %d bytes were read. \n",fd, sz);
  // c[sz] = '\0';

  // printf("Those bytes are as follow: %s\n", c);

 // int sz; 
 // char *c = (char *) calloc(100, sizeof(char)); 
  
 // fd = open("testfile.txt", O_RDONLY); 
 // if (fd < 0) { perror("r1"); exit(1); } 
  
 // sz = read(fd, c, 10); 
 // printf("called read(% d, c, 10).  returned that"
  //      " %d bytes  were read.\n", fd, sz); 
 // c[sz] = '\0'; 
 // printf("Those bytes are as follows: %s\n", c); 

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
    
    if("%d",opcao == 1) {
        printf("Qual o nome do filme que deseja cadastrar:");
        scanf("%d", &opcao);
    }else{
        if("%d",opcao == 2){
            
        }
    }
 
  } while (opcao != 0);
  

}

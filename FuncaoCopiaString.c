#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char conteudo1[50];
    char conteudo2[50];
    
    printf("Digite alguma palavra:\n");
    scanf("%s",conteudo1);
    
    printf("\nDigite outra palavra:\n");
    scanf("%s",conteudo2);
    
    
    printf("\nAntes: \nconteudo1: %s\nconteudo2: %s\n",conteudo1,conteudo2);
    strcpy (conteudo2,conteudo1);
    printf("\nDepois: \nconteudo1: %s\nconteudo2: %s\n",conteudo1,conteudo2);
    
    return 0;
}

#include <stdio.h>

int main(){
   
    char frase[1000] = {" "}, *frasePtr;
    int contarPalavras = 1, contarChar = 0;

    printf("Digite uma frase qualquer e 0 para parar:\n");

    for (int i = 0; frase[i -1] != '0' ; i++){
        scanf("%c", &frase[i]);
        frasePtr = &frase[i];

        if (*frasePtr == ' ' && frase[i-1] != ' '){
            contarPalavras++;
        }

        contarChar++;
    }
    
    if (frase[contarChar-2] == ' ' && frase[0] == ' '){
        printf("A frase possui %d palavras.\n", contarPalavras - 2);

    }else if (frase[contarChar-2] == ' ' || frase[0] == ' '){
        printf("A frase possui %d palavras.\n", contarPalavras - 1);

    }else{
        printf("A frase possui %d palavras.\n", contarPalavras);

    }

    return 0;
}
#include <stdio.h>
#include "bmp_header.h"

int main(){
    FILE *img;
    bmp_header img_header;
    short int assinatura;
    int i;

    img = fopen("lena512.bmp", "rb");
    fread(&img_header.assinatura, 2, 1, img);
    fread(&img_header.tamanho_arquivo, 6, 1, img);
    printf("assinatura: %0x\n", img_header.assinatura);
    printf("tamanho: %d\n", img_header.tamanho_arquivo);
}
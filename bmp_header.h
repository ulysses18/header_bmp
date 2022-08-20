typedef struct
{
    short int assinatura;
    int tamanho_arquivo;
    short int vazio1;
    short int vazio2;
    int offset;
    int BITMAPINFOHEADER;
    int largura;
    int altura;
    short int layers;
    short int bit_depth;
    int tipo_compressao;
    int tamanho_dados;
    int resolucao_x;
    int resolucao_y;
    int numero_cores;
    int numero_i_cores;
} bmp_header;
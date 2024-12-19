int main()
{
    int origem, destino;
    double valor, resultado;

    printf("Conversor de Unidades\n");
    printf("1 - Metros\n");
    printf("2 - centímetros\n");
    printf("3 - Milímetros\n");

    printf("Escolha uma unidade de origem:");
    scanf("%d", &origem);

    printf("Escolha uma unidade de destino:");
    scanf("%d", &destino);

    printf("Digite o valor a ser convertido:");
    scanf("%lf", &valor);

    switch (origem)
    {
    case 1: //m -> cm
        resultado = valor * 100;
        break;

    case 2: //m -> mm
        resultado = valor * 1000;
        break;

    case 3: //cm -> m
        resultado = valor / 100;
        break;

    case 4: //cm -> mm
        resultado = valor * 10;
        break;

    case 5: //mm -> m
        resultado = valor / 1000;
        break;

    case 6: //mm -> cm
        resultado = valor / 10;
        break;

    default:
        printf("Conversão Inválida!\n");
        break;
    }

    printf("Resultado: %2.lf\n", resultado);
    return 0;
}

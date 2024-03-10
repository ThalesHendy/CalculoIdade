#include <stdio.h>
int main(void)
{
  int idade;
  printf("\n Entre com a Idade: ");
  scanf("%d", &idade);
  if (idade >= 0 &&idade < 13)
    printf("\n É uma Criança");
      else if (idade >=13 &&idade < 15)
        printf("\n É um Pré adolescente");
          else if (idade >= 16 &&idade < 18)
            printf("\n É um Adolescente");
              else if (idade >= 18 &&idade < 24)
               printf("\n É um Jovem Adulto");
                  else if (idade >= 24 &&idade < 60)
                    printf("\n É um Adulto Maduro");
                      else
                        printf("\ É terceiro Idade");
printf("\n Este comando está fora da cadeia de ifs");
return 0;
}
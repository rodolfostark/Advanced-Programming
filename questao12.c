/*
Suponha que as seguintes declarações tenham sido realizadas:

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value; (OK)
scanf("%f", &aloha); (OK)
aloha = value"; (NOT OK)
printf("%f", aloha); (OK)
coisas[4][4] = aloha[3]; (OK)
coisas[5] = aloha; (NOT OK)
pf = value; (NOT OK)
pf = aloha; (OK)
*/

#include <stdio.h>

int main(void)
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value;
    scanf("%f", &aloha);
    aloha = value";
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    coisas[5] = aloha;
    pf = value;
    pf = aloha;

}

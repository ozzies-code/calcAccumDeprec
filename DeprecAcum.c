#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   double Coste, Deprec,
          Valor_Recuperacion,
          Valor_Actual, 
          Acumulado,
          Valor_Anual;

    int Anio, Vida_Util;

    puts("Introduzca coste, valor recuperacion y vida util");
    scanf("%1f %1f             %d", &Coste, &Valor_Recuperacion, &Vida_Util);

    puts("Introduzca Anio Actual");
    scanf("%d", &Anio);
    Valor_Actual = Coste;
    Deprec = (Coste-Valor_Recuperacion)/Vida_Util;
    Acumulado = 0;

    puts("Anio Depreciacion Deprec. Acumulada");
    while(Anio < Vida_Util)
    {
     Acumulado = Acumulado + Deprec;
     Valor_Actual = Valor_Actual - Deprec;
     printf("Anio: %d, Depreciacion:%.21f, %.21f Acumulada", Anio, Deprec, Acumulado);
     Anio = Anio + 1;   
    }

    system("PAUSE");	
    return 0;
   
}

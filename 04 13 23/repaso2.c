#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int intentos = 2;
    double imc = 0, m, t;
    printf("Se va a calcular el indice de masa corporal imc\n");
    printf("Por favor ingrese la masa expresada en kg: ");
    scanf("%lf", &m);
    printf("Por favor ingrese la talla expresada en metros: ");
    scanf("%lf", &t);
    while (intentos >= 1 && (t <= 0 || m <= 0))
    {
        printf("\nIntentos restantes: %i\n", intentos);
        if (t <= 0 && m <= 0)
        {
            printf("Ingresaste mal ambos datos, estos deben ser mayor a 0\n");
            printf("Por favor ingrese la masa expresada en kg: ");
            scanf("%lf", &m);
            printf("Por favor ingrese la talla expresada en metros: ");
            scanf("%lf", &t);
        }
        else if (m <= 0)
        {
            printf("Ingresaste mal el dato de masa, este debe ser mayor a 0\n");
            printf("Por favor ingrese la masa expresada en kg: ");
            scanf("%lf", &m);
        }
        else
        {
            printf("Ingresaste mal el dato de talla, este debe ser mayor a 0\n");
            printf("Por favor ingrese la talla expresada en metros: ");
            scanf("%lf", &t);
        }
        intentos--;
    }
    if (m > 0 && t > 0)
    {
        imc = m / pow(t, 2);
        if (imc < 18.5)
        {
            printf("Insuficiencia Ponderada ya que su imc es de %.3lf", imc);
        }
        else if (imc >= 18.5 && imc < 25)
        {
            printf("Intervalo Normal ya que su imc es de %.3lf", imc);
        }
        else if (imc >= 25 && imc < 30)
        {
            printf("Clasificacion de IMC: Preobesidad ya que su imc es de %.3lf", imc);
        }
        else if (imc >= 30 && imc < 35)
        {
            printf("Clasificacion de IMC: Obesidad Clase I ya que su imc es de %.3lf", imc);
        }
        else if (imc >= 35 && imc < 40)
        {
            printf("Clasificacion de IMC: Obesidad Clase II ya que su imc es de %.3lf", imc);
        }
        else
        {
            printf("Clasificacion de IMC: Obesidad Clase III ya que su imc es de %.3lf", imc);
        }
    }
    printf("\nPrograma terminado");
    return 0;
}

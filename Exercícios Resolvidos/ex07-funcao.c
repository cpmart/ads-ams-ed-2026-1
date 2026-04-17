#include <stdio.h>
#include <math.h>

float calcularAreaCirculo(float raio);
float calcularVolumeCilindro(float raio, float altura);

int main(){
    float raio=2, altura=3, areaCirculo, volumeCilindro;
    areaCirculo = calcularAreaCirculo(raio);
    volumeCilindro = calcularVolumeCilindro(raio,altura);
    printf("Área do Círculo: %g\n",areaCirculo);
    printf("Volume do Cilindro: %g\n",volumeCilindro);
}

float calcularAreaCirculo(float raioTeste){
    return 3.14159 * pow(raioTeste,2);
}

float calcularVolumeCilindro(float raio, float altura){
    return calcularAreaCirculo(raio)*altura;
}
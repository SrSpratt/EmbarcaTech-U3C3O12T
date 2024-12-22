#include <cobject.h>
#include <stdio.h>
#include <stdlib.h>

void InitCObject(double input, CObject* object){
    if (object != NULL){
        object->input = input;
        object->output = 5.6;
        object->subtitle = "Object initialized";
    } else {
        printf("Object is null");
    }
}

double CObjectOutput(CObject* object){
    double aux = object->input; 
    return aux;
}

const char* PrintCObject(CObject* object){
    return object->subtitle;
}
// Funções de conversão de temperatura
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}

double celsiusParaKelvin(double celsius) {
    return celsius + 273.15;
}
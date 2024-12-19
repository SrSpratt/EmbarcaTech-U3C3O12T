#include "temperaturaconverter.h"

double CelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double CelsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
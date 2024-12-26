#ifndef SIZE_CONVERTER_H
#define SIZE_CONVERTER_H

// Declaração das funções de conversão
float bitsParaBytes(float bits);
float bytesParaBits(float bytes);
float bytesParaKB(float bytes);
float kbParaBytes(float kb);
float kbParaMB(float kb);
float mbParaGB(float mb);
float gbParaTB(float gb);

// Função principal do conversor
void SizeConverter();

#endif // SIZE_CONVERTER_H
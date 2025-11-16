#include "Carta.h"

Carta::Carta(char palo, int numero, int valor) : 
             palo(palo), numero(numero), valor(valor) {}

// Getters
char Carta::getPalo() const { return palo;}
int Carta::getNumero() const { return numero;}
int Carta::getValor() const { return valor;}
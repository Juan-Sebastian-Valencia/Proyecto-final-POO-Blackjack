#include "Baraja.h"

Baraja::Baraja(){
    // Inicializa la baraja con las cartas de una baraja estandar de Blackjack
    char palos[] = {'P', 'T', 'C', 'D'};
    for(char palo : palos){
        for(int i = 1; i < 14; i++){
            int numero = i;
            int valor = numero;
            if(numero == 1) valor = 11;
            if(numero > 10) valor = 10;
            Carta carata(palo, numero, valor);
            barajaInicial.push_back(carata);
        }
    }
}

Carta Baraja::sacarCartaBarajaInicial(){ 
    Carta cartaAux = barajaInicial.back();
    barajaInicial.pop_back();
    return cartaAux;
}

Carta Baraja::sacarCartaBarajaSegundaria(){
    Carta cartaAux = barajaInicial.back();
    barajaSegundaria.pop_back();
    return cartaAux;
}

void Baraja::recibirCartaBarajaInicial(const Carta& carta){
    barajaInicial.push_back(carta);
}

void Baraja::recibirCartaBarajaSegundaria(const Carta& carta){
    barajaSegundaria.push_back(carta);
}

void Baraja::Barajar(){
    for(Carta carta : barajaSegundaria){
        barajaInicial.push_back(carta);
    }
    barajaSegundaria.clear();

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(barajaInicial.begin(), barajaInicial.end(), g);
}

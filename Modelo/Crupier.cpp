#include "Crupier.h"

Crupier::Crupier(Baraja baraja) : Persona(), puntaje(0.0), mano({}), baraja(baraja) {}

std::vector<Carta> Crupier::getMano() const { return mano;}

void Crupier::repartirCarta(Jugador& jugador){
    jugador.recibirCartaMano(baraja.sacarCartaBarajaInicial());
}

void Crupier::repartirCartaManoDividir(Jugador& jugador){
    jugador.recibirCartaManoDividir(baraja.sacarCartaBarajaInicial());
}

void Crupier::repartirCartasInicioJuego(Jugador& jugador){
    repartirCarta(jugador);
    recibirCarta();
    repartirCarta(jugador);
    recibirCarta();
}

void Crupier::recibirCarta(){
    mano.push_back(baraja.sacarCartaBarajaInicial());
}

void Crupier::calcularPuntaje(){
    for(Carta carta : mano){
        int valorAux = carta.getValor();
        setPuntaje(valorAux);
    }
}

void Crupier::logicaCrupier(){
    calcularPuntaje();
    while(puntaje < 17){
        recibirCarta();
        calcularPuntaje();
    }
}
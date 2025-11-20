#include "Jugador.h"

Jugador::Jugador() : Persona(), mano({}), manoDividir({}) {}

// Getters
std::vector<Carta> Jugador::getMano() const { return mano;}
std::vector<Carta> Jugador::getManoDividir() const { return manoDividir;}

// Métodos para manipular las manos del jugador
void Jugador::recibirCartaMano(const Carta& carta) { mano.push_back(carta);}
void Jugador::recibirCartaManoDividir(const Carta& carta) { manoDividir.push_back(carta);}

std::vector<Carta> Jugador::vaciarMano() {
    std::vector<Carta> manoAux = mano;
    mano.clear();
    return manoAux;
}

std::vector<Carta> Jugador::vaciarManoDividir() {
    std::vector<Carta> manoDividirAux = manoDividir;
    manoDividir.clear();
    return manoDividirAux;
}

// Métodos para apostar
void Jugador::hacerApuesta(double apuesta) {
    setApuesta(apuesta);
    setSaldo(getSaldo() - apuesta);
}

void Jugador::doblarApuesta() {
    setApuesta(getApuesta() * 2);
    setSaldo(getSaldo() - getApuesta() / 2);
    // se le resta la mitad ya que la apuesta ya se habia restado una vez
}

void Jugador::calcularPuntaje(){
    int valorAux = 0;
    for(Carta carta : mano){
        valorAux += carta.getValor();       
    }
    setPuntaje(valorAux);
}



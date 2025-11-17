#include "ControladorConsola.h"

ControladorConsola::ControladorConsola(Jugador* jugador, Crupier* crupier, VistaConsola* vista) :
                    jugador(jugador), crupier(crupier), vista(vista) {}

void ControladorConsola::actualizarPuntajes(){
    jugador->calcularPuntaje();
    crupier->calcularPuntaje();
}

bool ControladorConsola::determinarEmpate(){
    actualizarPuntajes();
    if(jugador->getPuntaje() > 21 && crupier->getPuntaje() > 21)
        return true;
    else if(jugador->getPuntaje() == crupier->getPuntaje())
    return true;
    else return false;
}

bool ControladorConsola::determinarGanador(){
    actualizarPuntajes();
    if(jugador->getPuntaje() > crupier->getPuntaje() 
       && jugador->getPuntaje() <= 21) return true;
}

bool ControladorConsola::blackjackJugador(){
    actualizarPuntajes();
    if(jugador->getPuntaje() == 21 ) return true;
    else return false;
}

bool ControladorConsola::blackjackCrupier(){
    actualizarPuntajes();
    if(crupier->getPuntaje() == 21 ) return true;
    else return false;
}

void ControladorConsola::inicializarJugador(){
    jugador->setNombre(vista->pedirNombre());
    jugador->setEdad(vista->pedirEdad());
}

void ControladorConsola::iniciarPartida(){
    inicializarJugador();
    jugador->hacerApuesta(vista->pedirApuesta(*jugador)); // Desrreferenciamos el puntero a jugador
    crupier->repartirCartasInicioJuego(*jugador); 

    while(vista->continuarJugando()){

        vista->mostrarJugador(*jugador);  
        switch (vista->menuJuego()){
            case 1: crupier->repartirCarta(*jugador);
            break;
            case 2: break;
            case 3: 
                vista->mostrarDoblar(*jugador);
                continue;
            case 4:break;

        }
    }
}

void ControladorConsola::iniciarJuego() {}
                
#include "ControladorConsola.h"

ControladorConsola::ControladorConsola(Jugador* jugador, Crupier* crupier, VistaConsola* vista) :
                    jugador(jugador), crupier(crupier), vista(vista) {}

void ControladorConsola::actualizarPuntajes(){
    jugador->calcularPuntaje();
    crupier->calcularPuntaje();
}

void ControladorConsola::determinarGanador(){
    actualizarPuntajes();
    if(jugador->getPuntaje() == 21 ) vista->mensajeGanadorPorBlackjack();  

    else if(jugador->getPuntaje() > crupier->getPuntaje() 
       && jugador->getPuntaje() <= 21) vista->mensajeGanador();

    else if(jugador->getPuntaje() > 21 && crupier->getPuntaje() > 21){
        vista->mensajeEmpate();
    }

    else vista->mensajePerdedor();
}

void ControladorConsola::inicializarJugador(){
    jugador->setNombre(vista->pedirNombre());
    jugador->setEdad(vista->pedirEdad());
}

void ControladorConsola::crupierJugar(){
    vista->mostrarCrupier(*crupier);
    crupier->logicaCrupier();
    vista->mostrarCrupier(*crupier);
}

void ControladorConsola::iniciarPartida(){
    inicializarJugador();

    jugador->hacerApuesta(vista->pedirApuesta(*jugador)); // Desrreferenciamos el puntero a jugador
    crupier->repartirCartasInicioJuego(*jugador); 

    while(true){
        
        vista->limpiarConsola();
        vista->mostrarJugador(*jugador); 

        int opcion = vista->menuJuego();
        if(opcion == 1) crupier->repartirCarta(*jugador);
        else if(opcion == 2) break;
        else if (opcion == 3) vista->mostrarValidacionDoblar(*jugador);
        else if (opcion == 4) {
            dividirApuesta();
            break;
        }
        else{
            vista->mostrarOpcionInvalida();
            continue;
        } 
    }
    vista->mostrarCrupier(*crupier);
    crupierJugar();
    vista->mostrarCrupier(*crupier);
    determinarGanador();
    //Implementar el mecanismo para jugar varias veces
}             

void ControladorConsola::dividirApuesta(){  // refactorizar esta función

    if(jugador->getApuesta() <= jugador->getSaldo()){

        jugador->doblarApuesta();
        crupier->repartirCartaManoDividir(*jugador);
        crupier->repartirCartaManoDividir(*jugador);

        while(true){
            vista->mostrarJugador(*jugador);
            vista->menuDividir();
            if(vista->menuDividir() == 1) crupier->repartirCarta(*jugador);
            else if(vista->menuDividir() == 2) break;
            else if (vista->menuDividir() == 3){ 
                vista->mostrarValidacionDoblar(*jugador);
                break;
            }

            else if (vista->menuDividir() == 4){
                while(true){
                    vista->mostrarJugador(*jugador);
                    vista->menuDividirCambioMano();
                    if(vista->menuDividirCambioMano() == 1){
                        crupier->repartirCartaManoDividir(*jugador);
                    } 
                    else if(vista->menuDividirCambioMano() == 2) break;
                    else if (vista->menuDividirCambioMano() == 3){ 
                    vista->mostrarValidacionDoblar(*jugador);
                    break;
                    }   
                }
            }
        }

    }else vista->mostrarValidacionDoblar(*jugador);
}

void ControladorConsola::iniciarJuego(){
    while(true){
        vista->limpiarConsola();
        int opcion = vista->menuPrincipal();

        if(opcion == 1){
            iniciarPartida();
            continue;
        }
        else if(opcion == 2){
            // Falta crear he implementar.
            continue;
        }
        else if(opcion == 3){
            // Falta crear he implementar.
            continue;
        }
        else if(opcion == 4){
            vista->saliendo();
            break; 
        }
    }
}
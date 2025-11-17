/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       ControladorConsola
Responsabilidades:        
    - Gestionar y controlar la interacción entre las clases del programa.
    - Servir de intermediario entre la vista y el modelo.
    - Coordinar parte de la logica y reglas del juego de Blackjack.

Colaboradores:            
    - Contiene un puntero a una instancia de la clase Jugador.
    - Contiene un puntero a una instancia de la clase Crupier.
    - Contiene un puntero a la clase VistaConsola.
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        17/11/2025
Fecha de última modificación: 17/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef CONTROLADOR:CONTROLADORCONSOLA_H
#define CONTROLADOR_CONTROLADORCONSOLA_H

#include "Modelo/Jugador.h"
#include "Modelo/Crupier.h"
#include "Vista/VistaConsola.h"

class ControladorConsola {
    private:
        Jugador* jugador;
        Crupier* crupier;
        VistaConsola* vista;

    public:
        ControladorConsola(Jugador* jugador, Crupier* crupier, VistaConsola* vista);
        void actualizarPuntajes();
        bool determinarEmpate();
        bool determinarGanador();
        bool blackjackJugador();
        bool blackjackCrupier();
        void inicializarJugador();
        void iniciarPartida();
        void iniciarJuego();
        void dividirApuesta();
};

#endif // CONTROLADOR_CONTROLADORCONSOLA_H
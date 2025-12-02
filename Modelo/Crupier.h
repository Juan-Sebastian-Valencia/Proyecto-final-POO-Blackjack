/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Crupier
Responsabilidades:        
    - Representar al crupier en una partida de Blackjack.
    - Gestionar las cartas del jugador y del crupier durante la partida.
    - Implementar la lógica de juego del crupier según las reglas de Blackjack.
    - Barajar las cartas al inicio de la partida y cuando sea necesario.

Colaboradores:            
    - Hereda de la clase Persona.
    - Contiene objetos de la clase Carta.
    - Conoce a la clase Jugador.

-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        16/11/2025
Fecha de última modificación: 17/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef MODELO_CRUPIER_H
#define MODELO_CRUPIER_H

#include "Persona.h"
#include "Jugador.h"
#include "Baraja.h"

class Crupier : public Persona {
    private:
        double puntaje;
        std::vector<Carta> mano;
        Baraja& baraja;

    public:
        Crupier(Baraja& baraja);
        std::vector<Carta> getMano() const;
        void repartirCarta(Jugador& jugador);
        void repartirCartaManoDividir(Jugador& jugador);
        void repartirCartasInicioJuego(Jugador& jugador);
        void recibirCarta();
        void calcularPuntaje();
        void logicaCrupier();

        std::vector<Carta> vaciarMano();
};
#endif // MODELO_CRUPIER_H
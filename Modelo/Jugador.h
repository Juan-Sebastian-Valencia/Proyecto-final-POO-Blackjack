/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Jugador
Responsabilidades:        
    - Representar a un jugador de Blackjack en un casino, heredando atributos 
      y métodos de la clase Persona.
    - Implementar atributos y métodos específicos de un jugador, como mano, 
      recibir carta o hacer apuesta. 

Colaboradores:            
    - Hereda de Persona.
    - Contiene objetos de la clase Carta.
===============================================================================
*/

#ifndef MODELO_JUGADOR_H
#define MODELO_JUGADOR_H

#include "Persona.h"
#include "Carta.h"
#include <vector>

class Jugador : public Persona {
    private:
        std::vector<Carta> mano;
        std::vector<Carta> manoDividir;

    public:
        Jugador();
        std::vector<Carta> getMano() const;
        std::vector<Carta> getManoDividir() const;
        void recibirCartaMano(const Carta& carta);
        void recibirCartaManoDividir(const Carta& carta);
        std::vector<Carta> vaciarMano();
        std::vector<Carta> vaciarManoDividir();
        void hacerApuesta(double apuesta);
        void doblarApuesta();

        bool validarApuesta(double apuesta) const;
};

#endif // MODELO_JUGADOR_H
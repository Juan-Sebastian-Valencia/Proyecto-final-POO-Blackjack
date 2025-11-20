/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Baraja
Responsabilidades:        
    - Representar una baraja de cartas en Blackjack.
    - Contener un vector de objetos Carta.
    - Inicializar la baraja con un conjunto estándar de cartas.
    - Tener métodos para sacar carta, recibir carta y barajar.

Colaboradores:            
    - La clase Baraja contiene objetos de la clase Carta.
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        16/11/2025
Fecha de última modificación: 16/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef MODELO_BARAJA_H
#define MODELO_BARAJA_H

#include "Carta.h"
#include <vector>
#include <random>  // Para la función std::random_device y std::mt19937
#include <algorithm> // Para std::shuffle

class Baraja {
    private:
        std::vector<Carta> barajaInicial;
        std::vector<Carta> barajaSegundaria;
    public:
        Baraja();
        Carta sacarCartaBarajaInicial();
        Carta sacarCartaBarajaSegundaria();
        void recibirCartaBarajaInicial(const Carta& carta);
        void recibirCartaBarajaSegundaria(const Carta& carta);
        void Barajar();
};

/* Nota: La baraja esta pensada para que en la partida las cartas se saquen de 
         la baraja inicial y despues de terminar una partida se pasen a la 
         baraja segundaria, al momento de barajar se juntas las cartas de ambas
         barajas.
*/ 

#endif // MODELO_BARAJA_H
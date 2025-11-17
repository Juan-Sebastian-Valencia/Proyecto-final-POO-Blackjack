/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Carta
Responsabilidades:        
    - Representar una carta de una baraja de blackjack con un palo, número y 
      valor según las reglas del Blackjack.
    - Tener métodos para obtener los atributos de las cartas.

Colaboradores:            
    - Jugador contiene objetos de la clase Carta.
    - Crupier contiene objetos de la clase Carta.
    - Baraja contiene objetos de la clase Carta.
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        16/11/2025
Fecha de última modificación: 16/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef MODELO_CARTA_H
#define MODELO_CARTA_H

class Carta {
    private:
        char palo;
        int numero;
        int valor;

    public:
        Carta(char palo, int numero, int valor);
        char getPalo() const;
        int getNumero() const;
        int getValor() const;
};
#endif // MODELO_CARTA_H
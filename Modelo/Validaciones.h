/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Validaciones
Responsabilidades:        
    - Validar las entradas recibidas por consola, asegurando que estas tengan 
      sentido.
    - Validar los procesos de apuestas, asegurando que tenga coherencia el 
      saldo del jugador con su apuesta.

Colaboradores:            
    - Es usado por la clase VistaConsola.
    - Es usado por la clase Jugador.
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        17/11/2025
Fecha de última modificación: 17/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef MODELO_VALIDACIONES_H
#define MODELO_VALIDACIONES_H

#include "Jugador.h"
#include <string>  // Para el parametro de validarNombre.
#include <cctype>  // Para utilizar la función isdigit.

class Validaciones{

    public:
        bool validarEdad(const int edad);
        bool validarNombre(const std::string& nombre);
        bool validarApuesta(const double apuesta, const Jugador& jugador);
        bool validarDoblar(const Jugador& jugador);
};

/*
Nota: Esta clase puede parecer inecesaria, pero se definio e implemento para segir
      el principio de responsabilidad unica según los principios SOLID.
*/

#endif //MODELO_VALIDACIONES_H

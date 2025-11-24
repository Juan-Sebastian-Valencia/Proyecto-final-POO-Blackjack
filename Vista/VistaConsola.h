/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:         VistaConsola
Responsabilidades:        
    ...

Colaboradores:            
    ...
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        17/11/2025
Fecha de última modificación: 17/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef VISTA_VISTACONSOLA_H
#define VISTA_VISTACONSOLA_H

#include "Modelo/Carta.h"
#include "Modelo/Jugador.h"
#include "Modelo/Crupier.h"
#include "Modelo/Validaciones.h"
#include <string>
#include <iostream>
#include <cstdlib>  // Para la función system

class VistaConsola{
    private:
        Validaciones* validaciones;

    public:
        // Métodos para recibir inforamción (inputs)
        std::string pedirNombre();
        int pedirEdad();
        double pedirApuesta(const Jugador& jugador);
        int menuPrincipal();
        int menuJuego();
        int menuDividir();
        int menuDividirCambioMano();
        bool continuarJugando();
        
        // Métodos para mostrar información (ouputs)
        void mostrarCarta(const Carta& carta);
        void mostrarMano(const std::vector<Carta>& mano);
        void mostrarJugador(const Jugador& jugador);
        void mostrarCrupier(const Crupier& crupier);
        void mostrarValidacionDoblar(Jugador& jugador);
        void mostrarOpcionInvalida();
        void mensajeGanador();
        void mensajeGanadorPorBlackjack();
        void mensajePerdedor();
        void mensajeEmpate();
        void saliendo();

        void limpiarConsola();
        void PresionarTeclaParaContinuar();
};

#endif // VISTA_VISTACONSOLA_H
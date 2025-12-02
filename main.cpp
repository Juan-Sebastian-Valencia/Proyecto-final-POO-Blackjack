#include "Modelo/Jugador.h"
#include "Modelo/Crupier.h"
#include "Vista/VistaConsola.h"
#include "Controlador/ControladorConsola.h"

int main(){

    Jugador jugador;
    Baraja baraja;
    Crupier crupier(baraja);
    VistaConsola vista; 
    ControladorConsola controlador(&jugador, &crupier, &vista, baraja);

    controlador.iniciarJuego();
}
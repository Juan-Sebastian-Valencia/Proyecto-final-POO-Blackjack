#include "Modelo/Jugador.h"
#include "Modelo/Crupier.h"
#include "Vista/VistaConsola.h"
#include "Controlador/ControladorConsola.h"

int main(){

    Jugador jugador;
    Crupier crupier;
    VistaConsola vista;
    ControladorConsola controlador(&jugador, &crupier, &vista);

    controlador.iniciarPartida();



}
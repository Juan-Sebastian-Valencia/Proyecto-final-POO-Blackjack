#include "Validaciones.h"

bool Validaciones::validarEdad(const int edad){
    if(edad < 0 || edad > 100) return false;
    else return true;
}

bool Validaciones::validarNombre(const std::string& nombre){
    if(nombre.empty()) return false;
    for(char caracter : nombre){
        if(!std::isdigit(caracter)) return false;
    }
    return true;
}

bool Validaciones::validarApuesta(const double apuesta, const Jugador& jugador){
    if(apuesta < 0 || apuesta > jugador.getSaldo()) return false;
    else return true;
}

bool Validaciones::validarDoblar(const Jugador& jugador){
    if(validarApuesta(jugador.getApuesta(), jugador)) return true;
    else return false;
}
/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       Persona
Responsabilidades:        
    - Representar a una persona en un cacino con atributos básicos como nombre,
      edad, puntaje saldo y apuesta.
    - Crear métods getters y setters para accceder y modificar los atributos.
    - Clase padre de Jugador y Crupier.

Colaboradores:            
    - Hereda a Jugador.
    - Hereda a crupier.
===============================================================================
*/

#ifndef MODELO_PERSONA_H
#define MODELO_PERSONA_H

#include <string>

class Persona {
    private:
        std::string nombre;
        int edad;
        int puntaje;
        double saldo;
        double apuesta;
    
    public:
        Persona();
        std::string getNombre() const;
        int getEdad() const;
        int getPuntaje() const;
        double getSaldo() const;
        double getApuesta() const;

        void setNombre(const std::string& nombre);
        void setEdad(int edad);
        void setPuntaje(int puntaje);
        void setSaldo(double saldo);
        void setApuesta(double apuesta);
};



#endif // MODELO_PERSONA_H
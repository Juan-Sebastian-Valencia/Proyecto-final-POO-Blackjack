#include "Persona.h"

Persona::Persona() : nombre(""), edad(0), puntaje(0), saldo(2000), apuesta(0.0) {}

// Getters
std::string Persona::getNombre() const { return nombre;}
int Persona::getEdad() const { return edad;}
int Persona::getId() const { return id;}
int Persona::getPuntaje() const { return puntaje;}
double Persona::getSaldo() const { return saldo;}
double Persona::getApuesta() const { return apuesta;}

// Setters
void Persona::setNombre(const std::string& nombre){this->nombre = nombre;}
void Persona::setEdad(int edad) {this -> edad = edad;}
void Persona::setId(int id) {this -> id = id; }
void Persona::setPuntaje(int puntaje) {this -> puntaje = puntaje;}
void Persona::setSaldo(double saldo) {this -> saldo = saldo;}
void Persona::setApuesta(double apuesta) {this -> apuesta = apuesta;}
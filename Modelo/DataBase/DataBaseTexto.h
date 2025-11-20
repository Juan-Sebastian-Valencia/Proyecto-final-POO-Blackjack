/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:       DataBaseTexto
Responsabilidades:        
  - Gestionar los datos persistentes del juego utilizando un archivo de texto.
  - Gestionar la lectura y escritura de datos como puntajes, nombre de jugadores,
    etc.
  - Tener métodos para agregar, obtener y actualizar datos del archivo de texto.

Colaboradores:            
  - Ninguno.
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        19/11/2025
Fecha de última modificación: 19/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef MODELO_DataBase_DataBaseTexto_H
#define MODELO_DataBase_DataBaseTexto_H

#include <fstream> // Para el manejo del archivo
#include <iostream>
#include "Modelo/Jugador.h"

class DataBaseTexto{
  private:
    std::string nombreArchivo;
    std::string archivoPuntajes;
    std::ofstream archivoEscritura;
    std::ifstream archivoLectura;

  public:
    DataBaseTexto();
    void registrarPartida(Jugador& jugador);  // Guarda los datos de la partida.
    void mostrarJugador();
    void actualizarDatosJugador();  // En lugar de sobrescribir la información, la actualiza.
    int buscarPuntajeMasAlto();  // Busca dentro del archuvoPuntajes el puntaje más alto y devuelve el número de linea.
    void registrarPuntajeJugador(Jugador& jugador);  // Registra el puntaje del jugador en archivoPuntajes .txt.
    void buscarJugadorPorId(int id);  // Busca un jugador por su ID en el archivo de texto.
    void buscarJugadorPorPuntaje(int puntaje);  // Busca un jugador por su puntaje en el archivo de texto.
};



#endif //MODELO_DataBase_DataBaseTexto_H
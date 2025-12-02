cmake_minimum_required(VERSION 3.25)
project(Blackjack)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        main.cpp

        Controlador/ControladorConsola.cpp

        Modelo/Baraja.cpp
        Modelo/Carta.cpp
        Modelo/Crupier.cpp
        Modelo/Jugador.cpp
        Modelo/Persona.cpp
        Modelo/Validaciones.cpp
        Modelo/DataBase/DataBaseTexto.cpp

        Vista/VistaConsola.cpp
)

# --- Ejecutable principal ---
add_executable(Blackjack ${SOURCES})

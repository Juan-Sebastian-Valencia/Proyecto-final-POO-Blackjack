/*
===============================================================================
                                TARJETA CRC
===============================================================================
Nombre de la clase:         VistaCarta
Responsabilidades:        
    - Representa visualmente una carta del juego como en una baraja física.

Colaboradores:            
    ...
-------------------------------------------------------------------------------

Creado por:               Juan Sebastian Valencia Quinchua
Fecha de creación:        28/11/2025
Fecha de última modificación: 28/11/2025
Versión:                  1.0.0
===============================================================================
*/

#ifndef VISTA_VISTACARTA_H
#define VISTA_VISTACARTA_H

#include "SFML/Graphics.hpp"
#include <string>
#include <map>
#include "modelo/Carta.h"

class VistaSFML {
    private:
        std::map<std::string, sf::Texture> mapa;
        sf::Sprite spriteCarta;
        sf::Texture texturaCarta;
        sf::RenderWindow ventana;

        sf::Sprite mesa;
        sf::Sprite botonPedir;
        sf::Sprite botonPlantarse;
        sf::Sprite botonDoblar;
        sf::Sprite botonDividir;
    public:
        VistaSFML();
        void cargarTexturas(const std::string& nombre, const std::string& rutaArchivo);
        sf::Texture& obtenerTextura(const std::string& nombre);

        void dibujarCarta(const Carta& carta, float x, float y);
        void dibujarMesa();
        void dibujarBotones();
        void mostrarVentana();
};

#endif //VISTA_VISTACARTA_H
#pragma once

#include "Ctesconf.hpp"
#include "Tablero.hpp"
#include "Jugador.hpp"
#include "CDado.hpp"
#include <fstream>
#include <ostream>

class Game {
private:
    Tablero t;
    Jugador j[MAX_JUGADORES];
    CDado d;
    bool swio; // IO por Archivo=true, IO por Teclado=false

// Archivos de entrada/salida para el caso de configuracion de IO por archivos ---------
    std::ifstream fi{"input"};
    std::ofstream fo{"output"};
public:
    static int turno;
    Game();
// Game("Archivo de tablero", Dado aleatorio=true/false, IO por Archivo=true, IO por Teclado=false)
    Game(std::string); 
    void setDadoAleatorio(bool);
    void setOutputToFile(bool);
    void start();
    void outMsg(std::string);

// Método para imprimir la salida del juego si es por Archivo output
    void print();
};

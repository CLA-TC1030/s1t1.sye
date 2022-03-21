#include "Game.hpp"
#include "Ctesconf.hpp"
#include "Tablero.hpp"
#include "CDado.hpp"
#include "Jugador.hpp"
#include <string>


// Construye un juego configurado para dado aleatorio/no aleatorio e I/O - Consola o Archivo -----
Game::Game(std::string tf, bool swa, bool swio)
{
    this->t    = Tablero(tf);
    this->d    = CDado(swa);
    this->swio = swio;          //Switch IO: false = keyboard : true = input file

    for (auto i=0; i < MAX_JUGADORES;i++) {
        this->j[i] = Jugador(i+1);
    }
}

// Imprime un mensaje en Consola/Archivo -------------------
void Game::outMsg(std::string msg)
{
    if (!swio) {
        std::cout << msg << "\n";
    }
    else {
        fo << msg << "\n";
    }
}

// Arranca y simula el Juego --------------------------------------
void Game::start()
{
    
}

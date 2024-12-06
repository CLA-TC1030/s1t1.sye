#include "Game.hpp"
#include <string>

// Construye un juego configurado a partir de un archivo tX.tab e inicializa sus jugadores -----
Game::Game(std::string tf)
{
    
}

// Configura el dado aleatorio
void Game::setDadoAleatorio(bool swa)
{
    
}

// Modifica la variable miembro swio
void Game::setOutputToFile(bool swio)
{
   
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

// Imprime la salida del juego si es por Archivo output
void Game::print()
{
    std::string renglon;
    std::ifstream f{"output"};
    while (f) {
        std::getline(f, renglon);
        std::cout << renglon << "\n";
    }
    f.close();
}

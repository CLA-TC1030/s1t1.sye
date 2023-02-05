#include "CasillaSerpiente.hpp"
#include "CCasilla.hpp"
#include "Ctesconf.hpp"

//Construye una Casilla Serpiente de numero (1-SER_PREMIO CASTIGO), con premio-castigo (SER_PREMIO_CASTIGO) y de tipo "S"
CasillaSerpiente::CasillaSerpiente()
{
    
}

//Construye una Casilla Serpiente de numero (numero), con premio-castigo (SER_PREMIO_CASTIGO) y de tipo "S"
CasillaSerpiente::CasillaSerpiente(int numero):CCasilla{numero, "S"}
{
    
}

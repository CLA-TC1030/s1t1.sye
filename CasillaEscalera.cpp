#include "CasillaEscalera.hpp"
#include "Ctesconf.hpp"

//Constructor por default : inicializada con premio o castigo=ESC_PREMIO_CASTIGO y de Tipo "L"
CasillaEscalera::CasillaEscalera()
{
    
}

//Constructor por default: inicializada en cierto numero y con premio o castigo=ESC_PREMIO_CASTIGO y de Tipo "L"
CasillaEscalera::CasillaEscalera(int numero):CCasilla{numero, "L"}
{
    
}
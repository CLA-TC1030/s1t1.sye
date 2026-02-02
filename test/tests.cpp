#define CATCH_CONFIG_MAIN // defines main() automatically
#include <catch2/catch.hpp>

#include "../Ctesconf.hpp"
#include "../CCasilla.hpp"
#include "../CasillaNormal.hpp"
#include "../CasillaEscalera.hpp"
#include "../CasillaSerpiente.hpp"
#include "../Tablero.hpp"
#include "../Jugador.hpp"
#include "../CDado.hpp"
#include "../Game.hpp"
#include "chkFiles.hpp"

// Pruebas para casillas -----------------------------------------------------------

TEST_CASE("ex0", "[Casillas Base bien formadas]")
{   
    CCasilla c1, c2(2,"E"), c3(3,"S");

    SECTION( "Validando casillas Base normales" ) {
        REQUIRE( c1.getNumeroCasilla() == 1 );
        if (c1.getNumeroCasilla() != 1) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla base debe iniciar en 1.\nSUGERENCIA DE PROGRAMACIÓN: Verifica el valor inicial asignado en el constructor por omisión de CCasilla.");
        }
        REQUIRE( c1.getTipo() == "N" );
        if (c1.getTipo() != "N") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla base debe ser 'N'.\nSUGERENCIA DE PROGRAMACIÓN: Asegúrate de que el atributo tipo se inicialice correctamente en el constructor.");
        }
        REQUIRE( c1.getSiguienteCasilla() == c1.getNumeroCasilla() + NOR_PREMIO_CASTIGO );
        if (c1.getSiguienteCasilla() != c1.getNumeroCasilla() + NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla base debe ser su número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la lógica de getSiguienteCasilla().");
        }
        REQUIRE( c2.getNumeroCasilla() == 2);
        if (c2.getNumeroCasilla() != 2) {
            INFO("FUNCIONALIDAD ESPERADA: El constructor debe asignar correctamente el número de casilla.\nSUGERENCIA DE PROGRAMACIÓN: Verifica los parámetros del constructor de CCasilla.");
        }
        REQUIRE( c2.getTipo() == "E" );
        if (c2.getTipo() != "E") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo debe coincidir con el parámetro recibido.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la asignación del tipo en el constructor.");
        }
        REQUIRE( c2.getSiguienteCasilla() == c2.getNumeroCasilla() + NOR_PREMIO_CASTIGO);
        if (c2.getSiguienteCasilla() != c2.getNumeroCasilla() + NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla base debe ser su número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la lógica de getSiguienteCasilla().");
        }
        REQUIRE( c3.getNumeroCasilla() == 3);
        if (c3.getNumeroCasilla() != 3) {
            INFO("FUNCIONALIDAD ESPERADA: El constructor debe asignar correctamente el número de casilla.\nSUGERENCIA DE PROGRAMACIÓN: Verifica los parámetros del constructor de CCasilla.");
        }
        REQUIRE( c3.getTipo() == "S" );
        if (c3.getTipo() != "S") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo debe coincidir con el parámetro recibido.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la asignación del tipo en el constructor.");
        }
        REQUIRE( c3.getSiguienteCasilla() == c3.getNumeroCasilla() + NOR_PREMIO_CASTIGO);
        if (c3.getSiguienteCasilla() != c3.getNumeroCasilla() + NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla base debe ser su número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la lógica de getSiguienteCasilla().");
        }
    }
}

TEST_CASE("ex1", "[Casillas Normales bien formadas]")
{   
    CasillaNormal c1, c2(3);

    SECTION( "Validando casillas Normales" ) {
        REQUIRE( c1.getNumeroCasilla() == 1 );
        if (c1.getNumeroCasilla() != 1) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla normal debe iniciar en 1 si no se indica otro valor.\nSUGERENCIA DE PROGRAMACIÓN: Revisa el constructor por omisión de CasillaNormal.");
        }
        REQUIRE( c1.getTipo() == "N" );
        if (c1.getTipo() != "N") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla normal debe ser 'N'.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en CasillaNormal.");
        }
        REQUIRE( c1.getSiguienteCasilla() == c1.getNumeroCasilla() + NOR_PREMIO_CASTIGO);
        if (c1.getSiguienteCasilla() != c1.getNumeroCasilla() + NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla normal debe ser su número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE( c2.getNumeroCasilla() == 3 );
        if (c2.getNumeroCasilla() != 3) {
            INFO("FUNCIONALIDAD ESPERADA: El constructor debe asignar correctamente el número de casilla.\nSUGERENCIA DE PROGRAMACIÓN: Verifica los parámetros del constructor de CasillaNormal.");
        }
        REQUIRE( c2.getTipo() == "N" );
        if (c2.getTipo() != "N") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla normal debe ser 'N'.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en CasillaNormal.");
        }
        REQUIRE( c2.getSiguienteCasilla() == c2.getNumeroCasilla() + NOR_PREMIO_CASTIGO);
        if (c2.getSiguienteCasilla() != c2.getNumeroCasilla() + NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla normal debe ser su número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }
    }
}

TEST_CASE("ex2", "[Casillas Escalera bien formadas]")
{   
    CasillaEscalera c1, c2(3);

    SECTION( "Validando casillas Escalera" ) {
        REQUIRE( c1.getNumeroCasilla() == 1 );
        if (c1.getNumeroCasilla() != 1) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla escalera debe iniciar en 1 si no se indica otro valor.\nSUGERENCIA DE PROGRAMACIÓN: Revisa el constructor por omisión de CasillaEscalera.");
        }
        REQUIRE( c1.getTipo() == "L" );
        if (c1.getTipo() != "L") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla escalera debe ser 'L'.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en CasillaEscalera.");
        }
        REQUIRE( c1.getSiguienteCasilla() == c1.getNumeroCasilla() + ESC_PREMIO_CASTIGO );
        if (c1.getSiguienteCasilla() != c1.getNumeroCasilla() + ESC_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla escalera debe ser su número más ESC_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE( c2.getNumeroCasilla() == 3 );
        if (c2.getNumeroCasilla() != 3) {
            INFO("FUNCIONALIDAD ESPERADA: El constructor debe asignar correctamente el número de casilla.\nSUGERENCIA DE PROGRAMACIÓN: Verifica los parámetros del constructor de CasillaEscalera.");
        }
        REQUIRE( c2.getTipo() == "L" );
        if (c2.getTipo() != "L") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla escalera debe ser 'L'.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en CasillaEscalera.");
        }
        REQUIRE( c2.getSiguienteCasilla() == c2.getNumeroCasilla() + ESC_PREMIO_CASTIGO );
        if (c2.getSiguienteCasilla() != c2.getNumeroCasilla() + ESC_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla escalera debe ser su número más ESC_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }
    }
}

TEST_CASE("ex3", "[Casillas Serpiente bien formadas]")
{   
    CasillaSerpiente c1, c2(10);

    SECTION( "Validando casillas Serpiente" ) {
        REQUIRE( c1.getNumeroCasilla() == 1 - SER_PREMIO_CASTIGO );
        if (c1.getNumeroCasilla() != 1 - SER_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla serpiente por omisión debe estar en 1 - SER_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa el constructor por omisión de CasillaSerpiente.");
        }
        REQUIRE( c1.getTipo() == "S" );
        if (c1.getTipo() != "S") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla serpiente debe ser 'S'.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en CasillaSerpiente.");
        }
        REQUIRE( c1.getSiguienteCasilla() == c1.getNumeroCasilla() + SER_PREMIO_CASTIGO);
        if (c1.getSiguienteCasilla() != c1.getNumeroCasilla() + SER_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla serpiente debe ser su número más SER_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE( c2.getNumeroCasilla() == 10 );
        if (c2.getNumeroCasilla() != 10) {
            INFO("FUNCIONALIDAD ESPERADA: El constructor debe asignar correctamente el número de casilla.\nSUGERENCIA DE PROGRAMACIÓN: Verifica los parámetros del constructor de CasillaSerpiente.");
        }
        REQUIRE( c2.getTipo() == "S" );
        if (c2.getTipo() != "S") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo de casilla serpiente debe ser 'S'.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en CasillaSerpiente.");
        }
        REQUIRE( c2.getSiguienteCasilla() == c2.getNumeroCasilla() + SER_PREMIO_CASTIGO);
        if (c2.getSiguienteCasilla() != c2.getNumeroCasilla() + SER_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de una casilla serpiente debe ser su número más SER_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }
    }
}

TEST_CASE("ex4", "[Polimorfismo de casillas]")
{   
    CCasilla c1{CasillaNormal(1)}, c2{CasillaEscalera(3)}, c3{CasillaSerpiente(10)};

    SECTION( "Validando casillas Normales, Escalera, Serpiente polimorficamente" ) {
        REQUIRE( c1.getNumeroCasilla() == 1 );
        if (c1.getNumeroCasilla() != 1) {
            INFO("FUNCIONALIDAD ESPERADA: El número de casilla debe ser 1 para CasillaNormal.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la conversión y asignación en el constructor de CCasilla.");
        }
        REQUIRE( c1.getTipo() == "N" );
        if (c1.getTipo() != "N") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo debe ser 'N' para CasillaNormal.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en la conversión.");
        }
        REQUIRE( c1.getSiguienteCasilla() == c1.getNumeroCasilla() + NOR_PREMIO_CASTIGO );
        if (c1.getSiguienteCasilla() != c1.getNumeroCasilla() + NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente debe ser número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE( c2.getNumeroCasilla() == 3 );
        if (c2.getNumeroCasilla() != 3) {
            INFO("FUNCIONALIDAD ESPERADA: El número de casilla debe ser 3 para CasillaEscalera.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la conversión y asignación en el constructor de CCasilla.");
        }
        REQUIRE( c2.getTipo() == "L" );
        if (c2.getTipo() != "L") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo debe ser 'L' para CasillaEscalera.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en la conversión.");
        }
        REQUIRE( c2.getSiguienteCasilla() == c2.getNumeroCasilla() + ESC_PREMIO_CASTIGO );
        if (c2.getSiguienteCasilla() != c2.getNumeroCasilla() + ESC_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente debe ser número más ESC_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE( c3.getNumeroCasilla() == 10 );
        if (c3.getNumeroCasilla() != 10) {
            INFO("FUNCIONALIDAD ESPERADA: El número de casilla debe ser 10 para CasillaSerpiente.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la conversión y asignación en el constructor de CCasilla.");
        }
        REQUIRE( c3.getTipo() == "S" );
        if (c3.getTipo() != "S") {
            INFO("FUNCIONALIDAD ESPERADA: El tipo debe ser 'S' para CasillaSerpiente.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tipo en la conversión.");
        }
        REQUIRE( c3.getSiguienteCasilla() == c3.getNumeroCasilla() + SER_PREMIO_CASTIGO );
        if (c3.getSiguienteCasilla() != c3.getNumeroCasilla() + SER_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente debe ser número más SER_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }
    }
}

// Pruebas para Tablero -----------------------------------------------------------

TEST_CASE("ex5", "[Tablero bien formado]")
{   
    SECTION( "Validando Tablero en memoria" ) {

        Tablero t;

        t.setCasilla(CasillaEscalera(5), 5);
        t.setCasilla(CasillaEscalera(10), 10);
        t.setCasilla(CasillaEscalera(15), 15);

        t.setCasilla(CasillaSerpiente(7), 7);
        t.setCasilla(CasillaSerpiente(12), 12);
        t.setCasilla(CasillaSerpiente(25), 25);

        t.print();
        REQUIRE( true );
    }

    SECTION( "Validando desde Archivo" ) {
        Tablero tf("t1.tab");

        tf.print();
        REQUIRE( true );
    }

    SECTION( "Validando casillas en Tablero ") {
        Tablero tf("t1.tab");

        REQUIRE (tf.getCasilla(1).getNumeroCasilla()==1);
        if (tf.getCasilla(1).getNumeroCasilla()!=1) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla 1 debe existir y tener número 1.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tablero y la carga desde archivo.");
        }
        REQUIRE (tf.getCasilla(1).getTipo()=="N");
        if (tf.getCasilla(1).getTipo()!="N") {
            INFO("FUNCIONALIDAD ESPERADA: La casilla 1 debe ser de tipo 'N'.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la asignación de tipo al crear el tablero.");
        }
        REQUIRE (tf.getCasilla(1).getSiguienteCasilla()==tf.getCasilla(1).getNumeroCasilla()+NOR_PREMIO_CASTIGO);
        if (tf.getCasilla(1).getSiguienteCasilla()!=tf.getCasilla(1).getNumeroCasilla()+NOR_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de la casilla 1 debe ser su número más NOR_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE (tf.getCasilla(10).getNumeroCasilla()==10);
        if (tf.getCasilla(10).getNumeroCasilla()!=10) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla 10 debe existir y tener número 10.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tablero y la carga desde archivo.");
        }
        REQUIRE (tf.getCasilla(10).getTipo()=="L");
        if (tf.getCasilla(10).getTipo()!="L") {
            INFO("FUNCIONALIDAD ESPERADA: La casilla 10 debe ser de tipo 'L'.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la asignación de tipo al crear el tablero.");
        }
        REQUIRE (tf.getCasilla(10).getSiguienteCasilla()==tf.getCasilla(10).getNumeroCasilla()+ESC_PREMIO_CASTIGO);
        if (tf.getCasilla(10).getSiguienteCasilla()!=tf.getCasilla(10).getNumeroCasilla()+ESC_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de la casilla 10 debe ser su número más ESC_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }

        REQUIRE (tf.getCasilla(25).getNumeroCasilla()==25);
        if (tf.getCasilla(25).getNumeroCasilla()!=25) {
            INFO("FUNCIONALIDAD ESPERADA: La casilla 25 debe existir y tener número 25.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la inicialización del tablero y la carga desde archivo.");
        }
        REQUIRE (tf.getCasilla(25).getTipo()=="S");
        if (tf.getCasilla(25).getTipo()!="S") {
            INFO("FUNCIONALIDAD ESPERADA: La casilla 25 debe ser de tipo 'S'.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la asignación de tipo al crear el tablero.");
        }
        REQUIRE (tf.getCasilla(25).getSiguienteCasilla()==tf.getCasilla(25).getNumeroCasilla()+SER_PREMIO_CASTIGO);
        if (tf.getCasilla(25).getSiguienteCasilla()!=tf.getCasilla(25).getNumeroCasilla()+SER_PREMIO_CASTIGO) {
            INFO("FUNCIONALIDAD ESPERADA: El siguiente de la casilla 25 debe ser su número más SER_PREMIO_CASTIGO.\nSUGERENCIA DE PROGRAMACIÓN: Revisa la función getSiguienteCasilla().");
        }
    }
}

TEST_CASE("ex6", "[Jugador bien formado]")
{   
    SECTION( "Validando Jugador" ) {
        Jugador j(1), k(2);

        REQUIRE(j.getCasilla_actual()==1);
        if (j.getCasilla_actual()!=1) {
            INFO("FUNCIONALIDAD ESPERADA: El jugador debe iniciar en la casilla 1.\nSUGERENCIA DE PROGRAMACIÓN: Revisa el constructor de Jugador.");
        }

        k.setCasilla_actual(10);
        REQUIRE(k.getCasilla_actual()==10);
        if (k.getCasilla_actual()!=10) {
            INFO("FUNCIONALIDAD ESPERADA: El método setCasilla_actual debe actualizar correctamente la posición.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la implementación de setCasilla_actual.");
        }
    }
}

TEST_CASE("ex7", "[Dado no aleatorio-secuencial]")
{   
    SECTION( "Validando Dado no aleatorio-secuencial" ) {
        CDado d(false);

        for (auto i=0; i < 12; i++)
        {
            std::cout << d.getValorDado() << "\n";
        }
        REQUIRE(true);
    }
}

TEST_CASE("ex8", "[Ejecucion de Juego]")
{   
    SECTION( "Validando Ejecucion de Juego" ) {
        Game g("t1.tab");
        
        g.setDadoAleatorio(false);
        g.setOutputToFile(true);
        
        g.start();
        REQUIRE(chkFiles("output", "test/toutput"));
        if (!chkFiles("output", "test/toutput")) {
            INFO("FUNCIONALIDAD ESPERADA: La salida del juego debe coincidir con el archivo de referencia.\nSUGERENCIA DE PROGRAMACIÓN: Verifica la lógica de impresión y el flujo del juego.");
        }
    }
}

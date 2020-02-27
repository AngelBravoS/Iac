/***************************************************************************
 *   Copyright (C) 2018 by Ángel Bravo Sáenz                               *
 *   angelbravosaenz@gmail.com                                             *
 *                                                                         *
 *   This file is part of iac.                                             *
 *                                                                         *
 *   iac is free software; you can redistribute it and/or modify           *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   iac is distributed in the hope that it will be useful,                *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with iac; if not, write to the                                  *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "calculos.hpp"
#include "funcMatematicasBasicas.hpp"

Calculos::Calculos(unsigned int parametro_a, unsigned int parametro_b,
                                     unsigned int parametro_m, unsigned int parametro_X0) {
    a = parametro_a;
    b = parametro_b;
    m = parametro_m;
    X0 = parametro_X0;
}

Calculos::Calculos(unsigned int parametro_a, unsigned int parametro_b,
                                     unsigned int parametro_m) {
    a = parametro_a;
    b = parametro_b;
    m = parametro_m;
    if (b == 0) {periodoCompleto = false;}
}

//---función para el generador congruencial mixto y multiplicativo--
unsigned int Calculos::congruencial(unsigned int semilla) {
	unsigned int resultado ;
	resultado = a * semilla + b;
	if(resultado > m)
		resultado = resultado % m;
	return resultado;
}

unsigned int Calculos::comprobarPeriodo(char tipoGenerador) {
    unsigned int resultado = 0;
    if (tipoGenerador == 'x'){
        
    } else {
        
    }
    return resultado;
}

void Calculos::crearSecuencia() {
    unsigned int Xn = congruencial(X0);
    secuencia.push_back(Xn);
    while(X0 != Xn) {
        Xn = congruencial(Xn);
        secuencia.push_back(Xn);
    }
}

void Calculos::mostrarSecuencia() {
    std::cout << "( ";
    for (unsigned int i=0; i< secuencia.size(); i++) {
        std::cout << secuencia[i] << ", ";
    }
    std::cout << ")" << "\n" << "\n";
}



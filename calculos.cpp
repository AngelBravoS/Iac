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

Calculos::Calculos (unsigned int parametro_a, unsigned int parametro_b,
   unsigned int parametro_m, unsigned int parametro_X0) {
	a = parametro_a;
	b = parametro_b;
	m = parametro_m;
	X0 = parametro_X0;
}

Calculos::Calculos (unsigned int parametro_a, unsigned int parametro_b,
   unsigned int parametro_m) {
	a = parametro_a;
	b = parametro_b;
	m = parametro_m;
	if (b == 0) {
		periodoCompleto = false;
	}
}

//---función para el generador congruencial mixto y multiplicativo--
unsigned int Calculos::generador (unsigned int semilla) {
	unsigned int resultado ;
	resultado = a * semilla + b;
	if (resultado > m)
		resultado = resultado % m;
	return resultado;
}

void Calculos::crearSecuencia() {
	unsigned int Xn = generador (X0);
	secuencia.push_back (Xn);
	while (X0 != Xn) {
		Xn = generador (Xn);
		secuencia.push_back (Xn);
	}
}

void Calculos::mostrarSecuencia() {
	std::cout << "( ";
	for (unsigned int i = 0; i < secuencia.size(); i++) {
		std::cout << secuencia[i] << ", ";
	}
	std::cout << ")" << "\n" << "\n";
}

bool Calculos::esPrimo (unsigned int numero) {
	unsigned int i, contador = 0;
	for (i = 2; i < numero; i++) {
		if (numero % i == 0) {
			contador++;
			break;
		}
	}
	if (contador == 0) {
		return true;

	} else {
		return false;
	}
}

bool Calculos::sonCoprimos (unsigned int numero1, unsigned int numero2) {
	if (std::__gcd (numero1, numero2) == 1) {
		return true;
	} else {
		return false;
	}
}

bool Calculos::sonCongruentes (unsigned int numero1, unsigned int numero2, unsigned int numero3) {
	if ( (numero1 - numero2) % numero3 == 0) {
		return true;
	} else {
		return false;
	}
}

bool Calculos::sonCongruentesFactoresPrimoP () {
	std::vector<unsigned int> valoresPrimosM;
	for (unsigned int i = 1; i <= m; i++) {
		if (m % i == 0 && esPrimo (i) == true) {
			valoresPrimosM.push_back (i);
        }
    }    
    
    for (unsigned int i = 0; i < valoresPrimosM.size(); i++) {
        if (sonCongruentes (a, 1, valoresPrimosM[i]) == false) {
            return false;
        }
    }
	return true;
}

bool Calculos::esMCongruente4() {
	if (m % 4 != 0) {
        return true;
    } else if ( (sonCongruentes (a, 1, 4)) == true) {
			return true;
		} else {
			return false;
		}
}

unsigned int Calculos::comprobarPeriodo (char tipoGenerador) {
	unsigned int resultado = 0;
	if (tipoGenerador == 'x') { // 'x' -> Mixto
        if ( (sonCoprimos (b, m) == false) || (sonCongruentesFactoresPrimoP() == false) || (esMCongruente4() == false)) {
			std::cout << "el período no es completo" << "\n";
		} else {
			std::cout << "el período Sí es completo" << "\n";
		}
	} else { // 'm' -> multiplicativo

	}
	return resultado;
}

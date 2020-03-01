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

#ifndef CALCULOS_HPP_INCLUDED
#define CALCULOS_HPP_INCLUDED

#include <iostream>
#include <vector>
#include <algorithm> 
#include <math.h>

#include "funcMatematicasBasicas.hpp"
#include "distribucionesDiscretas.hpp"

class Calculos {
public:
	//======== constructor ========
	Calculos ();
	Calculos (unsigned int parametro_a, unsigned int parametro_b,
	   unsigned int parametro_m, unsigned int parametro_X0);
	Calculos (unsigned int parametro_a, unsigned int parametro_b,
	   unsigned int parametro_m);

    //========  funciones  ========
    bool esPrimo(unsigned int numero);
    bool sonCoprimos (unsigned int numero1, unsigned int numero2);
    bool sonCongruentes (unsigned int numero1, unsigned int numero2, unsigned int numero3);
    bool sonCongruentesFactoresPrimoP();
    bool esMCongruente4();
    unsigned int generador (unsigned int X0);
	

	void crearSecuencia();
	void mostrarSecuencia();

	unsigned int comprobarPeriodo (char tipoGenerador);
	void mostrarComprobacionPeriodo();

protected:
	unsigned int a;
	unsigned int b;
	unsigned int m;
	unsigned int X0;
	bool periodoCompleto;
	bool periodoMaximo;
	std::vector<unsigned int> secuencia;
};

#endif // CALCULOS_HPP_INCLUDED

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

//CLI => Command Line Interface.
#include "cli.hpp"

void CLI::eleccion (unsigned int i) {
	std::cin >> opciones[i];
}

void CLI::menuPrincipal() {
	unsigned int a, b, m, X0;
	do {
		listadOpcionesPricipales();
		eleccion (0);
        switch (opciones[0]) {
            
			case '1' : {
				tipoGenerador();
				eleccion (1);
				std::cout << "valor de a = ";
				std::cin >> a;
				if (opciones[1] == 'x') {
					std::cout << "valor de b = ";
					std::cin >> b;
				} else {
					b = 0;
				}
				std::cout << "valor de m = ";
				std::cin >> m;
				std::cout << "valor de Xo = ";
				std::cin >> X0;
				if ( (m <= a || m <= b) && opciones[1] == 'x') {
					std::cout << "secuencia no válida (m > a,b)." << "\n";
					exit (-1);
				} else {
					std::cout << "La secuencia es:" << '\n';
					Calculos gc (a, b, m, X0);
					gc.crearSecuencia();
					gc.mostrarSecuencia();
				}
            break;
			}
			case '2' : {
				tipoGenerador();
				eleccion (1);
                std::cout << "valor de a = ";
				std::cin >> a;
				if (opciones[1] == 'x') {
					std::cout << "valor de b = ";
					std::cin >> b;
				} else {
					b = 0;
				}
				std::cout << "valor de m = ";
				std::cin >> m;
				Calculos gc (a, b, m);
				gc.comprobarPeriodo (opciones[1]);
                //gc.mostrarComprobacionPeriodo();
            break;
			}
            case '3' : {

            break;
			}
		}
		
	} while (opciones[0] != '0');
}

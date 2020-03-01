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

#include "cli.hpp"
#include <iostream>

void CLI::hasElegido() {
	std::cout << '\n';
//	std::cout << "has elegido: " << getOpcionSeleccionada() << '\n';
	std::cout << '\n';
}

void CLI::introduccion() {
	std::cout << '\n';
	std::cout << "	╔══════════════════════════╗" << '\n';
	std::cout << "	║       Inteligencia       ║" << '\n';
	std::cout << "	║        artificial        ║" << '\n';
	std::cout << "	║          en C++          ║" << '\n';
	std::cout << "	╚══════════════════════════╝" << '\n';
	std::cout << "			       0.1" << '\n';
	std::cout << '\n';
}

void CLI::ayuda() {
	std::cout << "                      Ayuda" << '\n';
	std::cout << "-------------------------------------------------" << '\n';
	std::cout << "	Inteligencia Artificial" << '\n';
	std::cout << "		Generador congruencial multiplicativo" << '\n';
	std::cout << "		Generador congruencia mixto" << '\n';
	std::cout << "	Distribuciones discretas de probabilidad" << '\n';
	std::cout << '\n';
}

void CLI::listadOpcionesPricipales() {

	std::cout << "	=========================== " << '\n';
	std::cout << '\n';
	std::cout << "1) Calcular la secuencia de generadores congruenciales." << '\n';
	std::cout << "2) Comprobar el período de un generador congruencial." << '\n';
	std::cout << "3) Generar valores aleatorios de distribuciones aleatorias." << '\n';
	std::cout << "0) Salir." << '\n';
	std::cout << "> ";
}

void CLI::tipoGenerador() {
	std::cout << "Escribe x para el generador congruencial mixto." << '\n';
	std::cout << "Escribe m para el generador congruencial multiplicativo." << '\n';
	std::cout << "> ";
}

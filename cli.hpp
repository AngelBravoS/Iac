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

// command-line interface (CLI)
#ifndef _CLI_HPP_
#define _CLI_HPP_

#include "calculos.hpp"
#include <iostream>

class CLI {
	public:
        //======== setters y getters ========
		char getOpcionSeleccionada();
		void setOpcionSeleccionada(char respuestaUsuarioPublica);
        void mostrarSecuencia();
        void mostrarComprobacion();
		//======== funciones de menu ========
		void introduccion();
		void acercaDe();
		void ayuda();
		//void eleccion();
		void eleccion(unsigned int i);
        void hasElegido();
		//======== Textos de menús ========
		void listadOpcionesPricipales();
        void menuPrincipal();
        void tipoGenerador();
        void menuCongruencial(unsigned int a, unsigned int b, unsigned int m, unsigned int X0);
        void menuCongruencial(unsigned int a, unsigned int m, unsigned int X0);
	protected:
        char opciones[2];
		char respuestaUsuario;
		bool archivoValido;
        bool bValorNulo;
};

#endif /* _CLI_HPP_ */



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

#ifndef _MENUIA_HPP_
#define _MENUIA_HPP_

#include "cli.hpp"
#include "calculosIA.hpp"
#include <fstream>

class MenuIA : public CLI {
	public:
		//Calculos ia (bool, unsigned int);
		//========  funciones de muestreo ======== 
		void menuSecundario();
		void menuCongruencial();
		void menuColasExponencial();
		void periodo();
		unsigned int preguntarNumeroColumnas();
		bool preguntarDesdeArchivoOTeclado();
		void verificarArchivo();
	protected:
		bool archivoValido;
};

#endif /* _MENUIA_HPP_ */
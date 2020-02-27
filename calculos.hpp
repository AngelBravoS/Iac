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

#include "funcMatematicasBasicas.hpp"
#include "distribucionesDiscretas.hpp"

class Calculos {
    public:
    //======== constructor ========
    Calculos ();
    Calculos (unsigned int a, unsigned int b,
                                     unsigned int m, unsigned int X0);
    Calculos (unsigned int a, unsigned int b,
                                     unsigned int m);
    //========  GC Mixto y Multiplicativo ========
    unsigned int congruencial(unsigned int X0);
    //========  funciones  ========
    void crearSecuencia();
    unsigned int comprobarPeriodo ();
    protected:
    unsigned int a;
    unsigned int b;
    unsigned int m;
    unsigned int X0;
    bool periodoCompleto;
    bool periodoMaximo;
    //unsigned int *vector;
};

#endif // CALCULOS_HPP_INCLUDED

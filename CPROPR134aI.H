/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

inline Foam::scalar Foam::CPROPR134a::rho(scalar p, scalar T) const
{
    return rho_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::pv(scalar p, scalar T) const
{
    return pv_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::hl(scalar p, scalar T) const
{
    return hl_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::Cp(scalar p, scalar T) const
{
    return Cp_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::h(scalar p, scalar T) const
{
    return h_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::Cpg(scalar p, scalar T) const
{
    return Cpg_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::B(scalar p, scalar T) const
{
    return B_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::mu(scalar p, scalar T) const
{
    return mu_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::mug(scalar p, scalar T) const
{
    return mug_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::K(scalar p, scalar T) const
{
    return K_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::Kg(scalar p, scalar T) const
{
    return Kg_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::sigma(scalar p, scalar T) const
{
    return sigma_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::D(scalar p, scalar T) const
{
    return D_.f(p, T);
}


inline Foam::scalar Foam::CPROPR134a::D(scalar p, scalar T, scalar Wb) const
{
    return D_.f(p, T, Wb);
}


// ************************************************************************* //

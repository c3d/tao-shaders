// *****************************************************************************
// sinuous.doxy.h                                                  Tao3D project
// *****************************************************************************
//
// File description:
//
//
//
//
//
//
//
//
// *****************************************************************************
// This software is licensed under the GNU General Public License v3
// (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// (C) 2011-2013, Catherine Burvelle <catherine@taodyne.com>
// (C) 2011-2014,2019, Christophe de Dinechin <christophe@dinechin.org>
// (C) 2011-2013, Jérôme Forissier <jerome@taodyne.com>
// (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// (C) 2011, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// *****************************************************************************
// This file is part of Tao3D
//
// Tao3D is free software: you can r redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Tao3D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Tao3D, in a file named COPYING.
// If not, see <https://www.gnu.org/licenses/>.
// *****************************************************************************
/**
 * @~english
 * @taomoduledescription{Sinuous, Sinuous effect}
 * <tt>import Sinuous</tt> - Generate a changing ribbon.@n
 *
 * This module allows you to create a changing picture with some sinuous effects.
 *
 * The following code shows an example of this module.
 *
 * @~french
 * @taomoduledescription{Sinuous, Effet sinusoïdal}
 * <tt>import Sinuous</tt> - Un <em>fragment shader</em> GLSL qui génère une image avec des formes
 * ondulantes.@n
 *
 * Un exemple :
 * @~
 * @include sinuous.ddd
 *
 * @image html sinuous.png "Sinuous effect"
 *
 * @endtaomoduledescription{Sinuous}
 * @{
 */

/**
 * @~english
 * Draw sinuous shape.
 *
 * Draw four interconnected sinuous shape at the given coordinates.
 * @a X and @a Y indicate the center of the shape.
 * @a W and @a H are its dimensions.
 *
 * @~french
 * Affiche l'image "Sinuous"
 *
 * @a X et @a Y est le centre de l'image. Ses dimensions sont @a W et @a H.
 **/
sinuous_shape(X:real, Y:real, W:real, H:real);

/**
* @}
*/

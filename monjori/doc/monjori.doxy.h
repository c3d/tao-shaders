// *****************************************************************************
// monjori.doxy.h                                                  Tao3D project
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
 * @taomoduledescription{Monjori, Monjori shader}
 * <tt>import Monjori</tt> - GLSL fragment shader to generate a changing picture.@n
 *
 * Written by Mic http://badc0de.jiggawatt.org for the demoscene intro
 * Monjori. Adapted from
 * http://www.iquilezles.org/apps/shadertoy/?p=monjori. Used with
 * permission.
 *
 * An example:
 *
 * @~french
 * @taomoduledescription{Monjori, Effet "Monjori"}
 * <tt>import Monjori</tt> - Un <em>fragment shader</em> GLSL qui génère des formes géométriques
 * changeantes.@n
 *
 * Écrit par Mic http://badc0de.jiggawatt.org pour la
 * démo Monjori. Adaptation de
 * http://www.iquilezles.org/apps/shadertoy/?p=monjori. Utilisé avec
 * permission.
 *
 * Un example:
 * @~
 @code
import Monjori

texture_transform
    translate 0.5, 0.5, 0
    rotatez 5*time
    translate -0.5, -0.5, 0
monjori (time mod 5000) * 0.1
rounded_rectangle 0, 0, window_width*80%, window_height*80%, 20
 @endcode
 *
 * @image html "monjori_example.png" "Monjori"
 *
 * @endtaomoduledescription{Monjori}
 * @{
 */


/**
 * @~english
 * Create the Monjori texture
 *
 * The picture changes slowly as the value of @p p changes.
 * You may use, for instance, the current time or the mouse position
 * to compute the value of @p p.
 *
 * @~french
 * Crée la texture "Monjori"
 *
 * L'image change pour chaque valeur de @p p. Vous pouvez par exemple
 * utiliser l'heure ou la position de la souris comme base pour la valeur
 * de @p p.
 */
monjori(p:real);

/**
 * @}
 */

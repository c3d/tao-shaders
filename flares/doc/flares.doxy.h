// *****************************************************************************
// flares.doxy.h                                                   Tao3D project
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
 * @taomoduledescription{Flares, Flares shader}
 * <tt>import Flares</tt> - GLSL fragment shader to generate a changing picture.@n
 *
 * An example:
 * @~french
 * @taomoduledescription{Flares, Effet "Flares"}
 * <tt>import Flares</tt> - Un <em>fragment shader</em> GLSL qui génère des formes géométriques
 * changeantes.@n
 *
 * Un example:
 * @~
 @code
import Flares

Nb -> 6
S -> window_height * 30%
R -> window_height * 35%
Speed -> 0.5

animated_star 0, M:integer -> nil
animated_star N:integer, M:integer ->
    locally
        flares 400*time, 2.0
        Sx -> R * cos(2 * pi * (real N/M) + Speed * time)
        Sy -> R * sin(2 * pi * (real N/M) + Speed * time)
        star Sx, Sy, S, S, 5, 0.4
    animated_star N-1, M
animated_star N:integer -> animated_star N, N

animated_star Nb
 @endcode
 *
 * @image html "flares_example.png" "Flares"
 *
 * @endtaomoduledescription{Flares}
 * @{
 */


/**
 * @~english
 * Create the Flares texture
 *
 * The picture changes as the value of @p p changes.
 * You may use, for instance, the current time or the mouse position
 * to compute the value of @p p.
 *
 * @p saturation is a positive real value to control the color. With
 * 0.0, you get a black-and-white picture. With 1.0 or 2.0 you get
 * a much more colorful picture.
 *
 * @~french
 * Crée la texture "Flares"
 *
 * L'image change pour chaque valeur de @p p. Vous pouvez par exemple
 * utiliser l'heure ou la position de la souris comme base pour la valeur
 * de @p p.
 *
 * @p saturation est une valeur réelle positive qui permet de contrôler
 * la saturation de la couleur. 0.0 donne une image en noir et blanc, avec
 * 1.0 ou 2.0 vous obtenez une image riche en couleurs.
 */
flares(p:real, saturation:real);

/**
 * @}
 */

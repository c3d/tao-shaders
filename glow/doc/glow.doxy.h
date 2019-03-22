// *****************************************************************************
// glow.doxy.h                                                     Tao3D project
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
 * @taomoduledescription{Glow, Glow}
 * <tt>import Glow</tt> - Generate a glow effect on the current picture.@n
 *
 * This module allows you to add some glow on the current texture.
 * The following code shows an example of this module.
 * @include glow.ddd
 *
 * @image html glow.png "The glow effect"
 * @endtaomoduledescription{Glow}
 *
 * @~french
 * @taomoduledescription{Glow, Effet néon}
 * <tt>import Glow</tt> - Ajoute un effet néon sur une image.@n
 *
 * Grâce à ce module, vous pouvez ajouter un effet de lumière sur la texture
 * en cours. Les parties les plus claires apparaîssent comme si elles
 * émettaient de la lumière (halo lumineux).
 * Voici une illustration de cet effet.
 * @include glow.ddd
 *
 * @image html glow.png "L'effet néon"
 * @endtaomoduledescription{Glow}
 *
 * @~
 * @{
 */

/**
 * @~english
 * Applies some radial glow on the current picture.
 *
 * Add glow on the current texture. This effect is generated thanks to a radial blur on each pixel.
 *
 * @param n number of the samples of the glow
 * @param l length of the glow
 * @param g ratio of the glow
 * @param s ratio of the shadow
 * @param w width of the picture
 * @param h height of the picture
 *
 * @note The more the number of samples is raised, the more the quality of the glow increases, on the contrary of the performances.
 *
 * @~french
 * Applique un effet de rayonnement radial sur la texture courante.
 *
 * L'effet de lumière est créé en floutant l'image puis en superposant
 * partiellement l'image floutée et l'image originale. Les paramètre de cette
 * primitive contrôlent comment le floutage est fait (@p n, @p l, @p w, @p h)
 * et comment il est mélangé à l'image (@p g, @p s). Pour un bon résultat,
 * utiliser une fraction de la taille de la texture pour @p w et @p h, comme
 * exemple (@p texture_width / 8) et (@p texture_height / 8).
 * La finesse du halo est meilleure si @p n est élevé, mais augmenter ce
 * paramètre demande plus de temps de calcul.
 *
 * @param n Nombre de points à utiliser autour de chaque pixel pour créer le flou.
 * @param l Ampleur du halo.
 * @param g Quantité de halo dans l'image finale (0.0 à 1.0).
 * @param s Quantité de l'image originale dans l'image finale (0.0 à 1.0).
 * @param w Largeur.
 * @param h Hauteur.
 */
radial_glow(n:real, l:real, g:real, s:real, w:real, h:real);

/**
/**
* @}
*/

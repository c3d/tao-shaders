/**
 * @~english
 * @taomoduledescription{Glow, Glow}
 *
 * Generate a glow effect on the current picture.
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
 *
 * Ajoute un effet néon sur une image.
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
 * exemple (@ref texture_width / 8) et (@ref texture_height / 8).
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

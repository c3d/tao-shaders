/**
 * @~english
 * @taomoduledescription{Sinuous, Sinuous effect}
 *
 * Generate a changing ribbon.
 *
 * This module allows you to create a changing picture with some sinuous effects.
 *
 * The following code shows an example of this module.
 *
 * @~french
 * @taomoduledescription{Sinuous, Effet sinusoïdal}
 *
 * Un <em>fragment shader</em> GLSL qui génère une image avec des formes
 * ondulantes.
 *
 * Un exemple :
 * @~
 * @include sinuous.ddd
 *
 * @image html sinuous.png "Sinuous"
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

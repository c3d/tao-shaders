/**
 * @~english
 * @taomoduledescription{Sinuous, Sinuous effect}
 *
 * <tt>import Sinuous</tt> - Generate a changing ribbon.\n
 *
 * This module allows you to create a changing picture with some sinuous effects.
 *
 * The following code shows an example of this module.
 *
 * @~french
 * @taomoduledescription{Sinuous, Effet sinusoïdal}
 *
 * <tt>import Sinuous</tt> - Un <em>fragment shader</em> GLSL qui génère une image avec des formes
 * ondulantes.\n
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

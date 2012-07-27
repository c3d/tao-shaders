/**
 * @~english
 * @taomoduledescription{Sparks, Sparks}
 *
 * Generate a changing picture with some sparks.
 *
 * This module allows you to create a changing picture with some sparks.
 * This effect is adapted from a shader written by Ashima Arts and Stefan Gustavson.
 * Used with permission.
 *
 * The following code shows an example of this module.
 *
 * @code
import Sparks

sparks_effect ->
    ww -> window_width
    texture ""
    // Sparks color
    color 0.0, 0.7, 1.0, 1.0
    // Background color
    sparks_color 0.1, 0.1, 0.1, 1.0
    // Enable sparks effect
    sparks page_time * 0.3, 1000, 1000
    // Draw shape
    rotatex page_time * 20
    torus 0, 0, 0, ww, ww, ww / 2, 50, 50, 0.3

sparks_effect
 * @endcode
 *
 * @image html sparks.png "Sparks effect"
 *
 * @~french
 * @taomoduledescription{Sparks, Effet éclairs}
 *
 * Un <em>fragment shader</em> GLSL qui affiche des éclairs.
 * Adapté d'un @a shader écrit par Ashima Arts et Stefan Gustavson.
 *
 * Voici un exemple.
 *
 * @code
import Sparks

effet_éclairs ->
    ww -> window_width
    texture ""
    // Couleur des éclairs
    color 0.0, 0.7, 1.0, 1.0
    // Couleur du fond
    sparks_color 0.1, 0.1, 0.1, 1.0
    // Activation de l'effet
    sparks page_time * 0.3, 1000, 1000
    // Dessin d'un tore
    rotatex page_time * 20
    torus 0, 0, 0, ww, ww, ww / 2, 50, 50, 0.3

effet_éclairs
 * @endcode
 *
 * @image html sparks.png "Effet éclairs"
 * @~
 *
 * @endtaomoduledescription{Sparks}
 * @{
 */

/**
 * @~english
 * Sets the backround color of the picture.
 * @~french
 * Définit la couleur de fond de l'image.
 */
sparks_color(r:real, g:real, b:real, a:real);

/**
 * @~english
 * Applies sparks effect.
 * The picture changes slowly as the value of @p t changes. Typically, use
 * @ref time or @ref page_time for this parameter.
 * (@p sx, @p sy) are scaling factors ; try 1000.
 * @~french
 * Active l'effet éclairs.
 * L'image change pour chaque valeur de @p t. Vous pouvez utiliser @ref time
 * ou @ref page_time pour ce paramètre.
 * (@p sx, @p sy) sont des facteurs de dimension ; essayez 1000.
 */
sparks(t:real, sx:real, sy:real);

/**
* @}
*/

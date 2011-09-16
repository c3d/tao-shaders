/**
 * @defgroup Sparks Sparks
 * @ingroup Modules
 *
 * Generate a changing picture with some sparks.
 *
 * This module allows you to create a changing picture with some sparks.
 * This effect is adapted from a shader written by Ashima Arts and Stefan Gustavson.
 *
 * The following code shows an example of this module.
 * @include sparks.ddd
 *
 * @image html sparks.png "Output from sparks.ddd"
 * @{
 */

/**
 * Sets the font color of the picture.
 *
 * Specify the font color (@p r, @p g, @p b, @p a) of the picture.
 */
sparks_color(r:real, g:real, b:real, a:real);

/**
 * Applies sparks effect
 *
 * Draw the changing picture with a time @p t and a scaling (@p sx, @p sy).
 */
sparks(t:real, sx:real, sy:real);

/**
* @}
*/

/**
 * @defgroup Shading Shading
 * @ingroup Modules
 *
 * Apply some shading effects.
 *
 * This module allows you to add to your scene some nice shading effects.
 * For instance,
 * @include shading.ddd
 *
 * @image html shading.png "Output of shading.ddd"
 * @{
 */

/**
 * Install the sinuous shader in the current drawing context.
 */
sinuous_shader();

/**
 * Draw four interconnected sinuous shape at the given coordinates.
 * @a X and @a Y indicate the center of the shape.
 * @a W and @a H are its dimensions.
 */
sinuous_shape(real X, real Y, real W, real H);

/**
   @}
*/

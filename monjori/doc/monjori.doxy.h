/**
 * @defgroup Monjori Monjori shader
 * @ingroup Modules
 *
 * GLSL fragment shader to generate a changing picture. Written
 * by Mic http://badc0de.jiggawatt.org for the demoscene intro
 * Monjori. Adapted from
 * http://www.iquilezles.org/apps/shadertoy/?p=monjori.
 *
 * 
 * An example:
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
 * @image html "monjori_example.png" "Example"
 *
 * @{
 */


/**
 * Create the Monjori texture
 *
 * The picture changes slowly as the value of @p p changes.
 * You may use, for instance, the current time or the mouse position
 * to compute the value of @p p.
 */
monjori(p:real);

/**
 * @}
 */

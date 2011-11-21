/**
 * @defgroup Flares Flares shader
 * @ingroup Modules
 *
 * GLSL fragment shader to generate a changing picture.
 *
 * 
 * An example:
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
 * @image html "flares_example.png" "Example"
 *
 * @{
 */


/**
 * Create the Flares texture
 *
 * The picture changes as the value of @p p changes.
 * You may use, for instance, the current time or the mouse position
 * to compute the value of @p p.
 *
 * @p saturation is a positive real value to control the color. With
 * 0.0, you get a black-and-white picture. With 1.0 or 2.0 you get
 * a much more colorful picture.
 */
flares(p:real, saturation:real);

/**
 * @}
 */

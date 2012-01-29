/**
 * @~english
 * @taomoduledescription{Flares, Flares shader}
 *
 * GLSL fragment shader to generate a changing picture.
 *
 * An example:
 * @~french
 * @taomoduledescription{Flares, Effet "Flares"}
 *
 * Un <em>fragment shader</em> GLSL qui génère des formes géométriques
 * changeantes.
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

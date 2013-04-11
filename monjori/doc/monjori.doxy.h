/**
 * @~english
 * @taomoduledescription{Monjori, Monjori shader}
 *
 * <tt>import Monjori</tt> - GLSL fragment shader to generate a changing picture. Written
 * by Mic http://badc0de.jiggawatt.org for the demoscene intro
 * Monjori. Adapted from
 * http://www.iquilezles.org/apps/shadertoy/?p=monjori. Used with
 * permission.
 *
 * An example:
 *
 * @~french
 * @taomoduledescription{Monjori, Effet "Monjori"}
 *
 * <tt>import Monjori</tt> - Un <em>fragment shader</em> GLSL qui génère des formes géométriques
 * changeantes. Écrit par Mic http://badc0de.jiggawatt.org pour la
 * démo Monjori. Adaptation de
 * http://www.iquilezles.org/apps/shadertoy/?p=monjori. Utilisé avec
 * permission.
 *
 * Un example:
 * @~
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
 * @image html "monjori_example.png" "Monjori"
 *
 * @endtaomoduledescription{Monjori}
 * @{
 */


/**
 * @~english
 * Create the Monjori texture
 *
 * The picture changes slowly as the value of @p p changes.
 * You may use, for instance, the current time or the mouse position
 * to compute the value of @p p.
 *
 * @~french
 * Crée la texture "Monjori"
 *
 * L'image change pour chaque valeur de @p p. Vous pouvez par exemple
 * utiliser l'heure ou la position de la souris comme base pour la valeur
 * de @p p.
 */
monjori(p:real);

/**
 * @}
 */

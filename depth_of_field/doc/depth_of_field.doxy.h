/**
 * @~english
 * @taomoduledescription{DepthOfField, Depth Of Field Effect}
 *
 * Depth Of Field Effect.\n
 *
 * This module simulates the depth blur that occurs when objects are filmed through
 * a lens with a limited depth of field.
 *
 * The following example draws two pool balls and changes focus from the
 * nearest to the farthest ball, alternatively. The ball that is not on the
 * focus plane appears blurry.
 * <a href="http://www.youtube.com/watch?feature=player_detailpage&v=hpRpIVauG40">Check the video on YouTube</a>.
 *
 * @image html "pool_balls.png" "Simulation of a limited depth of field"
 *
 * Here is the source code for the above example:
 * @include pool_balls.ddd
 *
 * @endtaomoduledescription{DepthOfField}
 *
 * @~french
 * @taomoduledescription{DepthOfField, Effet de profondeur de champ}
 *
 * Effet de profondeur de champ.\n
 *
 * Ce module simule le flou qui apparaît sur une image lorsqu'on filme des
 * objets avec un objectif dont la profondeur de champ est limitée.
 *
 * L'exemple suivant affiche deux boules de billard et fait la mise au point
 * alternativement sur la plus proche, puis la plus lointaine. La boule qui
 * ne se trouve pas dans le plan focal apparaît floue.
 * <a href="http://www.youtube.com/watch?feature=player_detailpage&v=hpRpIVauG40">La vidéo sur YouTube</a>.
 *
 * @image html "pool_balls.png" "Simulation d'une profondeur de champ limitée"
 *
 * Voici le code source pour l'exemple ci-dessus :
 * @include pool_balls.ddd
 *
 * @endtaomoduledescription{DepthOfField}
 * @~
 * @{
 */

/**
 * @~english
 * Renders objects into a texture and applies depth blur.
 *
 * By default, the focus is set on the object that is at the center of the
 * texture. This may be changed by setting @ref DOF_AUTOFOCUS and
 * @ref DOF_FOCAL_DEPTH.
 *
 * @param W The texture width in pixels.
 * @param H The texture height in pixels.
 * @param Body The code to execute and draw into the texture.
 *
 * @~french
 * Affiche une scène dans une texture et applique l'effet de flou lié à la
 * profondeur de champ.
 *
 * Par défaut, la mise au point se fait sur l'objet qui se trouve au centre de
 * la texture. Ce comportement peut être changé grâce à @ref DOF_AUTOFOCUS and
 * @ref DOF_FOCAL_DEPTH.
 *
 * @param W La largeur de la texture en pixels.
 * @param H La hauteur de la texture en pixels.
 * @param Body Le code à exécuter et à afficher dans la texture.
 *
 * @~
 * @code
import DepthOfField

blue_star ->
  line_width 0
  color "white", 0.02
  rectangle 0, 0, 105, 105
  color "lightblue"
  star 0, 0, 100, 100, 5, 0.7
  color 1, 1, 1, 0
  line_color "black"
  line_width 1
  circle 0, 0, 20

color "white"
dof_frame_texture 300, 200,
  locally
    translate -100, 0, -150
    blue_star
  blue_star
rectangle 0, 0, 300, 200
 * @endcode
 */
dof_frame_texture(W:real, H:real, Body:code);

/**
 * @~english
 * Enables (1) or disables (0) autofocus mode. When enabled (the default),
 * focus is made on the object that is at the center of the texture. All objects
 * in the scene, that are at the same distance from the camera are in focus.
 * When you disable autofocus, you have to set the focal depth manually with
 * @ref DOF_FOCAL_DEPTH.
 * @~french
 * Active (1) ou désactive (0) l'autofocus. Lorsque celui-ci est actif, la mise
 * au point se fait sur l'objet qui se trouve au centre de l'image. Tous les
 * objets qui se trouvent à la même distance de la caméra que cet objet central
 * sont nets. Si vous désactivez l'autofocus, vous devez définit la distance
 * focale manuallement grâce à @ref DOF_FOCAL_DEPTH.
 */
integer DOF_AUTOFOCUS = 1;

/**
 * @~english
 * The distance where objects appear sharp (in focus).
 * @~french
 * La distance à laquelle les objets sont nets.
 */
real DOF_FOCAL_DEPTH = 2.0025;

/**
 * @~english
 * The focal length of the virtual camera lens.
 * For the purpose of the depth of field effect, increasing the focal length
 * decreases the depth of field: the in-focus range is smaller and objects
 * become blurry more rapidly.
 * @~french
 * La distance focale de l'objectif de la caméra virtuelle.
 * Lorsque la distance focale augmente, la profondeur de champ diminue. La
 * zone de netteté devient moins étendue, et les objets deviennent flou
 * plus rapidement lorsqu'ils sortent de cette zone.
 */
real DOF_FOCAL_LENGTH = 80.0;

/**
 * @~english
 * Defines the f-stop of the virtual camera lens.
 * When the value is increased, the depth of field is also increased.
 * @~french
 * Définit l'ouverture de l'objectif virtuel.
 * Lorsque cette valeur augmente, la profondeur de champ augmente également.
 * @~
 * @see DOF_FOCAL_LENGTH
 */
real DOF_FSTOP = 8.0;

/**
 * @~english
 * Enables (1) or disables (0) focus hints.
 * Use this variable for debugging.
 * When set to 1:
 * - In-focus areas are shown with a blueish tint,
 * - Out-of-focus areas are shown with an orange tint,
 * - Points at the focal distance are shown in orange.
 * @~french
 * Active (1) ou désactive (0) les indications de netteté.
 * Cette variable sert à la mise au point.
 * Lorsque cette valeur vaut 1 :
 * - La zone de netteté est teintée en bleu,
 * - Les éléments hors de la zone de netteté sont teinté en orange,
 * - Les points qui se trouvent à la distance de netteté optimale sont
 *   affichés en orange.
 */
integer DOF_SHOWFOCUS = 0;

/**
 * @}
 */

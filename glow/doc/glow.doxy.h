/**
 * @taomoduledescription{Glow, Glow}
 *
 * Generate a glow effect on the current picture.
 *
 * This module allows you to add some glow on the current texture.
 * The following code shows an example of this module.
 * @include glow.ddd
 *
 * @image html glow.png "Output from glow.ddd"
 * @endtaomoduledescription{Glow}
 * @{
 */

/**
 * Applies some radial glow on the current picture.
 *
 * Add glow on the current texture. This effect is generated thanks to a radial blur on each pixel.
 *
 * @param n number of the samples of the glow
 * @param l length of the glow
 * @param g ratio of the glow
 * @param s ratio of the shadow
 * @param w width of the picture
 * @param h height of the picture
 *
 * @note The more the number of samples is raised, the more the quality of the glow increases, on the contrary of the performances.
 */
radial_glow(n:real, l:real, g:real, s:real, w:real, h:real);

/**
/**
* @}
*/

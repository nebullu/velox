



/*
 * Outside alignments (FL_ALIGN_INSIDE is not set):

               TOP_LEFT        TOP       TOP_RIGHT
               +---------------------------------+
       LEFT_TOP|                                 |RIGHT_TOP
               |                                 |
           LEFT|             CENTER              |RIGHT
               |                                 |
    LEFT_BOTTOM|                                 |RIGHT_BOTTOM
               +---------------------------------+
               BOTTOM_LEFT   BOTTOM   BOTTOM_RIGHT

*/

/*
 * Inside alignments (FL_ALIGN_INSIDE is set):

               +---------------------------------+
               |TOP_LEFT       TOP      TOP_RIGHT|
               |                                 |
               |LEFT         CENTER         RIGHT|
               |                                 |
               |BOTTOM_LEFT  BOTTOM  BOTTOM_RIGHT|
               +---------------------------------+
*/
enum class Align {
    TOP_LEFT,
    TOP,
    TOP_RIGHT,
    LEFT_TOP,
    LEFT,
    LEFT_BOTTOM,
    CENTER,
    RIGHT_TOP,
    RIGHT,
    RIGHT_BOTTOM,
    BOTTOM_LEFT,
    BOTTOM,
    BOTTOM_RIGHT
};

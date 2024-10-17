#include <stdint.h>

typedef uint32_t Color;

/*

   VColor -> 0xrrggbbii
                | | | |
                | | | +- drawing colors
                | | +--- blue  8bit
                | +----- green 8bit
                +------- red   8bit

*/

// standart colors. These are used as default colors in component;
const Color FG_COLOR = 0;                  // the default foregroundcolor used for labels and text
const Color BG_COLOR = 0x00000007;         // 7  the default backgroundcolor used for text, list, components
const Color INACTIVE_COLOR = 0x00000008;   // 8  the inactive foregroundcolor
const Color ACTIVE_COLOR = 0x0000000F;     // 15 the default selection/highlight color

const Color DARK_1 = 0x0000002F; // 47
const Color DARK_2 = 0x0000002D; // 45
const Color DARK_3 = 0x00000027; // 39


const Color WHITE = 0x255;
const Color BLACK = 0x00000000;    // 56
const Color RED = 0x0000002F;      // 88
const Color GREEN = 0x0000002D;    // 63
const Color BLUE = 0x00000027;     // 216

// returns the 24-bit color value
inline Color rgb_color(uint8_t r, uint8_t g, uint8_t b) {
    if (!r && !g && !b) return BLACK;
    else return (Color)(((((r << 8) | g) << 8) | b) << 8);
}

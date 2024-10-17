
enum class BoxType {
    NO_BOX,
    FLAT_BOX,
    SHADOW_BOX,
    ROUNDED_BOX,

    /*
    UP_BOX,
    DOWN_BOX,

    UP_FRAME,
    DOWN_FRAME,
    ENGRAVED_FRAME,
    EMBOSSED_FRAME,
    OVAL_FRAME,
    */
};

inline BoxType frame_down(BoxType t) {
    return (BoxType)((t < BoxType::ROUNDED_BOX) ? (unsigned int)t : ((unsigned int)t | 1));
}

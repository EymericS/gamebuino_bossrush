#include "GBTools.h"

void GBTools::printCentered(String _text, int _axisXOffset, int _axisYOffset) {
    uint16_t textWidth, textHeight;

    gb.display.getTextBounds(_text.c_str(), &textWidth, &textHeight);
    gb.display.cursorX = gb.display.width() / 2 - textWidth / 2 + _axisXOffset;
    gb.display.cursorY = gb.display.height() / 2 - textHeight / 2 + _axisYOffset;
    gb.display.print(_text);
}
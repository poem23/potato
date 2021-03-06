#pragma once

struct attr_color
{
    unsigned char rgbBlue;
    unsigned char rgbGreen;
    unsigned char rgbRed;
    unsigned char rgbAlpha;
    attr_color()
    {
        rgbAlpha = 255;
        rgbBlue = 0;
        rgbGreen = 0;
        rgbRed = 0;
    }
};

struct attr_border
{
    style_border border;
    int width;
    attr_color color;

    attr_border()
    {
        border = borderNone;
        width = 0;
    }
};

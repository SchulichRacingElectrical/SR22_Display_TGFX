// 4.21.3 0x8c89027c
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_togglebutton_medium_rounded_off_light[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_OFF_LIGHT_ID = 0, Size: 110x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_togglebutton_medium_rounded_on_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_ON_NORMAL_ID = 1, Size: 110x50 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_togglebutton_medium_rounded_off_light, 0, 110, 50, 10, 9, 43, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 32, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_togglebutton_medium_rounded_on_normal, 0, 110, 50, 57, 9, 43, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 32, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase

  #define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>

TTGOClass *ttgo;

void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_WHITE);
    ttgo->tft->setTextColor(TFT_BLACK, TFT_WHITE);
    ttgo->tft->setTextFont(4);

    int textWidth = ttgo->tft->textWidth("Alyana");
    int textHeight = ttgo->tft->fontHeight();

    int xPos = (240 - textWidth) / 2;
    int yPos = (240 - textHeight) / 2;

    ttgo->tft->drawString("Alyana",  xPos, yPos);


}

void loop()
{ 
}

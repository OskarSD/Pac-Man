#include "text_sprite.h"

//note: only numbers from 0 - 9 and letters from a - z (small) will work properly
//this is because of the sprite sheet being used and the way things are calculated
//when finding the matching number/letter

Text_sprite::Text_sprite(float x, float y) {
    this->_xPos = x;
    this->_yPos = y;

    image = IMG_Load("assets/font_sheet.png");
    texture = SDL_CreateTextureFromSurface(Window::renderer, image);
}

//takes content and turns it into a sprite
void Text_sprite::drawText(std::string content, double xs, double ys) {

    for (int i = 0; i < content.size(); i++) {
        
        int k = 0;
        int j = 0;

        char current = content[i];

        //for numbers between 0 and 9
        if (isdigit(content[i])) {
            k = current - '0';
        }

        //for letters
        else {

            k = (int)current;
            k = k - 45;

            if (k > 51) {
                k = k - 52;
                j = 2;
            }
             
            else if (k > 25) {
                k = k - 26;
                j = 1;
            }

        }

        SDL_Rect srcrect = { 38.46 * k, 46 * j, 38.46, 46 };
        SDL_Rect dstrect = { _xPos + (xs * i), _yPos, xs, ys };

        SDL_RenderCopy(Window::renderer, texture, &srcrect, &dstrect);

    }

}
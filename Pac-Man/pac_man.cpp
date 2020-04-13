#include "pac_man.h"

Rectangle Pac_man::_rectangle(int x, int y) {
    Rectangle rect_pac_man(32, 32, x, y, "assets/pogfish.jpg");
    return rect_pac_man;
}

//movement logic
void Pac_man::movement(int intCollision) {

    _intCollision = intCollision;

    //std::cout << intCollision << std::endl;
    bool upC = false;
    bool leftC = false;
    bool downC = false;
    bool rightC = false;

    //turns intCollision into usable bools
    switch (_intCollision) {
    case 1111:
        //up, left, down, right
        upC = true, leftC = true, downC = true, rightC = true;
        break;
    case 1110:
        //up, left, down
        upC = true, leftC = true, downC = true;
        break;
    case 1100:
        //up, left
        upC = true, leftC = true;
        break;
    case 1001:
        //up, right
        upC = true, rightC = true;
        break;
    case 1000:
        //up
        upC = true;
        break;
    case 111:
        //left, down, right
        leftC = true, downC = true, rightC = true;
        break;
    case 110:
        //left, down
        leftC = true, downC = true;
        break;
    case 101:
        //left, right
        leftC = true, rightC = true;
        break;
    case 100:
        //left
        leftC = true;
        break;
    case 11:
        //down, right
        downC = true, rightC = true;
        break;
    case 10:
        //down
        downC = true;
        break;
    case 1:
        //right
        rightC = true;
        break;
    case 0:
        //no collision
        break;
    }

    //idle
    if (_currentDirection == 0) {

        if (_upcomingDirection == 1) {
            _currentDirection = 1;
        } else if (_upcomingDirection == 2) {
            _currentDirection = 2;
        } else if (_upcomingDirection == 3) {
            _currentDirection = 3;
        } else if (_upcomingDirection == 4) {
            _currentDirection = 4;
        }

        //up
    } else if (_currentDirection == 1) {

        if (_upcomingDirection == 3) {
            _currentDirection = 3;
        } else if (_upcomingDirection == 2 && !leftC) {
            _currentDirection = 2;
        } else if (_upcomingDirection == 4 && !rightC) {
            _currentDirection = 4;
        }

        //left
    } else if (_currentDirection == 2) {

        if (_upcomingDirection == 4) {
            _currentDirection = 4;
        } else if (_upcomingDirection == 1 && !upC) {
            _currentDirection = 1;
        } else if (_upcomingDirection == 3 && !downC) {
            _currentDirection = 3;
        }

        //down
    } else if (_currentDirection == 3) {

        if (_upcomingDirection == 1) {
            _currentDirection = 1;
        } else if (_upcomingDirection == 2 && !leftC) {
            _currentDirection = 2;
        } else if (_upcomingDirection == 4 && !rightC) {
            _currentDirection = 4;
        }

        //right
    } else if (_currentDirection == 4) {

        if (_upcomingDirection == 2) {
            _currentDirection = 2;
        } else if (_upcomingDirection == 1 && !upC) {
            _currentDirection = 1;
        } else if (_upcomingDirection == 3 && !downC) {
            _currentDirection = 3;
        }

    }

    if (_currentDirection == 1 && !upC) {
        _yPos -= 2;
    } else if (_currentDirection == 2 && !leftC) {
        _xPos -= 2;
    } else if (_currentDirection == 3 && !downC) {
        _yPos += 2;
    } else if (_currentDirection == 4 && !rightC) {
        _xPos += 2;
    }

    _rectangle(_xPos, _yPos).draw();

}

/*
void Pac_man::display() {

    if (_currentDirection == 1 && !_isUpCollision) {
        _yPos -= 2;
    } else if (_currentDirection == 2 && !_isLeftCollision) {
        _xPos -= 2;
    } else if (_currentDirection == 3 && !_isDownCollision) {
        _yPos += 2;
    } else if (_currentDirection == 4 && !_isRightCollision) {
        _xPos += 2;
    }

    _rectangle(_xPos, _yPos).draw();

}
*/

void Pac_man::pollEvents(SDL_Event& event) {

    switch (event.type) {

    case SDL_KEYDOWN:

        switch (event.key.keysym.sym) {

        case SDLK_UP:
            _upcomingDirection = 1;
            break;
        case SDLK_LEFT:
            _upcomingDirection = 2;
            break;
        case SDLK_DOWN:
            _upcomingDirection = 3;
            break;
        case SDLK_RIGHT:
            _upcomingDirection = 4;
            break;

        }

    default:
        break;

    }

}


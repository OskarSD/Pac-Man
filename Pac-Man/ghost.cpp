#include "ghost.h"

Ghost::Ghost(std::string color, int x, int y) {
    this->_color = color;
    this->_xPos = x;
    this->_yPos = y;
}

Rectangle Ghost::rectangle(int x, int y, std::string color) {

    Rectangle rect_ghost(32, 32, x, y, animation(color));

    return rect_ghost;

}

std::string Ghost::animation(std::string color) {

    std::string sprite;

    //Inky sprites depending on the amount of frames that has been passed
    //and current direction
    if (color == "Inky") {

        switch (_currentDirection) {
        case 0:
            //idle
            if (animationCount <= 14) {
                sprite = "assets/ib_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/ib_right_2.png";
            }
            break;
        case 1:
            //up sprite
            if (animationCount <= 14) {
                sprite = "assets/ib_up_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/ib_up_2.png";
            }
            break;
        case 2:
            //left sprite
            if (animationCount <= 14) {
                sprite = "assets/ib_left_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/ib_left_2.png";
            }
            break;
        case 3:
            //down sprite
            if (animationCount <= 14) {
                sprite = "assets/ib_down_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/ib_down_2.png";
            }
            break;
        case 4:
            //right sprite
            if (animationCount <= 14) {
                sprite = "assets/ib_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/ib_right_2.png";
            }
            break;
        }

    }

    //Pinky sprites depending on the amount of frames that has been passed
    //and current direction
    else if (color == "Pinky") {

        switch (_currentDirection) {
        case 0:
            //idle
            if (animationCount <= 14) {
                sprite = "assets/pb_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/pb_right_2.png";
            }
            break;
        case 1:
            //up sprite
            if (animationCount <= 14) {
                sprite = "assets/pb_up_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/pb_up_2.png";
            }
            break;
        case 2:
            //left sprite
            if (animationCount <= 14) {
                sprite = "assets/pb_left_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/pb_left_2.png";
            }
            break;
        case 3:
            //down sprite
            if (animationCount <= 14) {
                sprite = "assets/pb_down_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/pb_down_2.png";
            }
            break;
        case 4:
            //right sprite
            if (animationCount <= 14) {
                sprite = "assets/pb_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/pb_right_2.png";
            }
            break;
        }

    }

    //Clyde sprites depending on the amount of frames that has been passed
    //and current direction
    else if (color == "Clyde") {

        switch (_currentDirection) {
        case 0:
            //idle
            if (animationCount <= 14) {
                sprite = "assets/cb_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/cb_right_2.png";
            }
            break;
        case 1:
            //up sprite
            if (animationCount <= 14) {
                sprite = "assets/cb_up_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/cb_up_2.png";
            }
            break;
        case 2:
            //left sprite
            if (animationCount <= 14) {
                sprite = "assets/cb_left_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/cb_left_2.png";
            }
            break;
        case 3:
            //down sprite
            if (animationCount <= 14) {
                sprite = "assets/cb_down_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/cb_down_2.png";
            }
            break;
        case 4:
            //right sprite
            if (animationCount <= 14) {
                sprite = "assets/cb_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/cb_right_2.png";
            }
            break;
        }

    }

    //Blinky sprites depending on the amount of frames that has been passed
    //and current direction
    else if (color == "Blinky") {

        switch (_currentDirection) {
        case 0:
            //idle
            if (animationCount <= 14) {
                sprite = "assets/gb_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/gb_right_2.png";
            }
            break;
        case 1:
            //up sprite
            if (animationCount <= 14) {
                sprite = "assets/gb_up_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/gb_up_2.png";
            }
            break;
        case 2:
            //left sprite
            if (animationCount <= 14) {
                sprite = "assets/gb_left_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/gb_left_2.png";
            }
            break;
        case 3:
            //down sprite
            if (animationCount <= 14) {
                sprite = "assets/gb_down_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/gb_down_2.png";
            }
            break;
        case 4:
            //right sprite
            if (animationCount <= 14) {
                sprite = "assets/gb_right_1.png";
            } else if (animationCount <= 30 && animationCount > 14) {
                sprite = "assets/gb_right_2.png";
            }
            break;
        }

    }

    animationCount++;

    //reset
    if (animationCount == 30) {
        animationCount = 0;
    }

    return sprite;

}

void Ghost::movement(int intCollision) {
    //std::cout << intCollision << std::endl;
    bool upC = false;
    bool leftC = false;
    bool downC = false;
    bool rightC = false;

    //turns intCollision into usable bools
    switch (intCollision) {
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

    rectangle(_xPos, _yPos, _color).draw();

}
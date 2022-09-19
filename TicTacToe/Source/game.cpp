#include "game.hpp"
#include "input_manager.hpp"

#include <iostream>


TicTacToe::TicTacToe() : current(1), grid{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}} {
    
    sf::RectangleShape box1(sf::Vector2f(100, 100));
    box1.setFillColor(sf::Color(200, 200, 200, 200));
    box1.setPosition(350, 225);

    sf::RectangleShape box2(sf::Vector2f(100, 100));
    box2.setFillColor(sf::Color(100, 100, 100, 200));
    box2.setPosition(450, 225);

    sf::RectangleShape box3(sf::Vector2f(100, 100));
    box3.setFillColor(sf::Color(200, 200, 200, 200));
    box3.setPosition(550, 225);

    sf::RectangleShape box4(sf::Vector2f(100, 100));
    box4.setFillColor(sf::Color(100, 100, 100, 200));
    box4.setPosition(350, 325);

    sf::RectangleShape box5(sf::Vector2f(100, 100));
    box5.setFillColor(sf::Color(200, 200, 200, 200));
    box5.setPosition(450, 325);

    sf::RectangleShape box6(sf::Vector2f(100, 100));
    box6.setFillColor(sf::Color(100, 100, 100, 200));
    box6.setPosition(550, 325);

    sf::RectangleShape box7(sf::Vector2f(100, 100));
    box7.setFillColor(sf::Color(200, 200, 200, 200));
    box7.setPosition(350, 425);

    sf::RectangleShape box8(sf::Vector2f(100, 100));
    box8.setFillColor(sf::Color(100, 100, 100, 200));
    box8.setPosition(450, 425);

    sf::RectangleShape box9(sf::Vector2f(100, 100));
    box9.setFillColor(sf::Color(200, 200, 200, 200));
    box9.setPosition(550, 425);

    drawable_grid[0][0] = box1;
    drawable_grid[0][1] = box2;
    drawable_grid[0][2] = box3;
    drawable_grid[1][0] = box4;
    drawable_grid[1][1] = box5;
    drawable_grid[1][2] = box6;
    drawable_grid[2][0] = box7;
    drawable_grid[2][1] = box8;
    drawable_grid[2][2] = box9;
}

void TicTacToe::onClick(sf::Vector2i mouse_postion) {
    if (drawable_grid[0][0].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[0][0] == 0) {
        if (current == 1) {
            drawable_grid[0][0].setFillColor(sf::Color(0, 0, 255, 255));
            grid[0][0] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[0][0].setFillColor(sf::Color(255, 0, 0, 255));
            grid[0][0] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[0][1].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[0][1] == 0) {
        if (current == 1) {
            drawable_grid[0][1].setFillColor(sf::Color(0, 0, 255, 255));
            grid[0][1] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[0][1].setFillColor(sf::Color(255, 0, 0, 255));
            grid[0][1] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[0][2].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[0][2] == 0) {
        if (current == 1) {
            drawable_grid[0][2].setFillColor(sf::Color(0, 0, 255, 255));
            grid[0][2] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[0][2].setFillColor(sf::Color(255, 0, 0, 255));
            grid[0][2] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[1][0].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[1][0] == 0) {
        if (current == 1) {
            drawable_grid[1][0].setFillColor(sf::Color(0, 0, 255, 255));
            grid[1][0] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[1][0].setFillColor(sf::Color(255, 0, 0, 255));
            grid[1][0] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[1][1].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[1][1] == 0) {
        if (current == 1) {
            drawable_grid[1][1].setFillColor(sf::Color(0, 0, 255, 255));
            grid[1][1] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[1][1].setFillColor(sf::Color(255, 0, 0, 255));
            grid[1][1] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[1][2].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[1][2] == 0) {
        if (current == 1) {
            drawable_grid[1][2].setFillColor(sf::Color(0, 0, 255, 255));
            grid[1][2] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[1][2].setFillColor(sf::Color(255, 0, 0, 255));
            grid[1][2] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[2][0].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[2][0] == 0) {
        if (current == 1) {
            drawable_grid[2][0].setFillColor(sf::Color(0, 0, 255, 255));
            grid[2][0] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[2][0].setFillColor(sf::Color(255, 0, 0, 255));
            grid[2][0] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[2][1].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[2][1] == 0) {
        if (current == 1) {
            drawable_grid[2][1].setFillColor(sf::Color(0, 0, 255, 255));
            grid[2][1] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[2][1].setFillColor(sf::Color(255, 0, 0, 255));
            grid[2][1] = -1;
            current = 1;
        }
    }
    else if (drawable_grid[2][2].getGlobalBounds().contains(mouse_postion.x, mouse_postion.y) && grid[2][2] == 0) {
        if (current == 1) {
            drawable_grid[2][2].setFillColor(sf::Color(0, 0, 255, 255));
            grid[2][2] = 1;
            current = -1;
        }
        else if (current == -1) {
            drawable_grid[2][2].setFillColor(sf::Color(255, 0, 0, 255));
            grid[2][2] = -1;
            current = 1;
        }
    }
}

char TicTacToe::hasPlayerWon() {
    char sum = 0;

    // Horizontal win condition
    for (char i = 0; i < grid_size; i++) {
        for (char j = 0; j < grid_size; j++) {
            sum += grid[i][j];
        }

        if (sum == 3) {
            return 1;
        }
        else if (sum == -3) {
            return -1;
        }
        sum = 0;
    }

    // Vertical win condition
    sum = 0;
    sum = grid[0][0] + grid[1][0] + grid[2][0];
    if (sum == 3) {
        return 1;
    }
    else if (sum == -3) {
        return -1;
    }

    sum = 0;
    sum = grid[0][1] + grid[1][1] + grid[2][1];
    if (sum == 3) {
        return 1;
    }
    else if (sum == -3) {
        return -1;
    }
    
    sum = 0;
    sum = grid[0][2] + grid[1][2] + grid[2][2];
    if (sum == 3) {
        return 1;
    }
    else if (sum == -3) {
        return -1;
    }

    // Diagonal win condition
    sum = 0;
    sum = grid[0][0] + grid[1][1] + grid[2][2];
    if (sum == 3) {
        return 1;
    }
    else if (sum == -3) {
        return -1;
    }

    sum = 0;
    sum = grid[2][0] + grid[1][1] + grid[0][2];
    if (sum == 3) {
        return 1;
    }
    else if (sum == -3) {
        return -1;
    }

    return 0;
}

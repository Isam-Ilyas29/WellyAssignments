#include "engine.hpp"
#include "game.hpp"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>


int main(int argc, char *argv[]) {
    // Create window
    vtge::Engine engine;
    engine.initialiseWindow("MyWindow", sf::VideoMode(1000, 750), sf::Style::Titlebar | sf::Style::Resize | sf::Style::Close, 60);

    //
    TicTacToe ttt;

    // Game loop
    while (engine.isRunning()) {
        engine.updateEvents();

        //
        engine.getWindow().clear(sf::Color(255, 255, 255, 255));

        for (char i = 0; i < ttt.grid_size; i++) {
            for (char j = 0; j < ttt.grid_size; j++) {
                engine.getWindow().draw(ttt.drawable_grid[i][j]);
            }
        }

        if (vtge::InputManager::isKeyPressed(sf::Keyboard::Key::Enter)) {
            ttt.onClick(vtge::InputManager::getMousePosition(engine.getWindow()));
        }

        if (ttt.hasPlayerWon() == 1) {
            std::cout << "Player 1 has won!" << std::endl;
            engine.destroy();
        }
        else if (ttt.hasPlayerWon() == -1) {
            std::cout << "Player 2 has won!" << std::endl;
            engine.destroy();
        }

        engine.getWindow().display();

        //
        if (vtge::InputManager::isKeyPressed(sf::Keyboard::Key::Escape)) {
            engine.destroy();
        }
    }

    return 0;
}


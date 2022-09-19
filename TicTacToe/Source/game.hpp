#include <SFML/Graphics.hpp>


class TicTacToe {
    private:
        char grid[3][3];
        char current;

    public:
        TicTacToe();

        sf::RectangleShape drawable_grid[3][3];
        char grid_size = 3;

        void onClick(sf::Vector2i mouse_position);
        char hasPlayerWon();
};

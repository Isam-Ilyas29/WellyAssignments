#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <unordered_map>
#include <type_traits>


namespace vtge {
    class InputManager {
    private:
        enum class KeyState { NONE, PRESSED, HELD, RELEASED };

        static std::unordered_map<sf::Keyboard::Key, KeyState> key_states;

    public:
        InputManager();

        void update();
        void processInput(sf::Event event);

        static bool isKeyPressed(sf::Keyboard::Key key);
        static bool isKeyHeld(sf::Keyboard::Key key);
        static bool isKeyReleased(sf::Keyboard::Key key);

        static bool isMouseClicked(sf::Mouse::Button button);
        static sf::Vector2i getMousePosition(sf::RenderWindow& window);
    };
}

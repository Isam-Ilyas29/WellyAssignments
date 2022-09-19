#include "engine.hpp"


namespace vtge {
    Engine::Engine() {
        ;
    }

    void Engine::initialiseWindow(std::string title, sf::VideoMode size, unsigned int flags, unsigned int frames_per_second) {
        window.create(size, title, flags);
        
        this->frames_per_second = frames_per_second;
        window.setFramerateLimit(60);
        
        window.setKeyRepeatEnabled(false);
    }

    bool Engine::isRunning() {
        return this->window.isOpen();
    }

    void Engine::updateEvents() {
        input_manager.update();

        sf::Event event;
        
        while (window.pollEvent(event)) {
            // Resize window
            if (event.type == sf::Event::Resized) {
                // TODO: Figure out coordinate/pixel system to ensure resizes dont stretch graphics
            }

            // Closed event
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            input_manager.processInput(event);
        }
    }

    // TODO: Drawable / Graphics module
    void Engine::render() {
        ;
    }

    sf::RenderWindow &Engine::getWindow() {
        return window;
    }

    unsigned int Engine::getFramesPerSecond() {
        return frames_per_second;
    }

    void Engine::destroy() {
        window.close();
    }
}

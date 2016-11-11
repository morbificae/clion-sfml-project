#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(300, 200), "SFML Application");

    sf::CircleShape circleShape(10);
    circleShape.setFillColor(sf::Color::Red);

    //Game loop
    while (window.isOpen())
    {
        //handle event
        sf::Event event;
        while (window.pollEvent(event))
        {
            if  (event.type == sf::Event::EventType::Closed ||
                (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }
        // Очистка
        window.clear(sf::Color::Black);
        // Тут будут вызываться функции обновления и отрисовки объектов
        window.draw(circleShape);
        //Render objects
        window.display();
    }
    return 0;
}
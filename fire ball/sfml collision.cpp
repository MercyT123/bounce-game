#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
int main()
{
    sf::RenderWindow window(sf::VideoMode(600,600), "SFML WORK!");

    sf::Texture texture,t2;
    t2.loadFromFile("gameover.png");

    if(!texture.loadFromFile("paddle.png"))
    {
        //handle error
    }

    sf::Sprite sprite;
    sprite.setTexture(texture);

    sf::Sprite sprite2 , s3;
    sprite2.setTexture(texture);
    s3.setTexture(t2);

    sprite2.setPosition(sf::Vector2f(0, 400));

    while(window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();

                break;


            }


        }


        window.clear();


        window.draw(sprite);
        window.draw(sprite2);
 if (sprite.getGlobalBounds().intersects(sprite2.getGlobalBounds()))
        {

 window.draw(s3);

        }
        else{

            sprite2.move(sf::Vector2f(0, -0.1));
        }




        window.display();

        }

    }


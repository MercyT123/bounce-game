#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
using namespace std;

int main()
{

  sf::RenderWindow window2(sf::VideoMode(800,600),"4-KILO CAMPUS SAMPLE MAP");
  sf::Texture texture2;
  sf::Sprite sprite2;
  sf::Vector2u TextureSize;
  sf::Vector2u WindowSize;

  if(!texture2.loadFromFile("map4.png"))
  {
    cout<< " failed to load image " << endl ;
  }
  else
  {
    TextureSize = texture2.getSize(); //Get size of texture.
    WindowSize = window2.getSize();             //Get size of window.

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

    sprite2.setTexture(texture2);
    sprite2.setScale(ScaleX, ScaleY);      //Set scale.
  }

  while(window2.isOpen())
  {
    sf::Event event;

    while(window2.pollEvent(event))
    {

        switch(event.type)
        {
            case sf::Event::Closed:
                window2.close();
        }

         if (event.type == sf::Event::KeyPressed)
                            {
                                switch (event.key.code)
                                {
                                case  sf::Keyboard::Escape : window2.close(); break;
                                case  sf::Keyboard::Space : window2.close(); break;
                                default : break;
                                }
                            }

    }
    window2.draw(sprite2);
    window2.display();
 }
}

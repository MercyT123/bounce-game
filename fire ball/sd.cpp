#include <SFML/Graphics.hpp>
#include <iostream>
//#include <Audio.hpp>
#include <SFML/Window.hpp>
using namespace sf;
struct point
{ int x,y;};

      int main(){     //main lopp starts here
           srand(time(0));

    RenderWindow app(VideoMode(500,500), "Fire ball");
    app.setFramerateLimit(60);

    Texture t1,t2,t3,t4,TgameOver;
    t1.loadFromFile("b1.png");
    t2.loadFromFile("paddle.png");
    t3.loadFromFile("doodle_2.png");
    t4.loadFromFile("mercy.png");
    TgameOver.loadFromFile("gameover.png");
    Sprite sBackground(t1), sPlat(t2), sPers(t3),mer(t4),GO(TgameOver);
    mer.setPosition( 55,536 );
    GO.setPosition( 100,100 );

    point plat[20];

    for (int i=0;i<10;i++)
      {
       plat[i].x=rand()%300;
       plat[i].y=rand()%433;
      }

	int x=100,y=100,h=200;
    float dx=0,dy=0;

    while (app.isOpen())
    {
        Event e;
   /*    sf::Event event1;
    while(mainWindow.pollEvent(event1))
    {
       switch ( event1.type)
        {
      case sf::Event::MouseMoved:
            std::cout<<"x = " <<event1.mouseMove.x<<std::endl;
            std::cout<<"y = " <<event1.mouseMove.y<<std::endl;
            std::cout<<std::endl;
            break;
        }
    }*/
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

    if (Keyboard::isKeyPressed(Keyboard::Right)) x+=3;
    if (Keyboard::isKeyPressed(Keyboard::Left)) x-=3;

    dy+=0.2;
    y+=dy;
    if (y>500)  dy=-10;

	if (y<h)
    for (int i=0;i<10;i++)
    {
      y=h;
      plat[i].y=plat[i].y-dy;
      if (plat[i].y>533) {plat[i].y=0; plat[i].x=rand()%500;}
    }

	for (int i=0;i<10;i++)
    if ((x+40>plat[i].x) && (x+20<plat[i].x+68)
    && (y+70>plat[i].y) && (y+70<plat[i].y+14) && (dy>0))  dy=-10;

	sPers.setPosition(x,y);

    app.draw(sBackground);

    app.draw(sPers);
    for (int i=0;i<10;i++)
    {
    sPlat.setPosition(plat[i].x,plat[i].y);
    app.draw(sPlat);
    }
     if (sPers.getGlobalBounds().intersects(mer.getGlobalBounds()))
        {

    app.draw(GO);

        }

    app.display();
}
// main loop end
}

#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
using namespace sf;
struct point
{ int x,y;};
int  main()
{

    sf::RenderWindow mainWindow( sf::VideoMode( 600, 600) , "Loading Fire Ball ..." );

     sf:: SoundBuffer buffer;
    if(!buffer.loadFromFile("GD.ogg"))
    {

     cout<<"ERROR"<<endl;
    }
    sf:: Sound sound;
    sound.setBuffer(buffer);
    sound.play();


    sf::Texture entry;
    entry.loadFromFile("new interface.png");
    sf::Sprite sprite_ui(entry);

    while ( mainWindow.isOpen() )
    {


       sf::Event fireball;

  sf::Vector2u TextureSize;  //Added to store texture size.
  sf::Vector2u WindowSize;   //Added to store window size.

  if(!entry.loadFromFile("new interface.png"))
  {
    return 0;
  }
  else
  {
    TextureSize = entry.getSize(); //Get size of texture.
    WindowSize = mainWindow.getSize();             //Get size of window.

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate the scale.

    sprite_ui.setTexture(entry);
    sprite_ui.setScale(ScaleX, ScaleY);      //Set the scale.
  }

        while (mainWindow.pollEvent(fireball))
        {
            if (fireball.type == sf::Event::Closed) mainWindow.close();
                 if (fireball.type == sf::Event::KeyPressed)
                            {
                                switch (fireball.key.code)
                                {
                                // When R is pressed, the window closes.
                                case  sf::Keyboard:: R : mainWindow.close(); break;
                                default : break;
                                }
                            }

                }


/*     sf::Event event1;
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

    //the code for the prize button

   if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 9
       && sf::Mouse::getPosition(mainWindow).y >= 504
       && sf::Mouse::getPosition(mainWindow).x <= 119
       && sf::Mouse::getPosition(mainWindow).y <= 563
       ){

  sf::RenderWindow mainwindow(sf::VideoMode(600,600),"Fire ball");
  sf::Texture texture3;
  sf::Sprite sprite3;
  sf::Vector2u TextureSize;
  sf::Vector2u WindowSize;

  if(!texture3.loadFromFile("prize1.png"))
  {
    std::cout<< " failure in loading image " <<std::endl;
  }
  else
  {
    TextureSize = texture3.getSize(); //Get size of texture.
    WindowSize = mainwindow.getSize();//Get size of window.

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

    sprite3.setTexture(texture3);
    sprite3.setScale(ScaleX, ScaleY);      //Set scale.
  }

  while(mainwindow.isOpen())
  {
    sf::Event event;

    while(mainwindow.pollEvent(event))
    {

        switch(event.type)
        {
            case sf::Event::Closed:
                mainwindow.close();
        }

         if (event.type == sf::Event::KeyPressed)
                            {
                                switch (event.key.code)
                                {
                                case  sf::Keyboard::Escape : mainwindow.close(); break;
                                case  sf::Keyboard::Space : mainwindow.close(); break;
                                default : break;
                                }
                            }

    }
    mainwindow.draw(sprite3);
    mainwindow.display();

}

    }

    //the code to get the x and y coordinates

     /*        sf::Event event1;
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
    }
*/
    //the code for the exit button

    if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 521
       && sf::Mouse::getPosition(mainWindow).y >= 148
       && sf::Mouse::getPosition(mainWindow).x <= 574
       && sf::Mouse::getPosition(mainWindow).y <= 197
       ){
             mainWindow.close();
        }
    //the code for the store button

    if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 467
       && sf::Mouse::getPosition(mainWindow).y >= 472
       && sf::Mouse::getPosition(mainWindow).x <= 539
       && sf::Mouse::getPosition(mainWindow).y <= 583
       ){

  sf::RenderWindow window2(sf::VideoMode(600,600),"Fire ball");
  sf::Texture texture2;
  sf::Sprite sprite2;
  sf::Vector2u TextureSize;
  sf::Vector2u WindowSize;

  if(!texture2.loadFromFile("store.png"))
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

//the code for the play button

   if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 30
       && sf::Mouse::getPosition(mainWindow).y >= 152
       && sf::Mouse::getPosition(mainWindow).x <= 87
       && sf::Mouse::getPosition(mainWindow).y <= 209
       ){


          //main lopp starts here
           srand(time(0));

    RenderWindow app(VideoMode(500,500), "Fire ball");
    app.setFramerateLimit(60);

    Texture t1,t2,t3,t4,TgameOver;
    t1.loadFromFile("b1.png");
    t2.loadFromFile("paddle.png");
    t3.loadFromFile("doodle_2.png");
    t4.loadFromFile("paddle.png");
    TgameOver.loadFromFile("gameover.png");

    Sprite sBackground(t1), sPlat(t2), sPers(t3),mer(t4),GO(TgameOver);
    mer.setPosition( 55,536 );
    GO.setPosition( 60,100 );

    point plat[20];

    for (int i=0;i<10;i++)
      {
       plat[i].x=rand()%300;  //to make the paddles in random for the x
       plat[i].y=rand()%533;  //to make the paddles in random for the y
      }

	int x=100,y=100,h=200;
    float dx=0,dy=0;

    while (app.isOpen())
    {
        Event e;

        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }


	sPers.setPosition(x,y);

    app.draw(sBackground);

    app.draw(sPers);
    for (int i=0;i<10;i++)
    {
    sPlat.setPosition(plat[i].x,plat[i].y);
    app.draw(sPlat);
    }
    bool gameover = false;
    if( sPers.getGlobalBounds().intersects(mer.getGlobalBounds()) ) { gameover = true ;}
     if ( gameover)
        {

    app.draw(GO);

//sPers.setPosition(0,0);

        }else{ if (Keyboard::isKeyPressed(Keyboard::Right)) x+=3;
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
 }

    app.display();
}

    }

// main loop end

   if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 368
       && sf::Mouse::getPosition(mainWindow).y >=298
       && sf::Mouse::getPosition(mainWindow).x <= 608
       && sf::Mouse::getPosition(mainWindow).y <= 336
       ){
    sf::RenderWindow window2( sf::VideoMode( 800, 600) , "Fire ball"  );

    window2.setVerticalSyncEnabled (true);
    window2.setKeyRepeatEnabled(false);

  }

   // mainWindow.clear( sf::Color( 127,127,127) );
    mainWindow.draw(sprite_ui);
    mainWindow.display();

    }
    return 0;
     // returns 0;
}

#include <SFML/Graphics.hpp>
#include <iostream>
//#include <Audio.hpp>
#include <SFML/Window.hpp>
#include <sstream>

using namespace sf;
struct point
{ int x,y;};
int  main()
{

    sf::RenderWindow mainWindow( sf::VideoMode( 600, 600) , "Loading Fire Ball ..." );

    //scorw

   int Score = 0;
   sf::Font coopbl;
   coopbl.loadFromFile("COOPBL.TTF");

   std::ostringstream ssScore;
   ssScore <<" Score: "<<Score;
    sf::Text lblScore;
    lblScore.setCharacterSize(30);
    lblScore.setPosition(10, 10);
    lblScore.setFont(coopbl);
    lblScore.setString(ssScore.str());
/*    sf::Music mah;
    if(!mah.openFromFile("hg.ogg"))
    {
        std::cout << "ERROR" << std::endl;
    }

    Music play();
//    Music.setPlayingOffset(sf::seconds(10));

//    Music.setVolume(25);
*/

    sf::Texture entry;
    entry.loadFromFile("new interface.png");
    sf::Sprite sprite_ui(entry);

    while ( mainWindow.isOpen() )
    {


       sf::Event fireball;

/*
     sf::Event event1;
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
    }   */


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
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

    sprite_ui.setTexture(entry);
    sprite_ui.setScale(ScaleX, ScaleY);      //Set scale.
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

  if(!texture3.loadFromFile("prize.png"))
  {
    std::cout<< " failure in loading image " <<std::endl;
  }
  else
  {
    TextureSize = texture3.getSize(); //Get size of texture.
    WindowSize = mainwindow.getSize();             //Get size of window.

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

    if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 521
       && sf::Mouse::getPosition(mainWindow).y >= 148
       && sf::Mouse::getPosition(mainWindow).x <= 574
       && sf::Mouse::getPosition(mainWindow).y <= 197
       ){
             mainWindow.close();
        }

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


         if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 30
       && sf::Mouse::getPosition(mainWindow).y >= 152
       && sf::Mouse::getPosition(mainWindow).x <= 87
       && sf::Mouse::getPosition(mainWindow).y <= 209
       ){
///

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
    Score++;
    ssScore.str("");
    ssScore << "Score" << Score;
    lblScore.setString(ssScore.str());
 }

    app.display();
}

///
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

/*
    sf::Texture texture , texture2;
    texture2.loadFromFile(".png");
    texture.loadFromFile(".jpg");

      sf::Sprite sprite2(texture) , sprite(texture2);
      sf::Vector2u TextureSize;  //Added to store texture size.
      sf::Vector2u WindowSize;   //Added to store window size.

    if(!texture2.loadFromFile(".png"))
  {
    return -1;
  }
  else
  {
    TextureSize = texture2.getSize(); //Get size of texture.
    WindowSize = window2.getSize();             //Get size of window.

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

    sprite.setTexture(texture2);
    sprite.setScale(ScaleX, ScaleY);      //Set scale.
  }
  while(window2.isOpen())
  {
    sf::Event event;

    while(window2.pollEvent(event))
    {
        switch(event.type)
        {
            case sf::Event::Closed:

        window2.clear( sf::Color(127,127,127)); // clear window and set background color grey
        window2.draw(sprite);
        window2.draw(sprite2);
        window2.display();
        }
    }
       }

       }




 if(   sf::Event::MouseMoved
       && sf::Mouse::getPosition(mainWindow).x >= 365
       && sf::Mouse::getPosition(mainWindow).y >=229
       && sf::Mouse::getPosition(mainWindow).x <= 606
       && sf::Mouse::getPosition(mainWindow).y <= 266
       ){

    RenderWindow app(VideoMode(600,533), "Fire ball");
    app.setFramerateLimit(60);

    Texture t4;
    t4.loadFromFile("prize.png");

        }

    if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(mainWindow).x >= 365
       && sf::Mouse::getPosition(mainWindow).y >=229
       && sf::Mouse::getPosition(mainWindow).x <= 606
       && sf::Mouse::getPosition(mainWindow).y <= 266
       )
        {

    sf::RenderWindow window( sf::VideoMode( 800, 600) , "FIRE BALL"  );

    window.setVerticalSyncEnabled (true);
    window.setKeyRepeatEnabled(false);


    sf::Texture texture , texture2;
    texture2.loadFromFile("image.png");
    texture.loadFromFile("image.jpg");

      sf::Sprite sprite2(texture) , sprite(texture2);
      sf::Vector2u TextureSize;  //Added to store texture size.
      sf::Vector2u WindowSize;   //Added to store window size.

    if(!texture2.loadFromFile("background.png"))
  {
    return -1;
  }
  else
  {
    TextureSize = texture2.getSize(); //Get size of texture.
    WindowSize = window.getSize();             //Get size of window.

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

    sprite.setTexture(texture2);
    sprite.setScale(ScaleX, ScaleY);      //Set scale.
  }


    sprite2.setScale(sf::Vector2f(0.06,0.06));
    sf::FloatRect spriteSize=sprite2.getGlobalBounds();
    sprite2.setOrigin(spriteSize.width/2.,spriteSize.height/2.);






    int x=window.getSize().x/2.;
    int y=window.getSize().y/2.;





    bool upFlag=false;
    bool downFlag=false;
    bool leftFlag=false;
    bool rightFlag=false;


    sf::Clock timer;
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close the window if a key is pressed or if requested
            if (event.type == sf::Event::Closed) window.close();

            // If a key is pressed
            if (event.type == sf::Event::KeyPressed)
            {
                switch (event.key.code)
                {
                // If escape is pressed, close the application
               case  sf::Keyboard::Escape : window.close(); break;
                case  sf::Keyboard::Space : window.close(); break;

                // Process the up, down, left and right keys
                case sf::Keyboard::Up :     upFlag=true; sprite2.setRotation(0); break;
                case sf::Keyboard::Down:    downFlag=true;sprite2.setRotation(180); break;
                case sf::Keyboard::Left:    leftFlag=true;sprite2.setRotation(-90); break;
                case sf::Keyboard::Right:   rightFlag=true;sprite2.setRotation(90); break;
                default : break;
                }
            }


        }

        window.clear( sf::Color(127,127,127)); // clear window and set background color grey
        sprite2.setPosition(x,y);
        window.draw(sprite);
        window.draw(sprite2);
        window.display();

    }
*/
        }
   // mainWindow.clear( sf::Color( 127,127,127) );
    mainWindow.draw(sprite_ui);
    mainWindow.display();
    mainWindow.draw(lblScore);
/*     if (!event) main window.draw(sGameover);

 	  window.display();  */

    }
    return EXIT_SUCCESS;
     // returns 0;
}

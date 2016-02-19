//
// Created by pporebski on 2/19/16.
//

#include "Application.h"


void MyGame::MyGame::OnStartup()
{

}

void MyGame::MyGame::OnShutdown()
{

}

void MyGame::MyGame::OnUpdate(float dt)
{

}

void MyGame::MyGame::OnDraw(Gem::Graphics &graphics)
{

}

void MyGame::MyGame::OnEvent(Gem::Event event)
{

}

void MyGame::MyGame::OnInput(Gem::Input input)
{

}

namespace Gem
{
    ApplicationPtr CreateApplication()
    {
        return ApplicationPtr(new MyGame::MyGame);
    }
}

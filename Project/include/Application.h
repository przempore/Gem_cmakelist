//
// Created by pporebski on 2/19/16.
//

#ifndef PROJECT_APPLICATION_H
#define PROJECT_APPLICATION_H

#include "gem/Application.hpp"

namespace MyGame
{
	class MyGame : public Gem::Application
	{

	public:
		virtual void OnStartup() override;
		virtual void OnShutdown() override;
		virtual void OnUpdate(float dt) override;
		virtual void OnDraw(Gem::Graphics &graphics) override;
		virtual void OnEvent(Gem::Event event) override;
		virtual void OnInput(Gem::Input input) override;
	};
}
#endif //PROJECT_APPLICATION_H

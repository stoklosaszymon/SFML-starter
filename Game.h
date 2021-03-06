#include "StringHelper.h"
#include <SFML/Graphics.hpp>



class Game : private sf::NonCopyable
{
public:
	Game();
	void					run();

private:
	void					processEvents();
	void					update(sf::Time elapsedTime);
	void					render();

	void					updateStatistics(sf::Time elapsedTime);

private:
	static const sf::Time	TimePerFrame;

	sf::RenderWindow		mWindow;

	sf::Font				mFont;
	sf::Text				mStatisticsText;
	sf::Time				mStatisticsUpdateTime;

	std::size_t				mStatisticsNumFrames;
};

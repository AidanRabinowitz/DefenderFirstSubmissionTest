/** \file pong-paddle.cpp
    \brief No need to document class implementations (cpp files)
 */


#include <SFML/Graphics.hpp>
#include "pong-paddle.h"

// make the left paddle
sf::RectangleShape makeLeftPaddle()
{
    // Create the left paddle
    auto leftPaddle = sf::RectangleShape{};
    leftPaddle.setSize(leftPaddleSize - sf::Vector2f(1, 1));
    leftPaddle.setOutlineThickness(3);
    leftPaddle.setOutlineColor(sf::Color::Blue);
    leftPaddle.setFillColor(sf::Color(100, 100, 200));
    leftPaddle.setOrigin(leftPaddleSize / 2.f);
    return leftPaddle;
}

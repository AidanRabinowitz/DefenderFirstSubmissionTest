#ifndef PONGPADDLE
#define PONGPADDLE

/** \file pong-paddle.h
    \brief Contains code for constructing the left paddle as well a dummy class hierarchy

    NB:to document global objects (functions, typedefs, enum, macros, etc), you must document the file in which they are defined. That is,
    you must provide this file comment block.
 */

#include <SFML/Graphics.hpp>

const sf::Vector2f leftPaddleSize{25, 100};  /**< The size of the left paddle's rectangle */

/** \fn sf::RectangleShape makeLeftPaddle();
 *  \brief This function constructs the left paddle
 *
 *  \return An SFML RectangleShape representing the paddle
 *
 */


/** \brief
 *
 * \return sf::RectangleShape
 *
 */
sf::RectangleShape makeLeftPaddle();


/** \class Parent
    \brief An almost empty base class

    Here you can give a longer description
 */
class Parent
{
public:
    /** \brief This does something with numbers!

        Here you can give a longer description if you want.
        \param x This ranges from [0,100]. Values outside this range cause an exception to be thrown.
        \return True if the calculation has completed; false if it needs to be retried with a higher value of x.
    */
    bool doSomething(int x);

private:
    /** \brief Doxygen ignores private methods by default.

        That's fine - you do not need to document these for your technical reference
        \param x This ranges from [0,100]. Values outside this range cause an exception to be thrown.
        \return True if the calculation has completed; false if it needs to be retried with a higher value of x.
    */
    bool doSomethingElse(int x);
};

/** \class Child
    \brief An empty derived class

   Here you can give a longer description
 */
class Child: public Parent
{

};

#endif

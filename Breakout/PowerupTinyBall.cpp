#include "PowerupTinyBall.h"

PowerupTinyBall::PowerupTinyBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball) {
    _sprite.setFillColor(ballEffectsColour);

}

PowerupTinyBall::~PowerupTinyBall() {


}

std::pair<POWERUPS, float> PowerupTinyBall::applyEffect() {
    _ball->setTinyBall(5.0f);
    return { tinyBall, 5.0f };
}
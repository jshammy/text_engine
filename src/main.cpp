#include "../include/main.hpp"

int main( void )
{
    auto game_inst = new engine::game::PlayerEntity;
    std::cout << game_inst->GetClassName() << std::endl;

    return 0;
}
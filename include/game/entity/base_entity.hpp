#ifndef TEXT_ENGINE_INCLUDE_GAME_ENTITY_BASE_ENTITY_HPP_
#define TEXT_ENGINE_INCLUDE_GAME_ENTITY_BASE_ENTITY_HPP_

namespace engine::game {
    class BaseEntity {
        protected:
            std::string class_name_ = "BaseEntity";
        public:
            virtual ~BaseEntity( void ) {};
        public:
            const std::string_view GetClassName( void ) const {
                return this->class_name_;
        };
    };
}

#endif // TEXT_ENGINE_INCLUDE_GAME_ENTITY_BASE_ENTITY_HPP_
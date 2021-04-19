#include "../../include/main.hpp"

namespace engine::util {
    FileSystem::FileSystem( const char** argv )
    {
        this->base_path_ = std::filesystem::path( argv[0]).parent_path();
    }

    std::filesystem::path FileSystem::GetBasePath( void ) const 
    {
        return this->base_path_;
    }

    bool FileSystem::IsPathValid( const std::filesystem::path &test_path ) const
    {
        if( std::filesystem::is_directory( test_path ) == false )
            return false;

        const auto perms = std::filesystem::status(test_path).permissions();
        if(( perms & std::filesystem::perms::owner_all ) == std::filesystem::perms::none )
            return false;
               
        return true;
    }
}
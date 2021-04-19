#ifndef TEXT_ENGINE_INCLUDE_UTIL_FILESYSTEM_HPP_
#define TEXT_ENGINE_INCLUDE_UTIL_FILESYSTEM_HPP_

namespace engine::util {
    class FileSystem {
        private:
            std::filesystem::path base_path_;
        public:
            FileSystem( const char** argv );
            std::filesystem::path GetBasePath( void ) const;
            bool IsPathValid( const std::filesystem::path &test_path ) const;
    };
}

#endif // TEXT_ENGINE_INCLUDE_UTIL_FILESYSTEM_HPP_
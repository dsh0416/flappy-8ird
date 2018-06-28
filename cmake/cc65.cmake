cmake_minimum_required(VERSION 3.10)

set(CMAKE_SYSTEM_NAME Generic)

macro(__compilerCc65 lang)
    set(CMAKE_${lang}_COMPILER cl65)
    set(CMAKE_${lang}_COMPILER_ID cc65)

    # Skip tests
    set(CMAKE_${lang}_COMPILER_ID_RUN TRUE)
    set(CMAKE_${lang}_COMPILER_ID_WORKS TRUE)
    set(CMAKE_${lang}_COMPILER_ID_FORCED TRUE)

    set(CMAKE_DEPFILE_FLAGS_${lang} "--create-dep <DEPFILE>")
    set(CMAKE_${lang}_VERBOSE_FLAG "-v" )
    set(CMAKE_${lang}_FLAGS_DEBUG_INIT "-g -D DEBUG --asm-define DEBUG")
endmacro()

__compilerCc65( C )
__compilerCc65( ASM )

set( CMAKE_ASM_SOURCE_FILE_EXTENSIONS s;S;asm )

# Find Archiver
find_program(CMAKE_AR ar65)

# Delete the old file first because ar65 can only add files
# into an archive (or remove named files, but we don't know the names).
set( CMAKE_C_CREATE_STATIC_LIBRARY
        "<CMAKE_COMMAND> -E remove <TARGET> "
        "<CMAKE_AR> a <TARGET> <LINK_FLAGS> <OBJECTS>")

set(CMAKE_ASM_CREATE_STATIC_LIBRARY ${CMAKE_C_CREATE_STATIC_LIBRARY})
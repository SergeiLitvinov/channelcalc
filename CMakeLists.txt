cmake_minimum_required(VERSION 3.5)

# Название проекта
project(channelcalc)

# Переменная с именем исполняемого файла
set(EXECUTABLE ${PROJECT_NAME})

# Добавление файлов исъодного кода
add_executable(
    ${EXECUTABLE} 
    src/MainFrame.cpp
    src/FormHandler.cpp
    src/channelcalc.cpp
    src/Calculation.cpp
)

# Директории с *.h файлами
include_directories(
    "include"
)

add_compile_options(
    -mwindows
)

set(wxWidgets_ROOT_DIR "C:/wxWidgets/static/release")
set(wxWidgets_LIB_DIR "C:/wxWidgets/static/release/lib/gcc_x64_lib")
find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

# Подключение библиотек
target_link_libraries(
    ${EXECUTABLE}
    #debug
    ${wxWidgets_LIBRARIES}  
)



#target_include_directories(
#    ${EXECUTABLE}
#    PRIVATE
#    ${wxWidgets_INCLUDE_DIRS}
#)


# Флаги компиляции
# add_compile_options(
#     $<$<COMPILE_LANGUAGE:CXX>:
#     -fno-rtti 
#     -fno-exceptions 
#     $<$<CONFIG:Debug>:
#     -Og>
#     $<$<CONFIG:Release>:
#     -Os>> 
#     $<$<COMPILE_LANGUAGE:C>:
#     $<$<CONFIG:Debug>:
#     -Og>
#     $<$<CONFIG:Release>:
#     -Os>>
# )


# подключениt библиотек
# Для Windows
#if (WIN32)

#endif ()

# # Для Linux
# if (UNIX)
#     target_link_libraries(
#         ${EXECUTABLE}  
#         PUBLIC
#         pthread
#     )
# endif ()

                    
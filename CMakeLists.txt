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
    "C:/wx/include"
)

# Директории с wxWidgets и библиотеками
set(wxWidgets_ROOT_DIR "C:/wx")
set(wxWidgets_LIB_DIR "C:/wx/lib/gcc_x64_lib")


# Поск необходимых компонентов библиотек
find_package(wxWidgets 3.2 COMPONENTS REQUIRED core base net)
include(${wxWidgets_USE_FILE})

# Подключение библиотек
target_link_libraries(
    ${EXECUTABLE}
    #debug
    ${wxWidgets_LIBRARIES}  
)


# флаг компиляции для запуска приложения без командной строки
target_link_options(
    ${EXECUTABLE}
    PRIVATE
    -mwindows
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

                    
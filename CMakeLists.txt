cmake_minimum_required(VERSION 3.7)
project(trabalho_angelis)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Itens/Beer/Beer.cpp
        Itens/Beer/Beer.hpp
        Itens/Bread/Bread.cpp
        Itens/Bread/Bread.hpp
        Itens/Cheese/Cheese.cpp
        Itens/Cheese/Cheese.hpp
        Itens/CottageCheese/CottageCheese.cpp
        Itens/CottageCheese/CottageCheese.hpp
        Itens/Cracker/Cracker.cpp
        Itens/Cracker/Cracker.hpp
        Itens/Dortmunder/Dortmunder.cpp
        Itens/Dortmunder/Dortmunder.hpp
        Itens/FilledWafer/FilledWafer.cpp
        Itens/FilledWafer/FilledWafer.hpp
        Itens/Food/Food.cpp
        Itens/Food/Food.hpp
        Itens/Ham/Ham.cpp
        Itens/Ham/Ham.hpp
        Itens/Liquid/Liquid.cpp
        Itens/Liquid/Liquid.hpp
        Itens/Milk/Milk.cpp
        Itens/Milk/Milk.hpp
        Itens/Mortadella/Mortadella.cpp
        Itens/Mortadella/Mortadella.hpp
        Itens/Pilsen/Pilsen.cpp
        Itens/Pilsen/Pilsen.hpp
        Itens/Porter/Porter.cpp
        Itens/Porter/Porter.hpp
        Itens/Soda/Soda.cpp
        Itens/Soda/Soda.hpp
        Itens/Stout/Stout.cpp
        Itens/Stout/Stout.hpp
        Itens/Water/Water.cpp
        Itens/Water/Water.hpp
        Process/Information/Information.cpp
        Process/Information/Information.hpp
        Process/Menu/Menu.cpp
        Process/Menu/Menu.hpp
        Process/MyBooleanClass/MyBooleanClass.cpp
        Process/MyBooleanClass/MyBooleanClass.hpp
        Process/MyProgram/MyProgram.cpp
        Process/MyProgram/MyProgram.hpp
        FT_bakery.cpp
        FT_bakery.hpp)

add_executable(trabalho_angelis ${SOURCE_FILES})
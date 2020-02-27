cmake_minimum_required(VERSION 3.0)

project(iac)

set(lista_archivos
  main.cpp
  cli.cpp
  textosMenus.cpp
  funcMatematicasBasicas.cpp
  #Específicas
  calculos.cpp
  distribucionesDiscretas.cpp
  #Los submenus de cada tipo de operacion
  #menuIA.cpp
)

#Debug/Release

set(CMAKE_BUILD_TYPE Debug)


set(CMAKE_CXX_FLAGS "-ansi -pedantic -Wall -W -Wconversion -Wshadow -Wcast-qual -Wwrite-strings -O0 -march=native -std=gnu++14")

set(CMAKE_CXX_FLAGS_DEBUG " -ggdb3 -DDEBUG")

add_executable(iac ${lista_archivos})

#install(TARGETS iac RUNTIME DESTINATION bin)

cmake_minimum_required(VERSION 3.22)
project(Program3_MichaelShea)

set(CMAKE_CXX_STANDARD 20)

add_executable(Program3_MichaelShea main.cpp ActorTypeCreate/actor.cpp ActorTypeCreate/actor.h ActorTypes/ghost.cpp ActorTypes/ghost.h ActorTypes/knight.cpp ActorTypes/knight.h ActorTypes/warrior.cpp ActorTypes/warrior.h CreationFactories/actorfactory.cpp CreationFactories/actorfactory.h MoveTypeCreate/imove.cpp MoveTypeCreate/imove.h MoveTypeCreate/battlemove.cpp MoveTypeCreate/battlemove.h MoveTypes/attackone.cpp MoveTypes/attackone.h MoveTypes/attackttwo.cpp MoveTypes/attackttwo.h MoveTypes/heal.cpp MoveTypes/heal.h CreationFactories/battlemovefactory.cpp CreationFactories/battlemovefactory.h movemanager.cpp movemanager.h runner.cpp runner.h)

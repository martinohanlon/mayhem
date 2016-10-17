cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(mayhem2)

set (CMAKE_CXX_STANDARD 11)

set(SOURCES
allegro_compatibility.cpp
mapping_joy.cpp
platform_data.cpp
utils.cpp
battle_sequence.cpp
mapping_key.cpp
player_info.cpp
vaisseau_data.cpp
collision.cpp
menuhandler.cpp
Mayhem2.cpp
player_input.cpp
vaisseau_gfx.cpp
command.cpp
#netgame.cpp
player_view.cpp
game_mgr.cpp
option.cpp
soundfx.cpp
intro_sequence.cpp
physics.cpp
ticktimer.cpp
xc.cpp
)

add_executable(mayhem2 ${SOURCES})

if (UNIX OR MSYS)
set(ALLEGRO_LIBS
	allegro
	allegro_primitives
	allegro_audio
	allegro_image
	allegro_font
	allegro_ttf
	allegro_acodec)
target_link_libraries(mayhem2 ${ALLEGRO_LIBS})
endif()

file(COPY assets DESTINATION .)

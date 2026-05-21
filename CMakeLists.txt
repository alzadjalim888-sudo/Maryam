cmake_minimum_required(VERSION 4.1)
project(booking)

set(CMAKE_CXX_STANDARD 20)

add_executable(booking main.cpp
        event.cpp
        Venue_Class.cpp
        photography.cpp
        entertainment_class.cpp
        catring.cpp
        decoration_class.cpp
        Clinet_class.cpp
        Booking.cpp
        reem.h
)

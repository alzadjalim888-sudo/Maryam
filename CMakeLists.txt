cmake_minimum_required(VERSION 4.1)
project(OOP_final_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOP_final_project main.cpp
        Client_Class.h
        Client_Class.cpp
        event.h
        event.cpp
        Venue_Class.h
        Venue_Class.cpp
        service_class.h
        catring.h
        catring.cpp
        photography.h
        photography.cpp
        entertainment_class.h
        entertainment_class.cpp
        decoration_class.h
        decoration_class.cpp
        Booking.h
        Booking.cpp)

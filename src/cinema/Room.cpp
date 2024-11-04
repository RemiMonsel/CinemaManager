#include <iostream>

#include "../../include/cinema/Room.h"


//constructors
Room::Room(uint8_t myIdRoom, std::string myRoomName, uint16_t mySeatCapacity, std::vector<std::string> myEquipments, std::string myActualMovie)
{
    idRoom = myIdRoom;
    roomName = myRoomName;
    seatCapacity = mySeatCapacity;
    equipments = myEquipments;
    actualMovie = myActualMovie;
}

/*********************/
/****** methods ******/
/*********************/

//getters
uint8_t Room::getIdRoom()
{
    return idRoom;
}
std::string Room::getRoomName()
{
    return roomName;
}
uint16_t Room::getSeatCapacity()
{
    return seatCapacity;
}
std::vector<std::string> Room::getEquipments()
{
    return equipments;
}
std::string Room::getActualMovie()
{
    return actualMovie;
}

//setters
void Room::setRoomName(std::string name)
{
    roomName = name;
}
void Room::setSeatCapacity(uint8_t capacity)
{
    seatCapacity = capacity;
}
void Room::setActualMovie(std::string movie)
{
    actualMovie = movie;
}

//other methods
void Room::addEquipments(std::string equipment)
{
    equipments.push_back(equipment);
}
void Room::removeEquipments(std::string equipment)
{
    for(uint8_t i = 0; i < equipments.size(); i++)
    {
        if(equipments.at(i) == equipment)
        {
            equipments.erase(equipments.begin() + i);
            break;
        }
    }
}
bool Room::isAvailable()
{
    return (actualMovie == "None" ? true : false);
}

void Room::showDetails()
{
    std::cout << "Room id is : " << static_cast<int>(getIdRoom()) << std::endl;
    std::cout << "The room name is : " << getRoomName() << std::endl;
    std::cout << roomName << " has " << static_cast<int>(getSeatCapacity()) << " seats" << std::endl;
    if (equipments.size() > 0)
    {
        equipments.size() == 0 ? std::cout << "The available equipment is : " : std::cout << "The available equipments are : ";
        for(uint8_t i = 0; i < equipments.size(); i++)
        {
            std::cout << equipments.at(i) << std::endl;
        }
    }
    if (getActualMovie() != "None")
    {
        std::cout << "The actual movie in " << roomName << " is " << getActualMovie() << std::endl;
    }
    std::cout << std::boolalpha;
    std::cout << "Is the room available ? " << isAvailable() << std::endl;
    std::cout << std::endl;
}
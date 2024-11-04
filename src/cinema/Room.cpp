#include "../../include/cinema/Room.h"


        //constructors
        Room::Room(){}

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
            return (actualMovie == "" ? false : true);
        }
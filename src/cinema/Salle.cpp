#include "../../include/cinema/Salle.h"


        //constructors
        Salle::Salle(){}

        /*********************/
        /****** methods ******/
        /*********************/

        //getters
        uint8_t Salle::getIdRoom()
        {
            return idRoom;
        }
        std::string Salle::getRoomName()
        {
            return roomName;
        }
        uint16_t Salle::getSeatCapacity()
        {
            return seatCapacity;
        }
        std::vector<std::string> Salle::getEquipments()
        {
            return equipments;
        }
        std::string Salle::getActualMovie()
        {
            return actualMovie;
        }

        //setters
        void Salle::setRoomName(std::string name)
        {
            roomName = name;
        }
        void Salle::setSeatCapacity(uint8_t capacity)
        {
            seatCapacity = capacity;
        }
        void Salle::setActualMovie(std::string movie)
        {
            actualMovie = movie;
        }

        //other methods
        void Salle::addEquipments(std::string equipment)
        {
            equipments.push_back(equipment);
        }
        void Salle::removeEquipments(std::string equipment)
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
        bool Salle::isAvailable()
        {
            return (actualMovie == "" ? false : true);
        }
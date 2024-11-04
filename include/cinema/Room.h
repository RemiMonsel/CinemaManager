#ifndef ROOM_H
#define ROOM_H

#include <cstdint> // declared to use uint8_t
#include <string>
#include <vector>

class Room {
    
    private :
        /**********************/
        /***** attributes *****/
        /**********************/
        uint8_t idRoom;
        std::string roomName;
        uint16_t seatCapacity;
        std::vector<std::string> equipments;
        std::string actualMovie;

    public:
        //constructors
        Salle();

        /*********************/
        /****** methods ******/
        /*********************/

        //getters
        uint8_t getIdRoom();
        std::string getRoomName();
        uint16_t getSeatCapacity();
        std::vector<std::string> getEquipments();
        std::string getActualMovie();

        //setters
        void setRoomName(std::string name);
        void setSeatCapacity(uint8_t capacity);
        void setActualMovie(std::string movie);

        //other methods
        void addEquipments(std::string equipment);
        void removeEquipments(std::string equipment);
        bool isAvailable();


};

#endif
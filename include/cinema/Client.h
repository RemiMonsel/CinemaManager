#ifndef CLIENT_H
#define CLIENT_H

#include "../../commonLibrary/GenericLib.h"
#include "Ticket.h"

#include <cstdint> // declared to use uint8_t
#include <string>
#include <vector>

class Client {
    
    private :
        /**********************/
        /***** attributes *****/
        /**********************/
        static uint32_t clientNum;
        uint32_t clientID;
        std::string clientName;
        std::string clientEmail;
        std::string clientPhone;
        DateStruct clientBirthDate;
        uint8_t clientAge;
        std::vector<Ticket> clientPurchaseHistory;
        uint8_t clientLoyaltyPoints;

    public:
        //constructors
        Client(std::string myClientName, std::string myClientEmail, DateStruct myClientBirthDate, 
               std::string myClientPhone = "None", std::vector<Ticket> myClientPurchaseHistory = {}, uint16_t myClientLoyaltyPoints = 0);

        /*********************/
        /****** methods ******/
        /*********************/

        //getters
        uint32_t getClientID();
        std::string getClientName();
        std::string getClientEmail();
        std::string getClientPhone();
        uint8_t getAge();
        std::vector<Ticket> getPurchaseHistory();
        uint8_t getLoyaltyPoints(); 

        //setters
        void setClientName(std::string myClientName);
        void setClientEmail(std::string myClientEmail);
        void setClientPhone(std::string myClientPhone);
        void setClientAge();

        // Other methods
        void addLoyaltyPoints(uint8_t pointsToAdd);
        void showDetails();

};

#endif
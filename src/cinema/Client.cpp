#include <iostream>
#include <chrono>
#include <ctime>

#include "../../include/cinema/Client.h"

uint32_t Client::clientNum = 1U;

/**********************/
/**** constructors ****/
/**********************/
Client::Client(std::string myClientName, std::string myClientEmail, DateStruct myClientBirthDate, 
               std::string myClientPhone, std::vector<Ticket> myClientPurchaseHistory, uint16_t myClientLoyaltyPoints)
{
    clientNum++;
    clientID = clientNum;
    clientName = myClientName;
    clientEmail = myClientEmail;
    clientPhone = myClientPhone;
    clientBirthDate = myClientBirthDate;
    setClientAge();
    clientPurchaseHistory = myClientPurchaseHistory;
    clientLoyaltyPoints = myClientLoyaltyPoints;
}
/*********************/
/****** methods ******/
/*********************/

//getters
uint32_t Client::getClientID()
{
    return clientID;
}

std::string Client::getClientName()
{
    return clientName;
}

std::string Client::getClientEmail()
{
    return clientEmail;
}

std::string Client::getClientPhone()
{
    return clientPhone;
}

uint8_t Client::getAge()
{
    return clientAge;
}

std::vector<Ticket> Client::getPurchaseHistory()
{
    return clientPurchaseHistory;
}

uint8_t Client::getLoyaltyPoints()
{
    return static_cast<int>(clientLoyaltyPoints);
} 

//setters
void Client::setClientName(std::string myClientName)
{
    clientName = myClientName;
}

void Client::setClientEmail(std::string myClientEmail)
{
    clientEmail = myClientEmail;
}

void Client::setClientPhone(std::string myClientPhone)
{
    clientPhone = myClientPhone;
}

void Client::setClientAge()
{
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm * now_tm = std::localtime(&now_time);

    DateStruct today;
    today.day = now_tm->tm_mday;
    today.month = now_tm->tm_mon + 1;
    today.year = now_tm->tm_year + 1900;

    clientAge = static_cast<uint8_t>(today.year - clientBirthDate.year);

    if ((today.month < clientBirthDate.month) || ((today.month == clientBirthDate.month) && (today.day < clientBirthDate.day)))
    {
        clientAge--;
    }    
}

// Other methods
void Client::addLoyaltyPoints(uint8_t pointsToAdd)
{
    clientLoyaltyPoints += pointsToAdd;
}

void Client::showDetails()
{
    std::cout << "Client ID is : " << static_cast<int>(clientID) << std::endl;
    std::cout << "The client name is : " << clientName << std::endl;
    std::cout << "His email is : " << clientEmail << std::endl;
    std::cout << "His phone number is : " << clientPhone << std::endl;
    std::cout << "His age is : " << static_cast<int>(clientAge) << std::endl;
    std::cout << "His loyalty points count is : " << static_cast<int>(clientLoyaltyPoints) << std::endl;
    std::cout << std::endl;
}
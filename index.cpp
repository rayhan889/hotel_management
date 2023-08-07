#include<iostream>
#include<string.h>
#include<conio.h>

#define max 100
using namespace std;

class Customer
{
    char name[75];
    char address[100];
    char phone[12];
    char checkIn[20];
    char checkOut[20];
    float payment;
    int bookingId;
};

class Room
{
    char roomType;
    char size;
    bool isAc;
    int roomNumber;
    // 0 = available / 1 = unavailable;
    int status;

    class Customer customer;
    class Room addRoom(int);
    void searchRoom(int);
    void deleteRoom(int);
    void displayRoom(Room);    
};

Room Room::addRoom(int rnum)
{
    class Room room;
    cout << "Room number: \n";
    cin >> rnum;
    cout << "\n Room type: ";
    cin >> room.roomType;
    cout << "\n Room size: ";
    cin >> room.size;
    cout << "\n AC Y/N: ";
    cin >> room.isAc;
    room.status = 0;

    cout << "Room number: " << rnum << "Successfully added!";
    return room;
}

int main()
{

}

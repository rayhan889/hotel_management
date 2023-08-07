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
    bool isAvailable;

    class Customer customer;
    class Room addRoom(int);
    void searchRoom(int);
    void deleteRoom(int);
    void displayRoom(Room);    
};


int main()
{
    
}

#include<iostream>
#include<string.h>
#include<conio.h>

#define max 100
using namespace std;

class Customer
{
    public:
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
    public:
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

class Room rooms[max];
int count = 0;

Room Room::addRoom(int rnum)
{
    class Room room;
    room.roomNumber = rnum;
    cout << "\n Room type: ";
    cin >> room.roomType;
    cout << "\n Room size: ";
    cin >> room.size;
    cout << "\n AC Y/N: ";
    cin >> room.isAc;
    room.status = 0;

    cout << "\n Room number: " << rnum << "Successfully added!";
    return room;
};

void Room::displayRoom(Room room)
{
    
}

void Room::searchRoom(int rnum)
{
    int i, found = 0;
    for (i = 0; i < count; i++)
    {
        if(rooms[i].roomNumber == rnum)
        {
            found = 1;
            break;
        }     
        if(found == 1)
        {
            displayRoom(rooms[i]);
        } else {
            cout << "\n Room not found!";
        }
    }
    
};

void manageRooms()
{
    class Room room;
    int opt,i,rnum, flag = 0;

    system("cls");
    cout<<"######## Manage Rooms #########\n";
    cout<<"\n1. Add Room";
    cout<<"\n2. Search Room";
    cout<<"\n3. Back to main menu";
    cout<<"\n\nEnter Option: ";

    switch (opt)
    {
    case 1:
        cout << "\nEnter room number: ";
        cin >> rnum;
        for (i = 0; i < count; i++)
        {
            if(rooms[i].roomNumber == rnum)
            {
                flag = 1;
            }
            if(flag == 1)
            {
                cout << "\nRoom with the number already present! Please enter another number";
                flag = 0;
                getch();
            } else {
                rooms[count] = room.addRoom(rnum);
                count++;
            }
        }
        break;
    case 2:
        cout << "\nEnter room number: ";
        cin >> rnum;

        room.searchRoom(rnum);
        break;
    default:
        break;
    }  
};

int main()
{
    system("cls");
    cout<<"######## Hotel Management #########\n";
    cout<<"\n1. Manage Rooms";
    cout<<"\n2. Check-In Room";
    cout<<"\n3. Available Rooms";
    cout<<"\n4. Search Customer";
    cout<<"\n5. Check-Out Room";
    cout<<"\n6. Guest Summary Report";
    cout<<"\n7. Exit";
    cout<<"\n\nEnter Option: ";

    return 0;
};

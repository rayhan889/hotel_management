#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
#define max 100

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
        char isAc;
        int roomNumber;
        // 0 = available / 1 = unavailable;
        int status;

        class Customer customer;
        class Room addRoom(int);
        void searchRoom(int);
        void deleteRoom(int);
        void displayRoom(Room);    
};

// global declaration
class Room rooms[max];
int countRooms = 0;

Room Room::addRoom(int rnum)
{
    class Room room;
    room.roomNumber = rnum;
    cout << "\nRoom Type Deluxe/Standart (D/S) : ";
    cin >> room.roomType;
    cout << "\nRoom size Big/Small (B/S) : ";
    cin >> room.size;
    cout << "\nAC AC/NO (A/N) : ";
    cin >> room.isAc;
    room.status = 0;

    cout << "Successfully add new room!";
    getch();
    return room;
};

void Room::displayRoom(Room room)
{
    cout<<"######## Room Details #########\n";
    cout << "Room number: " << room.roomNumber;
    cout << "Type Comfort: " << room.roomType;
    cout << "Room Size: " << room.size;
    cout << "AC (Y/N): " << room.isAc;
}

void Room::searchRoom(int rnum)
{
    int i, found = 0;
    for (i = 0; i < countRooms; i++)
    {
        if(rooms[i].roomNumber == rnum)
        {
            found = 1;
            break;
        }     
    }
    if(found == 1)
    {
        displayRoom(rooms[i]);
        getch();
    } else {
        cout << "\nRoom not found!";
        getch();
    }
    
};

void manageRooms()
{
    class Room room;
    int opt,i,rnum, flag = 0;


    do
    {
        system("cls");
        cout<<"######## Manage Rooms #########\n";
        cout<<"\n1. Add Room";
        cout<<"\n2. Search Room";
        cout<<"\n3. Back to main menu";
        cout<<"\n\nEnter Option: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "\nEnter room number: ";
            cin >> rnum;
            for (i = 0; i < countRooms; i++)
            {
                if(rooms[i].roomNumber == rnum)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                cout << "\nRoom with the number already present! Please enter another number";
                flag = 0;
                getch();
            } else {
                rooms[countRooms] = room.addRoom(rnum);
                countRooms++;
                break;
            }
            break;
        case 2:
            cout << "\nEnter room number: ";
            cin >> rnum;

            room.searchRoom(rnum);
            break;
        case 3:
            break;
        default:
            cout << "\nPlease enter correct number";
            break;
        }  
    } while (opt != 3);
    
};



int main()
{
    int opt = 0;

    do
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
        cin >> opt;

        switch (opt)
        {
        case 1:
            manageRooms();
            break;
        
        default:
            break;
        }
    } while (opt != 7);
    

    return 0;
};

/*
** This is a program written in C.
** The program prompts the user to input the lengths and widths of the door,
** each window, a bookshelf, and the length, width, and height of a room.
** Prompts the user to specify the number of square feet that can
** be painted with one gallon of paint. The program outputs the number of
** gallons of paint needed to buy to paint the walls of a room.
*/

#include <stdio.h>

int main(void)
{
    //Local variable declaration.
    //Each of these variables will store a value from the user
    //Door:
    float door_length;      //door length entered
    float door_width;       //door width entered
    float door_area;        //door area result variable
    //First Window:
    float win1_length;      //window 1 length entered
    float win1_width;       //window 1 width entered
    float win1_area;        //window 1 area result variable
    //Second Window:
    float win2_length;      //window 2 length entered
    float win2_width;       //window 2 width entered
    float win2_area;        //window 2 area result variable
    //Bookshelf:
    float bookshelf_length; //bookshelf length entered
    float bookshelf_width;  //bookshelf width entered
    float bookshelf_area;   //bookshelf area result variable
    //Room:
    float room_length;      //room length entered
    float room_width;       //room width entered
    float room_height;      //room height entered
    float room_area;        //room area result variable
    //Gallon of paint:
    float a_gallon_paints;  //area painted per gallon of paint
    //Area to paint:
    float area_to_paint;    //substract door, windows and bookshelf from room
    //Gallons
    int gallons_needed;     //final result for area_to_paint/a_gallon_paints
    //User prompts.
    //prompts the user to obtain the door's length and width:
    printf("Enter door length and width: ");
    scanf("%f %f", &door_length, &door_width);

    //prompts the user to obtain window 1 length and width:
    printf("Enter window 1 length and width: ");
    scanf("%f %f", &win1_length, &win1_width);

    //prompts the user to obtain window 2 length and width:
    printf("Enter window 2 length and width: ");
    scanf("%f %f", &win2_length, &win2_width);

    //prompts the user to obtain window 2 length and width:
    printf("Enter bookshelf length and width: ");
    scanf("%f %f", &bookshelf_length, &bookshelf_width);

    //prompts the user to obtain the room's length, width, and height:
    printf("Enter room length, width, and height: ");
    scanf("%f %f %f", &room_length, &room_width, &room_height);

    //prompts the user for he number of square feet that can be painted
    //with one gallon of paint
    printf("Enter area painted per gallon of paint: ");
    scanf("%f", &a_gallon_paints);
    printf("\n");
    //Processing formulas to obtain the area!
    //Door
    door_area = door_length * door_width;
    //First window
    win1_area = win1_length * win1_width;
    //Second window
    win2_area = win2_length * win2_width;
    //Bookshelf
    bookshelf_area = bookshelf_length * bookshelf_width;
    //Room
    room_area = (room_length * room_height)*2 + (room_width * room_height)*2;
    //Area to paint
    area_to_paint = room_area - (door_area + win1_area + win2_area
                                 + bookshelf_area);
    //Gallons needed
    //0.5 was added to the equation to do proper rounding
    //(int) cast will get rid of the value after the decimal
    //casting to an (int) truncates the value
    gallons_needed = (int) ((area_to_paint / a_gallon_paints) + 0.5);

    printf("You should buy %d gallons of paint.", gallons_needed);
    printf("\n");

    return 0;

    } //main

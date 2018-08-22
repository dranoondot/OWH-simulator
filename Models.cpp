#include "Models.h"
#include <iostream>
#include <IMGP3>
int main()
{
//Importing Characters from Blender
Import(MainCharacter.3DS, CoCharacter1.3DS, 
CoCharacter1.3DS, CoCharacter2.3DS, 
CoCharacter3.3DS, CoCharacter4.3DS, 
CoCharacter5.3DS, CoCharacter6.3DS, 
CoCharacter7.3DS, CoCharacter8.3DS, 
CoCharacter9.3DS, CoCharacter10.3DS, 
CoCharacter11.3DS, CoCharacter12.3DS, 
CoCharacter13.3DS, CoCharacter14.3DS);
//Clarifying Variables from header file
Main_Character(McName, McAge, 
MainCharacter);
cin >> Main_Character;
//Assigning the variables 
Co_Character(CoCharacter1.3DS, "Jacky", 23, 
CoCharacter2.3DS, "Rex", 19, 
CoCharacter3.3DS);
//Will be updated soon
return 0;
}

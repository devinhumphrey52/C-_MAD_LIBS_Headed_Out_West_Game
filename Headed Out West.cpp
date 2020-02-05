// Headed Out West.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Game Intro
    cout << "\n";
    cout << "\n";
    cout << "Howdy Stranger, your destiny will intertwine with some of the most infamous outlaws of the wild wild west\n";
    cout << "\n";

    //Introduces you to the world
    string charactersName;
    cout << "Please enter your desired character's name.\n";
    cout << "\n";
    getline(cin, charactersName);
    cout << "\n";

    //Guide Introduction
    cout << "Hello, " + charactersName + " My name is Doc Holiday I will be your guide on this amazing journey.\n";
    cout << "We will be leaving at the top of the hour, grab enough supplies to sustain you, and meet me at the stables.\n";
    cout << "Here's you some gold coins to get you started.\n";
    cout << "5 gold was added to your wallet.\n";
    const int WALLET = 5;
    cout << "\n";

    //General Store
    cout << "You arrive at the General Store, a group has emerged glaring at you with fear.\n";
    cout << "You are greeted by a short stocky general store clerk named, 'Tom' with a rough raspidy voice.\n";
    cout << "I heard about you, " + charactersName + " please have a look at my inventory, anything for a 'dead man'!\n";
    cout << "If you would like to purchase any of these items there only 1 gold a piece; Pistols = 1, Rifle = 2, Ammo = 3, or Jerkey = 4.\n";
    cout << "Tom has a very simple mind and states only one item at a time and orderly.\n";
    cout << "\n";
    int Pistols = 1;
    int Rifles = 1;
    int Ammo = 1;
    int Jerkey = 1;
    cin >> Pistols;
    cout << "Two Colt 45 Six Shooters have been added to your inventory\n";
    cout << "\n";
    cout << "Your wallet now contains ";
    cout << WALLET - Pistols;
    cout << " gold pieces!\n";
    cin >> Rifles;
    cout << "One 30-30 Model 94 Winchester has been added to your inventory\n";
    cout << "\n";
    cout << "Your wallet now contains ";
    cout << WALLET - Rifles;
    cout << " gold pieces!\n";
    cin >> Ammo;
    cout << "Pistol and Rifle Ammo has been added to your inventory\n";
    cout << "\n";
    cout << " Your wallet now contains ";
    cout << WALLET - Ammo;
    cout << " gold pieces!\n";
    cin >> Jerkey;
    cout << "A weeks supply of Jerkey has been added to your inventory\n";
    cout << "\n";
    cout << " Your wallet now contains ";
    cout << WALLET - Jerkey;
    cout << " gold piece!\n";
    cout << "\n";
    cout << "Tom says pleasure doing business with you, too bad I won't be seeing you around.\n";
    cout << "\n";
    cout << "\n";

    //Stables and the escape
    cout << "You hold your composure and take a deep breath and walk to the stables to meet up with Doc.\n";
    cout << "\n";
    cout << "You arrive at the stables, hear a gun shot and Doc screams out in pain, help! I've been shot!\n";
    cout << "You run up to Doc and with his last dying breath he says, meet Wyatt at the rendezvou, in Dodge City, tell him Butch Cassady and the Sundance kid are alive. Here Take my horse!\n";
    cout << "A crowd has gathered and is quickly approaching. You can here yelling and screaming in the distance, He killed Doc, lets string him up!\n";
    cout << "\n";
    cout << "Will you depart town?\n";
    cout << "Yes or No\n";
    string Yes;
    string No;
    cin >> Yes;
    cout << "\n";
    cout << "Hope you enjoyed the demo, to be continued!";
    cin >> No;
    cout << "\n";
    cout << "Hope you enjoyed the demo, to be continued!";
    cout << "\n";
    system("PAUSE");

    
}


#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout << "Welcome to our adventure game!\n\n";
    cout << "In this game, you will face a world that requires your skills to survive.\n";
    cout << "There will be a few scenarios to pick and choose from.\n";
    cout << "Also, in each situation a choice will be given and you will be asked for your answer.\n";
    cout << "After your choice, the story will end or keep on progressing...\n\n\n";

    cout << "Here are a list of scenarios to play through:\n";
    cout << "1. Nuclear Adventure\n";
    cout << "2. Western Adventure\n";

    cout << "Your choice?\n";
    cin >> choice;
    cout << endl;

    if(choice == 1)
    {
    cout << "The Nuclear Scenario\n\n";
    cout << "You wake up in your bed and notice the chaos around you.\n";
    cout << "You watch the news and bad things are going down.\n";
    cout << "There are explosions in the distance, something is wrong here.\n\n";

    cout << "You have to make a decision!\n";
    cout << "Here are your options.\n\n";

    cout << "1. Leave through the front door and get to your car.\n";
    cout << "2. Contact law enforcement.\n";
    cout << "3. Meet up with friends and family.\n";
    cout << "4. Stay inside your home and wait it out.\n\n";

    cout << "Your choice?\n";
    cin >> choice;
    cout << endl;

    if(choice == 1)
    {
        cout << "You dash out the front door and try to get to your car.\n";
        cout << "The car kicks on and you start driving to your local fallout shelter.\n\n";
    }
    else if(choice == 2)
    {
        cout << "Nobody picks up.\n";
        cout << "You get to thinking that the fallout shelter is your best bet.\n";
        cout << "You set out and drive down to the shelter.\n\n";
    }
    else if(choice == 3)
    {
        cout << "You call your family and friends.\n";
        cout << "They said they are safe and sound at the fallout shelter.\n";
        cout << "You are relieved.\n";
        cout << "You head to the fallout shelter.\n\n";
    }
    else if(choice == 4)
    {
        cout << "You wait until this whole thing blows over.\n";
        cout << "You grab a drink from the fridge and watch some sports.\n";
        cout << "A nuclear bomb hits in your area and the shock wave hits everything in 100 square miles.\n";
        cout << "The nuclear bomb burns everything around its radius to dust.\n";
        cout << "You died.\n\n";
        return(0);
    }
    else
    {
        cout << "That was not an option.\n";
        cout << "The bombs dropped and you were caught in the blast zone.\n";
        cout << "You died.\n";
        return(0);
    }

    cout << "You arrive at the fallout shelter.\n";
    cout << "They've made some improvements since the government provided large amounts of funding.\n";
    cout << "It's like they knew something big was gonna happen.\n";
    }
    else if(choice == 2)
    {
        cout << "The Western Scenario\n\n";
        cout << "You play the role of a courier delivering a package to the New Vegas Strip.\n";
        cout << "On your way to the place marked by the Mojave Express(your company),\n";
        cout << "A strange man, in a checkered suit, ambushes you and shoots you in the head.... Leaving you for dead.\n";
        cout << "You wake up in a clinic wondering what happened remembering that your package is gone.\n";
        cout << "A helpful robot named victor saved you and brought you to the nearest clinic located in the desert town of Goodsprings.\n";
        cout << "Doc Mitchell is the one attending to you now.\n";
        cout << "The doc sends you on your way with his old gear and you thank him for his help.\n";
        cout << "Your new goal is to find the stranger who stole your package and get revenge.\n";

        cout << "What do you do?\n\n";
        cout << "1. Ask for directions.\n";
        cout << "2. Follow the road left.\n";
        cout << "3. Follow the road right.\n";
        cout << "4. Do nothing.\n\n";

        cout << "Your choice?\n";
        cin >> choice;
        cout << endl;

        if(choice == 1)
        {
            cout << "You spot Victor and ask for some directions.\n";
            cout << "He tells you that going left down the road is your best bet.\n";
            cout << "It will be more dangerous though.\n\n";

            cout << "You follow the road left.\n\n";

            cout << "You come across a makeshift camp and spot some men in armor.\n";
            cout << "You notice a flag with a Mongolian skull with horns near the camp.\n";
            cout << "The people there aren't hostile and wondered what you were doing hanging around.\n";
            cout << "You ask about your assailant and see if they know anything.\n";
            cout << "Turns out they do, his name is Benny and is wanted by the Khans.\n";
            cout << "They point you towards their camp in the Red Rock Canyon.\n";
            cout << "They also point to the 'The Strip' where Benny can be located most likely.\n";
            cout << "You now know who stole your package and where he could be.\n\n";

            cout << "You travel further down the road and come across another crossroad.\n";

            cout << "You have a few options here:\n\n";
            cout << "1. You go left.\n";
            cout << "2. You go right.\n\n";

            cout << "Your choice?\n";
            cin >> choice;
            cout << endl;

            if(choice == 1)
            {
                cout << "You go left.\n";
                cout << "You head forward until you spot a gas station and head its way.\n";
                cout << "You stop for some supplies and go on your way.\n";
                cout << "The legendary 'Welcome to New Vegas' sign comes into view.\n";
                cout << "You feel you are close to getting your revenge.\n\n";

                cout << "Some fiends jump you while walking down the road.\n";
                cout << "They are going to kill you unless you follow them back to their base.\n";

                cout << "You have a few options here:\n\n";
                cout << "1. Say no and attack them first.\n";
                cout << "2. Say yes and follow them.\n";
                cout << "3. Run past them as fast as you can.\n";

                cout << "Your choice?\n";
                cin >> choice;
                cout << endl;

                if(choice == 1)
                {
                    cout << "You say no and attack them first.\n";
                    cout << "You get the jump on them with a grenade Doc Mitchell gave you (just in case).\n";
                    cout << "The grenade goes off and takes out the group with ease.\n";
                    cout << "You walk past feeling accomplished.\n";
                    cout << "You continue down the road until you come upon Freeside.\n";
                    cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n\n";

                    cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                    cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                    cout << "You show them your order number and they let you through.\n";
                    cout << "You come across Victor once again.\n";
                    cout << "You don't know how he got here, but he's here now.\n\n";

                    cout << "You have two options here:\n\n";
                    cout << "1. Ask Victor for some help finding Benny.\n";
                    cout << "2. Spend all your money on gambling.\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You ask Victor for some help finding Benny.\n";
                        cout << "He says 'Howdy partner, its been a while!'.\n";
                        cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                        cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                        cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                        cout << "The goal on the to do list is to go to the 'Tops'.\n";

                        cout << "You come upon the Tops Casino.\n";
                        cout << "You enter and are approached by security for a pat down for weapons.\n";
                        cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                        cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                        cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                        cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                        cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                        cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                        cout << "You meet Benny up in the suite.\n";
                        cout << "He sees you and is shocked.\n";
                        cout << "Benny says that he can't believe that you are still alive.\n";
                        cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                        cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                        cout << "Benny asks him if you are going to kill him.\n";

                        cout << "You have two options here:\n\n";
                        cout << "1. Kill Benny on the spot.\n";
                        cout << "2. Tell him that you won't kill him.\n";

                        cout << "Your choice?\n";
                        cin >> choice;
                        cout << endl;

                        if(choice == 1)
                        {
                            cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                            cout << "You know he won't survive like you did.\n";
                            cout << "You walk down to Swank and tell him that it's done.\n";
                            cout << "The doors open and you leave the Strip once and for all.\n";
                            cout << "It's over and done.\n";
                            cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                            cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                            cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                            cout << "That was the end of the Western Scenario.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else if(choice == 2)
                        {
                            cout << "You tell him that you won't kill him";
                            cout << "He says you have no backbone and walks away.\n";
                            cout << "Fast forward a few minutes and there is knocking on the door.\n";
                            cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                            cout << "You hear the intercom in the background.\n";
                            cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                            cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                            cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                            cout << "You never got your revenge and you died.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else
                        {
                            cout << "That was not an option.\n";
                            cout << "Why would you not choose an option here?\n";
                            cout << "The game is over now.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        }
                        else if(choice == 2)
                        {
                            cout << "You spend the rest of your money gambling.\n";
                            cout << "You end up out in Freeside like the rest of the losers.\n";
                            cout << "You got addicted on street drugs.\n";
                            cout << "You end up dying without getting your revenge.\n\n";

                            cout << "Game over.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                }
                else if(choice == 2)
                {
                    cout << "You go right.\n";
                    cout << "";
                }

                else if(choice == 2)
                {
                    cout << "You say yes and follow them.\n";
                    cout << "They bring you to their leader.\n";
                    cout << "He kills you on the spot.\n\n";

                    cout << "You died.\n";
                }
                else if(choice == 3)
                {
                    cout << "You run past them as fast as you can.\n";
                    cout << "They lose you and you're finally safe.\n";
                    cout << "After a while of traveling again, you come upon a bright place.\n";
                    cout << "You look up and see the 'Welcome to New Vegas' sign and are wowed by the sight of it.\n";
                    cout << "You  look for an entrance and end up in Freeside.\n";
                    cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n\n";

                    cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                    cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                    cout << "You show them your order number and they let you through.\n";
                    cout << "You come across Victor once again.\n";
                    cout << "You don't know how he got here, but he's here now.\n\n";

                    cout << "You have a few options here:\n\n";
                    cout << "1. Ask Victor for some help finding Benny.\n";
                    cout << "3. Spend all your money on gambling.\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You ask Victor for some help finding Benny.\n";
                        cout << "He says 'Howdy partner, its been a while!'.\n";
                        cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                        cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                        cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                        cout << "The goal on the to do list is to go to the 'Tops'.\n";

                        cout << "You come upon the Tops Casino.\n";
                        cout << "You enter and are approached by security for a pat down for weapons.\n";
                        cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                        cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                        cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                        cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                        cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                        cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                        cout << "You meet Benny up in the suite.\n";
                        cout << "He sees you and is shocked.\n";
                        cout << "Benny says that he can't believe that you are still alive.\n";
                        cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                        cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                        cout << "Benny asks him if you are going to kill him.\n";

                        cout << "You have two options here:\n\n";
                        cout << "1. Kill Benny on the spot.\n";
                        cout << "2. Tell him that you won't kill him.\n";

                        cout << "Your choice?\n";
                        cin >> choice;
                        cout << endl;

                        if(choice == 1)
                        {
                            cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                            cout << "You know he won't survive like you did.\n";
                            cout << "You walk down to Swank and tell him that it's done.\n";
                            cout << "The doors open and you leave the Strip once and for all.\n";
                            cout << "It's over and done.\n";
                            cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                            cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                            cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                            cout << "That was the end of the Western Scenario.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else if(choice == 2)
                        {
                            cout << "You tell him that you won't kill him";
                            cout << "He says you have no backbone and walks away.\n";
                            cout << "Fast forward a few minutes and there is knocking on the door.\n";
                            cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                            cout << "You hear the intercom in the background.\n";
                            cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                            cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                            cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                            cout << "You never got your revenge and you died.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else
                        {
                            cout << "That was not an option.\n";
                            cout << "Why would you not choose an option here?\n";
                            cout << "The game is over now.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                    }
                    else if(choice == 2)
                        {
                            cout << "You spend the rest of your money gambling.\n";
                            cout << "You end up out in Freeside like the rest of the losers.\n";
                            cout << "You got addicted on street drugs.\n";
                            cout << "You end up dying without getting your revenge.\n\n";

                            cout << "Game over.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }

                }
                else
                {
                    cout << "That was not an option.\n";
                    cout << "You do nothing.\n";
                    cout << "The fiends attack you.\n\n";

                    cout << "You died.\n";
                }
        }}
        else if(choice == 2)
        {
            cout << "You follow the road left.\n\n";

            cout << "You come across a makeshift camp and spot some men in armor.\n";
            cout << "You notice a flag with a Mongolian skull with horns near the camp.\n";
            cout << "The people there aren't hostile and wondered what you were doing hanging around.\n";
            cout << "You ask about your assailant and see if they know anything.\n";
            cout << "Turns out they do, his name is Benny and is wanted by the Khans.\n";
            cout << "They point you towards their camp in the Red Rock Canyon.\n";
            cout << "They also point to the 'The Strip' where Benny can be located most likely.\n";
            cout << "You now know who stole your package and where he could be.\n\n";

            cout << "You travel further down the road and come across another crossroad.\n";

            cout << "You have a few options here:\n\n";
            cout << "1. You go left.\n";
            cout << "2. You go right.\n\n";

            cout << "Your choice?\n";
            cin >> choice;
            cout << endl;

            if(choice == 1)
            {
                cout << "You go left.\n";
                cout << "You head forward until you spot a gas station and head its way.\n";
                cout << "You stop for some supplies and go on your way.\n";
                cout << "The legendary 'Welcome to New Vegas' sign comes into view.\n";
                cout << "You feel you are close to getting your revenge.\n\n";

                cout << "Some fiends jump you while walking down the road.\n";
                cout << "They are going to kill you unless you follow them back to their base.\n";

                cout << "You have a few options here:\n\n";
                cout << "1. Say no and attack them first.\n";
                cout << "2. Say yes and follow them.\n";
                cout << "3. Run past them as fast as you can.\n";

                cout << "Your choice?\n";
                cin >> choice;
                cout << endl;

                if(choice == 1)
                {
                    cout << "You say no and attack them first.\n";
                    cout << "You get the jump on them with a grenade Doc Mitchell gave you (just in case).\n";
                    cout << "The grenade goes off and takes out the group with ease.\n";
                    cout << "You walk past feeling accomplished.\n";
                    cout << "You continue down the road until you come upon Freeside.\n";
                    cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n\n";

                    cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                    cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                    cout << "You show them your order number and they let you through.\n";
                    cout << "You come across Victor once again.\n";
                    cout << "You don't know how he got here, but he's here now.\n\n";

                    cout << "You have a few options here:\n\n";
                    cout << "1. Ask Victor for some help finding Benny.\n";
                    cout << "2. Spend all your money on gambling.\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You ask Victor for some help finding Benny.\n";
                        cout << "He says 'Howdy partner, its been a while!'.\n";
                        cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                        cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                        cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                        cout << "The goal on the to do list is to go to the 'Tops'.\n";

                        cout << "You come upon the Tops Casino.\n";
                        cout << "You enter and are approached by security for a pat down for weapons.\n";
                        cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                        cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                        cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                        cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                        cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                        cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                        cout << "You meet Benny up in the suite.\n";
                        cout << "He sees you and is shocked.\n";
                        cout << "Benny says that he can't believe that you are still alive.\n";
                        cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                        cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                        cout << "Benny asks him if you are going to kill him.\n";

                        cout << "You have two options here:\n\n";
                        cout << "1. Kill Benny on the spot.\n";
                        cout << "2. Tell him that you won't kill him.\n";

                        cout << "Your choice?\n";
                        cin >> choice;
                        cout << endl;

                        if(choice == 1)
                        {
                            cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                            cout << "You know he won't survive like you did.\n";
                            cout << "You walk down to Swank and tell him that it's done.\n";
                            cout << "The doors open and you leave the Strip once and for all.\n";
                            cout << "It's over and done.\n";
                            cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                            cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                            cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                            cout << "That was the end of the Western Scenario.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else if(choice == 2)
                        {
                            cout << "You tell him that you won't kill him";
                            cout << "He says you have no backbone and walks away.\n";
                            cout << "Fast forward a few minutes and there is knocking on the door.\n";
                            cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                            cout << "You hear the intercom in the background.\n";
                            cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                            cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                            cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                            cout << "You never got your revenge and you died.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else
                        {
                            cout << "That was not an option.\n";
                            cout << "Why would you not choose an option here?\n";
                            cout << "The game is over now.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                    }
                       else if(choice == 2)
                        {
                            cout << "You spend the rest of your money gambling.\n";
                            cout << "You end up out in Freeside like the rest of the losers.\n";
                            cout << "You got addicted on street drugs.\n";
                            cout << "You end up dying without getting your revenge.\n\n";

                            cout << "Game over.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                }
                else if(choice == 2)
                {
                    cout << "You say yes and follow them.\n";
                    cout << "They bring you to their leader.\n";
                    cout << "He kills you on the spot.\n\n";

                    cout << "You died.\n";
                }
                else if(choice == 3)
                {
                    cout << "You run past them as fast as you can.\n\n";
                    cout << "They lose you and you're finally safe.\n";
                    cout << "After a while of traveling again, you come upon a bright place.\n";
                    cout << "You look up and see the 'Welcome to New Vegas' sign and are wowed by the sight of it.\n";
                    cout << "You  look for an entrance and end up in Freeside.\n";
                    cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n\n";

                    cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                    cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                    cout << "You show them your order number and they let you through.\n";
                    cout << "You come across Victor once again.\n";
                    cout << "You don't know how he got here, but he's here now.\n\n";

                    cout << "You have two options here:\n\n";
                    cout << "1. Ask Victor for some help finding Benny.\n";
                    cout << "2. Spend all your money on gambling.\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You ask Victor for some help finding Benny.\n";
                        cout << "He says 'Howdy partner, its been a while!'.\n";
                        cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                        cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                        cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                        cout << "The goal on the to do list is to go to the 'Tops'.\n";

                        cout << "You come upon the Tops Casino.\n";
                        cout << "You enter and are approached by security for a pat down for weapons.\n";
                        cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                        cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                        cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                        cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                        cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                        cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                        cout << "You meet Benny up in the suite.\n";
                        cout << "He sees you and is shocked.\n";
                        cout << "Benny says that he can't believe that you are still alive.\n";
                        cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                        cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                        cout << "Benny asks him if you are going to kill him.\n";

                        cout << "You have two options here:\n\n";
                        cout << "1. Kill Benny on the spot.\n";
                        cout << "2. Tell him that you won't kill him.\n";

                        cout << "Your choice?\n";
                        cin >> choice;
                        cout << endl;

                        if(choice == 1)
                        {
                            cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                            cout << "You know he won't survive like you did.\n";
                            cout << "You walk down to Swank and tell him that it's done.\n";
                            cout << "The doors open and you leave the Strip once and for all.\n";
                            cout << "It's over and done.\n";
                            cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                            cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                            cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                            cout << "That was the end of the Western Scenario.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else if(choice == 2)
                        {
                            cout << "You tell him that you won't kill him";
                            cout << "He says you have no backbone and walks away.\n";
                            cout << "Fast forward a few minutes and there is knocking on the door.\n";
                            cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                            cout << "You hear the intercom in the background.\n";
                            cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                            cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                            cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                            cout << "You never got your revenge and you died.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else
                        {
                            cout << "That was not an option.\n";
                            cout << "Why would you not choose an option here?\n";
                            cout << "The game is over now.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                    }
                       else if(choice == 2)
                        {
                            cout << "You spend the rest of your money gambling.\n";
                            cout << "You end up out in Freeside like the rest of the losers.\n";
                            cout << "You got addicted on street drugs.\n";
                            cout << "You end up dying without getting your revenge.\n\n";

                            cout << "Game over.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                }
                else
                {
                    cout << "That was not an option.\n\n";
                    cout << "You do nothing.\n";
                    cout << "The fiends attack you.\n\n";

                    cout << "You died.\n";
                }
            }
            else if(choice == 2)
            {
                cout << "You go right.\n\n";
                cout << "You come upon a farmstead and ask for some info.\n";
                cout << "They can't help all that much other than just saying that 'The Strip' is your best bet.\n";
                cout << "You take that advice and head there immediately.\n\n";

                cout << "You end up by the 'Welcome to New Vegas' sign.\n";
                cout << "You look for an entrance to get in.\n";
                cout << "You wander and find a place called Freeside.\n";
                cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n\n";

                cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                cout << "You show them your order number and they let you through.\n";
                cout << "You come across Victor once again.\n";
                cout << "You don't know how he got here, but he's here now.\n\n";

                cout << "You have two options here:\n\n";
                cout << "1. Ask Victor for some help finding Benny.\n";
                cout << "2. Spend all your money on gambling.\n";

                cout << "Your choice?\n";
                cin >> choice;
                cout << endl;

                if(choice == 1)
                {
                    cout << "You ask Victor for some help finding Benny.\n";
                    cout << "He says 'Howdy partner, its been a while!'.\n";
                    cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                    cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                    cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                    cout << "The goal on the to do list is to go to the 'Tops'.\n";

                    cout << "You come upon the Tops Casino.\n";
                    cout << "You enter and are approached by security for a pat down for weapons.\n";
                    cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                    cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                    cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                    cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                    cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                    cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                    cout << "You meet Benny up in the suite.\n";
                    cout << "He sees you and is shocked.\n";
                    cout << "Benny says that he can't believe that you are still alive.\n";
                    cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                    cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                    cout << "Benny asks him if you are going to kill him.\n";

                    cout << "You have two options here:\n\n";
                    cout << "1. Kill Benny on the spot.\n";
                    cout << "2. Tell him that you won't kill him.\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                        cout << "You know he won't survive like you did.\n";
                        cout << "You walk down to Swank and tell him that it's done.\n";
                        cout << "The doors open and you leave the Strip once and for all.\n";
                        cout << "It's over and done.\n";
                        cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                        cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                        cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                        cout << "That was the end of the Western Scenario.\n\n";

                        cout << "THANKS FOR PLAYING!!!\n";
                    }
                    else if(choice == 2)
                    {
                        cout << "You tell him that you won't kill him";
                        cout << "He says you have no backbone and walks away.\n";
                        cout << "Fast forward a few minutes and there is knocking on the door.\n";
                        cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                        cout << "You hear the intercom in the background.\n";
                        cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                        cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                        cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                        cout << "You never got your revenge and you died.\n\n";

                        cout << "THANKS FOR PLAYING!!!\n";
                    }
                    else
                    {
                        cout << "That was not an option.\n";
                        cout << "Why would you not choose an option here?\n";
                        cout << "The game is over now.\n\n";

                        cout << "THANKS FOR PLAYING!!!\n";
                    }
                }
                   else if(choice == 2)
                        {
                            cout << "You spend the rest of your money gambling.\n";
                            cout << "You end up out in Freeside like the rest of the losers.\n";
                            cout << "You got addicted on street drugs.\n";
                            cout << "You end up dying without getting your revenge.\n\n";

                            cout << "Game over.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
            }
            else
            {
                cout << "That was not an option.\n\n";
                cout << "A deathclaw attacks you.\n";
                cout << "You died.\n\n";
            }
        }
        else if(choice == 3)
        {
            cout << "You follow the road right.\n\n";

            cout << "You come to a town housing a large casino.\n";
            cout << "The town's name is Primm.\n";
            cout << "You notice the signs when coming in and asked for those incoming to stay away.\n";
            cout << "There's an encampment watching over a bridge connecting to the main city.\n";
            cout << "A camp resides before the bridge and has a flag of a two headed bear.\n";
            cout << "They are known as the New California Republic (NCR).\n\n";

            cout << "You have a few options here:\n\n";

            cout << "1. Approach the camp and ask for some info about the man that shot you.\n";
            cout << "2. Ignore the camp and keep moving forward.\n\n";

            cout << "Your choice?\n";
            cin >> choice;
            cout << endl;

            if(choice == 1)
            {
                cout << "You approach the camp.\n\n";
                cout << "You ask the person in charge.\n";
                cout << "He shrugs you off and says he has his own problems to deal with.\n\n";

                cout << "You can offer your help here:\n\n";

                cout << "1. Offer your help\n";
                cout << "2. Do not offer your help\n\n";

                cout << "Your choice?\n";
                cin >> choice;
                cout << endl;

                if(choice == 1)
                {
                    cout << "You offer your help with their situation.\n\n";
                    cout << "The officer in charge asks for you to get rid of Primm's powder ganger problem.\n";
                    cout << "He says he can help you if you help him first.\n";
                    cout << "You decide to help out hoping to get information about the one who assaulted you.\n\n";

                    cout << "It takes some time, but they thank you for it.\n";
                    cout << "They tell you about a man named Benny after your description of a man in a checkered suit.\n";
                    cout << "You help clean up the town and they point you towards the 'The Strip' which lies in the bustling parts of New Vegas.\n";
                    cout << "You make your way up to 'The Strip'.\n\n";

                    cout << "Fast forward a boring trip across the wasteland, you come upon Freeside.\n";
                    cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n";

                    cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                    cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                    cout << "You show them your order number and they let you through.\n";
                    cout << "You come across Victor once again.\n";
                    cout << "You don't know how he got here, but he's here now.\n\n";

                    cout << "You have two options here:\n\n";
                    cout << "1. Ask Victor for some help finding Benny.\n";
                    cout << "2. Spend all your money on gambling.\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You ask Victor for some help finding Benny.\n";
                        cout << "He says 'Howdy partner, its been a while!'.\n";
                        cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                        cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                        cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                        cout << "The goal on the to do list is to go to the 'Tops'.\n";

                        cout << "You come upon the Tops Casino.\n";
                        cout << "You enter and are approached by security for a pat down for weapons.\n";
                        cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                        cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                        cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                        cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                        cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                        cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                        cout << "You meet Benny up in the suite.\n";
                        cout << "He sees you and is shocked.\n";
                        cout << "Benny says that he can't believe that you are still alive.\n";
                        cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                        cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                        cout << "Benny asks him if you are going to kill him.\n";

                        cout << "You have two options here:\n\n";
                        cout << "1. Kill Benny on the spot.\n";
                        cout << "2. Tell him that you won't kill him.\n";

                        cout << "Your choice?\n";
                        cin >> choice;
                        cout << endl;

                        if(choice == 1)
                        {
                            cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                            cout << "You know he won't survive like you did.\n";
                            cout << "You walk down to Swank and tell him that it's done.\n";
                            cout << "The doors open and you leave the Strip once and for all.\n";
                            cout << "It's over and done.\n";
                            cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                            cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                            cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                            cout << "That was the end of the Western Scenario.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else if(choice == 2)
                        {
                            cout << "You tell him that you won't kill him";
                            cout << "He says you have no backbone and walks away.\n";
                            cout << "Fast forward a few minutes and there is knocking on the door.\n";
                            cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                            cout << "You hear the intercom in the background.\n";
                            cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                            cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                            cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                            cout << "You never got your revenge and you died.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                        else
                        {
                            cout << "That was not an option.\n";
                            cout << "Why would you not choose an option here?\n";
                            cout << "The game is over now.\n\n";

                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                    }
                       else if(choice == 2)
                        {
                            cout << "You spend the rest of your money gambling.\n";
                            cout << "You end up out in Freeside like the rest of the losers.\n";
                            cout << "You got addicted on street drugs.\n";
                            cout << "You end up dying without getting your revenge.\n\n";

                            cout << "Game over.\n\n";
                            cout << "THANKS FOR PLAYING!!!\n";
                        }
                }
                else if(choice == 2)
                {
                    cout << "You decide to not offer your help.\n\n";
                    cout << "You go on your way.\n\n";

                    cout << "You travel until you see a crossroad once again.\n";
                    cout << "You have two options here:\n\n";

                    cout << "1. Go straight\n";
                    cout << "2. Go left\n\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You decide to keep traveling straight down the road.\n\n";
                        cout << "You come to an outpost up ahead.\n";
                        cout << "You see the two headed bear flag hanging above.\n";
                        cout << "You realize this is an outpost for the NCR.";
                        cout << "This was not the way to go at all.\n";
                        cout << "You take a 180 and go the other way back towards Goodsprings.\n";

                        cout << "You spot Victor and ask for some directions.\n";
                        cout << "He tells you that going left down the road is your best bet.\n";
                        cout << "It will be more dangerous though.\n\n";

                        cout << "You follow the road left.\n\n";

                        cout << "You come across a makeshift camp and spot some men in armor.\n";
                        cout << "You notice a flag with a Mongolian skull with horns near the camp.\n";
                        cout << "The people there aren't hostile and wondered what you were doing hanging around.\n";
                        cout << "You ask about your assailant and see if they know anything.\n";
                        cout << "Turns out they do, his name is Benny and is wanted by the Khans.\n";
                        cout << "They point you towards their camp in the Red Rock Canyon.\n";
                        cout << "They also point to the 'The Strip' where Benny can be located most likely.\n";
                        cout << "You now know who stole your package and where he could be.\n\n";

                        cout << "You travel further down the road and come across another crossroad.\n";

                        cout << "You have a few options here:\n\n";
                        cout << "1. You go left.\n";
                        cout << "2. You go right.\n\n";

                        cout << "Your choice?\n";
                        cin >> choice;
                        cout << endl;

                        if(choice == 1)
                        {
                            cout << "You go left.\n";
                            cout << "You head forward until you spot a gas station and head its way.\n";
                            cout << "You stop for some supplies and go on your way.\n";
                            cout << "The legendary 'Welcome to New Vegas' sign comes into view.\n";
                            cout << "You feel you are close to getting your revenge.\n\n";

                            cout << "Some fiends jump you while walking down the road.\n";
                            cout << "They are going to kill you unless you follow them back to their base.\n";

                            cout << "You have a few options here:\n\n";
                            cout << "1. Say no and attack them first.\n";
                            cout << "2. Say yes and follow them.\n";
                            cout << "3. Run past them as fast as you can.\n";

                            cout << "Your choice?\n";
                            cin >> choice;
                            cout << endl;

                            if(choice == 1)
                            {
                                cout << "You say no and attack them first.\n";
                                cout << "You get the jump on them with a grenade Doc Mitchell gave you (just in case).\n";
                                cout << "The grenade goes off and takes out the group with ease.\n";
                                cout << "You walk past feeling accomplished.\n";
                                cout << "You continue down the road until you come upon Freeside.\n";
                                cout << "Freeside is the place where people who hit rock bottom go after getting thrown out of 'The Strip'.\n\n";

                                cout << "You make your way downtown in Freeside to the Strip's gate and ask for permission to get in.\n";
                                cout << "A set of securitrons (Large automated robots) guard the gate.\n";
                                cout << "You show them your order number and they let you through.\n";
                                cout << "You come across Victor once again.\n";
                                cout << "You don't know how he got here, but he's here now.\n\n";

                                cout << "You have two options here:\n\n";
                                cout << "1. Ask Victor for some help finding Benny.\n";
                                cout << "2. Spend all your money on gambling.\n";

                                cout << "Your choice?\n";
                                cin >> choice;
                                cout << endl;

                                if(choice == 1)
                                {
                                    cout << "You ask Victor for some help finding Benny.\n";
                                    cout << "He says 'Howdy partner, its been a while!'.\n";
                                    cout << "Victor says he had known about Benny all this time and didn't want you to go down this dangerous road.\n";
                                    cout << "He tells you about his connection to him and 'The Strip' in general.\n";
                                    cout << "You find out that he runs and owns a casino near there called 'Tops'.\n";
                                    cout << "The goal on the to do list is to go to the 'Tops'.\n";

                                    cout << "You come upon the Tops Casino.\n";
                                    cout << "You enter and are approached by security for a pat down for weapons.\n";
                                    cout << "You ask the front desk about a man in a checkered suit named Benny.\n";
                                    cout << "You find out that the attendant, named Swank, is the right hand man of Benny.\n";
                                    cout << "You tell Swank your story and journey about what happened to you and about your package being stolen.\n";
                                    cout << "He sympathizes and tells you about how slick and sly Benny has been for the longest time.\n";
                                    cout << "Swank is persuaded with enough evidence to finally get rid of him.\n";
                                    cout << "He calls Benny up to his suite and tells you meet him up there and finish the job.\n\n";

                                    cout << "You meet Benny up in the suite.\n";
                                    cout << "He sees you and is shocked.\n";
                                    cout << "Benny says that he can't believe that you are still alive.\n";
                                    cout << "He says, 'I hit what I was aiming for. Guess you had brains to spare. Or are you just thick-skulled?'\n";
                                    cout << "Anyhow, baby, you didn't come here for vengeance. You came to get clued in.\n\n";
                                    cout << "Benny asks him if you are going to kill him.\n";

                                    cout << "You have two options here:\n\n";
                                    cout << "1. Kill Benny on the spot.\n";
                                    cout << "2. Tell him that you won't kill him.\n";

                                    cout << "Your choice?\n";
                                    cin >> choice;
                                    cout << endl;

                                    if(choice == 1)
                                    {
                                        cout << "You pull out your pistol and shot him in the head just like he did to you.\n";
                                        cout << "You know he won't survive like you did.\n";
                                        cout << "You walk down to Swank and tell him that it's done.\n";
                                        cout << "The doors open and you leave the Strip once and for all.\n";
                                        cout << "It's over and done.\n";
                                        cout << "You got your revenge and you fell surprisingly satisfied inside.\n";
                                        cout << "People shouldn't feel that way normally, but you're no longer normal after getting shot in the head.\n\n";

                                        cout << "You spend the rest of your days completing deliveries for the Mojave Express with a smile on your face.\n";
                                        cout << "That was the end of the Western Scenario.\n\n";

                                        cout << "THANKS FOR PLAYING!!!\n";
                                    }
                                    else if(choice == 2)
                                    {
                                        cout << "You tell him that you won't kill him";
                                        cout << "He says you have no backbone and walks away.\n";
                                        cout << "Fast forward a few minutes and there is knocking on the door.\n";
                                        cout << "You answer it and a bunch of Benny's bodyguards come up and attack you.\n";
                                        cout << "You hear the intercom in the background.\n";
                                        cout << "It says, 'Truth is, the game has been rigged from the start'.\n\n";

                                        cout << "You died, but thought you made the wrong choice with not killing Benny.\n";
                                        cout << "In your last moments, you think about what you did right and wrong and your choices that led you to that ending.\n";
                                        cout << "You never got your revenge and you died.\n\n";

                                        cout << "THANKS FOR PLAYING!!!\n";
                                    }
                                    else
                                    {
                                        cout << "That was not an option.\n";
                                        cout << "Why would you not choose an option here?\n";
                                        cout << "The game is over now.\n\n";

                                        cout << "THANKS FOR PLAYING!!!\n";
                                    }
                                }
                            }
            else if(choice == 2)
            {
                cout << "You keep moving forward.\n";

                cout << "You wander the roads for some time until coming upon another town by the name of Nipton.\n\n";
                cout << "The city is filled with chaos, people hung on crosses, buildings destroyed and on fire.\n";
                cout << "Someone runs towards you with a smile on their face.\n";
                cout << "He yells that he just won the lottery!.\n";
                cout << "You ask what lottery he won and he said 'The one that matters!'\n";

                cout << "You have a few options here:\n\n";

                cout << "1. Approach the city and see what's going on.\n";
                cout << "2. Avoid the whole situation and keep moving forward.\n\n";

                cout << "Your choice?\n";
                cin >> choice;
                cout << endl;

                if(choice == 1)
                {
                    cout << "You approach the city.\n\n";
                    cout << "A flag with the symbol of a bull is held by a soldier of the group standing by the Nipton Hall.\n";
                    cout << "Someone by the name of Vulpes Inculta proceeds to greet the traveler.\n";
                    cout << "He goes on to explain his mission and who he is.\n";
                    cout << "He is part of Caeser's Legion, one of the three major factions ruling the West.\n";
                    cout << "Vulpes wants you to spread the word of Caesar's Legion.\n\n";

                    cout << "You have two options here:\n\n";

                    cout << "1. Accept his proposition and spread the word of Caesar.\n";
                    cout << "2. Tell him off and say you won't do it.\n\n";

                    cout << "Your choice?\n";
                    cin >> choice;
                    cout << endl;

                    if(choice == 1)
                    {
                        cout << "You accept his proposal and decide to spread the word of Caesar.\n";
                        cout << "You spread the word of Caesar out of fear for the rest of your life.\n";
                        cout << "Time passes and you find that you are now a man who has aged quite a lot who spread Caesar's word for years and are rewarded for your loyalty.\n";
                        cout << "Caesar sends his own personal to fetch you and meet him personally.\n";
                        cout << "You are so glad to have met him and feel that your life is finally worth living.\n";
                        cout << "You continue the rest of your life as his right hand man.\n\n";

                        cout << "THANKS FOR PLAYING!!!\n";

                    }
                    else if(choice == 2)
                    {
                        cout << "You tell off Vulpes Inculta and refuse to spread the word of Caesar.\n";
                        cout << "The group of soldiers are infuriated and attack you.\n";
                        cout << "Seeing as you are only one man, you are killed and are hung on a cross in Nipton.\n";

                        return 0;
                    }
                    else
                    {
                        cout << "That was not an option.\n\n";
                        cout << "Vulpes takes that as a no and kills you on the spot.\n";
                        cout << "You died.\n";
                    }
                }
                else if(choice == 2)
                {
                    cout << "You avoid the city, thinking that is was a good idea.\n";
                    cout << "You continue down the road.\n\n";

                    cout << "Not much later you are once again ambushed by some junkies.\n";
                    cout << "With no way to protect yourself, you are killed.\n\n";

                    cout << "You died.\n";
                    cout << "Game over.\n";
                }
                else
                {
                    cout << "That was not an option.\n\n";
                    cout << "Some members of group called Caesar's Legion spot you and chase you.\n";
                    cout << "You get caught and hung on a cross like the rest.\n";
                }
            }
            else
            {
                cout << "That was not an option.\n";
                cout << "A few powder gangers jump you and shoot you down.\n";
                cout << "You died.\n";
            }
        }
        else if(choice == 4)
        {
            cout << "You do nothing.\n\n";
            cout << "That's the end of your revenge.\n";
            cout << "You take up farming and live out your life never knowing what happened to the one who ambushed you.\n\n";

            cout << "Game over.\n";
        }
        else
        {
            cout << "That was not an option.\n\n";
            cout << "A pack of raiders surprise attack you.\n";
            cout << "You died.\n";
        }
    }
return 0;
                }}}}}

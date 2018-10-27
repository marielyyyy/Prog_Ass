#include <iostream>
using namespace std;

int main ()
{
    string playerName;


    int answer;

    int a;
    int b;
    int c;
    int answer1;
    int answer2;
    int answer3;
    int answer4;
    int answer5;
    int answer6;
    int answer7;
    int answer8;
    int badge;


    cout << "Welcome to Justice Server!" << endl;
    cin.get();

    cout << "Please enter your name: ";
    getline(cin, playerName);


    cout <<playerName << ", Are you ready to serve justice?" << endl;



    cout << "LET`S START!" << endl;



    cout << "\n Mechanics of the Game: " << endl;

    cout << "\n This game consists of 3 Categories. Every category has its own main crime scene.";
    cout << "\n In every level there is a simple mystery to solve. Your goal is to earn 40 points to earn a badge that will help to increase your rank in the next level." << endl;

    cout << "\n (Brief Flashback of the character's life)" << endl;

    cout << "\n Since the character was violated by his/her foster family, he/she was sent to an orphanage wherein people helps them to forget about their bad experience.";
    cout << "\n By that, " <<playerName << " gain an interest about the laws and serve justice for everyone who is being abused." <<endl;


    cout << "Category 1(home)";
    cout << "\n";
    cout << "In this category, the user is serving justice in which a house is the main crime scene.";
    cout << "In every level there is a simple mystery to solve.";
    cout << "The user will have to face challenges in order to gain";
    cout << "money which the user will use to buy things needed for the next level.";
    cout << "The user will earn badges in every completed mission.";
    cout <<"\n";
    cout << "\n Situation 1:";
    cout << "\n";
    cout << "While outside the house you witness that your neighbor is being physically";
    cout << "bullied by his friends, since you know a lot about having or giving justice";
    cout << "you want to help your neighbor not to be bullied again.";
    cout <<"Situation 2:";
    cout << "While you are walking to the store you saw a boy with a dog,";
    cout <<"\n";
    cout << "Mission 1:";
    cout <<"\n";
    cout << "Help your neighbor to stop his friends on";
    cout << "bullying her and help serving justice.";
    cout << "\n";

    cout << "Mission 2: ";
    cout <<"\n";
    cout << "Stop the students from using illegal drugs for it is not good for them." << endl;


    cout <<"\n What do you want to do?";

    cout <<"\n 1. Talk to the victim";
    cout <<"\n 2. Talk to the bullies";
    cout <<"\n 3. Talk to the boy";
    cout <<"\n 4. Seek help to the barangay hall";
    cout <<"\n 5.Capture the incident";
    cout <<"\n 6.Go to the principal office and tell them what you saw";
    cout <<"\n 7.Talk to them and tell them the bad effects";
    cout << "of using illegal drugs and encourage them to stop it.";

    cout << "\n Answer: ";
    cin >> answer;
    cout <<"\n";






    switch (answer)
    {

    case 1:

        if (answer == 1)
        {
            cout << "Since you like to talk to the victim, you've got to choose how!" << endl;

            cout <<"\n a. Ask what happened and tell her to let the parents of the victim to know about the incident.";

            cout <<"\n b. Ask what happened and tell her to fight back";

            cout <<"\n c. Ask what happened and tell her to take it for granted";


            cout << "\n Answer (a,b,c): ";
            cin >> answer1;
        }

        if (answer1 == a)
        {
            cout << "You got 20 points!" << endl;
            cin >> badge;
        }
        else if (answer1 == b)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }
        else if (answer1 == c)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }






    case 2:

        if (answer == 2)
        {
            cout << "\n Since you like to talk to the bullies, you've got to choose how!" << endl;

            cout << "\n a. Be the one to fight back to give justice to the bullied";

            cout << "\n b. Tell them to stop the bullying without any accompany";

            cout << "\n c. Tell them to stop the bullying with the guidance counselor";

            cout << "\n Answer (a,b,c): ";
            cin >> answer2;
        }

        if (answer2 == a)
        {
            cout << "You got a -10 points!" << endl;
            cin >> badge;
        }
        else if (answer2 == b)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }
        else if (answer2 == c)
        {
            cout << "You got 20 points" << endl;
            cin >> badge;
        }

    case 3:

        if (answer == 3)
        {
            cout << "Since you like to talk to the boy, you've got to choose how!" << endl;

            cout <<"\n a. Join him and also hit the dog";

            cout <<"\n b. Ask him what happened and tell him to calm down and stop hitting his dog";
            cout << "\n c. Hit him also with a stick ";

            cout << "\n Answer (a,b,c): ";
            cin >> answer3;
        }

        if (answer3 == a)
        {
            cout << "You got a -10 points!" << endl;
            cin >> badge;
        }
        else if (answer3 == b)
        {
            cout << "You got 20 points" << endl;
            cin >> badge;
        }
        else if (answer3 == c)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }



    case 4:
        if (answer == 4)
        {
            cout << "Since you like to seek help to the barangay hall, you've got to choose how!" << endl;

            cout <<"\n a. capture the incident and show it to the authority {-10pts}";

            cout <<"\n b. inform the authority without giving the complete details {-10pts}";

            cout << "\n c. tell the authority the incident and ask them to give the boy a punishment for hurting the dog";

            cout << "\n Answer (a,b,c): ";
            cin >> answer4;
        }

        if (answer4 == a)
        {
            cout << "You got a -10 points!" << endl;
            cin >> badge;
        }
        else if (answer4 == b)
        {
            cout << "You got 20 points" << endl;
            cin >> badge;
        }
        else if (answer4 == c)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }



    case 5:
        if (answer == 5)
        {
            cout << "Since you like to capture the incident, you've got to choose how!" << endl;

            cout <<"\n a. Take photos of the scene and go to the principal office to report the incident";
            cout <<"\n b. Join them";
            cout <<"\n c. Keep walking and ignore them";

            cout << "\n Answer (a,b,c): ";
            cin >> answer5;
        }
        if (answer5 == a)
        {
            cout << "You got a -10 points!" << endl;
            cin >> badge;
        }
        else if (answer5 ==b)
        {
            cout << "You got 20 points" << endl;
            cin >> badge;
        }
        else if (answer5 == c)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }

    case 6:
        if (answer == 6)
        {
            cout << "Since you like to go to the principal office and tell them what you saw, you've got to choose how!" << endl;

            cout <<"\n a. Tell them the incident without an evidence";
            cout <<"\n b. Tell them the incident with enough evidence";
            cout << "\n Answer (a,b,c): ";
            cin >> answer6;
        }
        if (answer6 == a)
        {
            cout << "You got a -10 points!" << endl;
            cin >> badge;
        }
        else if (answer6 == b)
        {
            cout << "You got 20 points" << endl;
            cin >> badge;
        }
        else if (answer6 == c)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }


    case 7:
        if (answer == 7)
        {
            cout << "Since you like to talk to them and tell them the bad effects of using illegal drugs and encourage them to stop it, you've got to choose how!" << endl;

            cout <<"\n a.Seek help from other students";
            cout <<"\n b.Seek help from the teacher";
            cout <<"\n c.Seek help from the professionals regarding the incident";
            cout << "\n Answer (a,b,c): ";
            cin >> answer7;
        }

        if (answer7 == a)
        {
            cout << "You got a -10 points!" << endl;
            cin >> badge;
        }
    else if (answer7 == b)
        {
            cout << "You got 20 points" << endl;
            cin >> badge;
        }
        else if (answer7 == c)
        {
            cout << "You got a -10 points" << endl;
            cin >> badge;
        }


   }


if (badge == -10){

    cout << "You dont earn a badge" << endl;
}
   else if (badge == 20) {
    cout << "You  earn a badge! CONGRATULATIONS! " << endl;
}


    }







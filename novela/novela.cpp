// novela.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    string a, b, c, d, e;
    cout << "What's your name, child?";
    cin >> e;
    cout << "You were captured by wizards and taken to Caer Morhen!"<< endl;
    cout << "your task is to survive and become a witcher, all your actions affect this!" << endl;
    cout << "The first herb trial is about to begin" << endl;
    cout << "They put you on a 'torture chair' and begin injecting you." << endl;
    cout << "you feel hellish pain and at some point the pain subsides, you start to hear a voice that says 'come to me'.\nWill you respond to this call ? " << endl;
    cin >> a;
    if (a == "no" || a == "No")
    {
        cout << "you start to feel pain again, you open your eyes and the world in front of you changes - you have passed the test of herbs" << endl;
        cout << "but it's too early to relax, because more than half of the children died on this test, but you don't feel anything anymore." << endl;
        cout << "The wizards of Kaer Morhen announced the beginning of the break do you want to rest?" << endl;
        cin >> b;
        if (b == "yes" || b =="Yes")
        {
            cout << "here you are sleeping and you wake up abruptly from falling to the ground, you open your eyes and lead the forest in front of you." << endl;
            cout << "when you start to make your way through the forest, do you see a monster in front of you, will you fight with it or run away?"<< endl;
            cin >> c;
            if (c == "run") {
                cout << "you start to run away, but the monster turned out to be faster - you died" << endl;
            }
            else if(c == "fight")
            {
                cout << "unexpectedly for yourself, you kill a monster, apparently the mutations have given their result!" << endl;
                cout << "wandering through the forest, you also met monsters, but you already know that they are not your equal and you easily defeat them all!" << endl;
                cout << "soon, wandering through the forest, you find a stone, there is a wolf medallion on it, do you want to take it?" << endl;
                cin >> d;
                if (d == "yes") {
                    cout << "when you take the medallion, you are moved to Kaer Morhen and the wizards praise and congratulate you - you have become a witcher, "<< e<< endl;
                }
                else
                {
                    cout << "You don't take the medallion and you get struck by lightning, the wizards have punished you, sucker" << endl;
                }
            }

            else {
                cout << "Did you think it was that simple? You're dead you fool";
            }
        }
        else
        {
            cout << "here you are practicing and suddenly you are transported to the forest, when you started moving through it you met a monster, but you did not have enough strength to cope with it - you died" << endl;
        }
    }
    else
    {
        cout << "YOU DIE!" << endl;
    }
    return 0;
}



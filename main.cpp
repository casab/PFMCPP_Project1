#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:     enemy
//  action 1: the enemy attacks
enemy.attack();
//  action 2: the enemy hides
enemy.hide();
//  action 3: the enemy speaks
enemy.speak();
 
//  2)
//  Noun:     human
//  action 1: the human cooks
human.cook();
//  action 2: the human eats
human.eat();
//  action 3: the human swims
human.swim();
//  3)
//  Noun:     bird
//  action 1: the bird flies
bird.fly();
//  action 2: the bird jumps
bird.jump();
//  action 3: the bird sings
bird.sing();
//  4)
//  Noun:     baby
//  action 1: the baby cries
baby.cry();
//  action 2: the baby drinks milk
baby.drinksMilk();
//  action 3: the baby crawls
baby.crawl();
//  5)
//  Noun:     dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog runs
dog.run();
//  action 3: the dog plays catch
dog.playCatch();
//  6)
//  Noun:     company
//  action 1: the company makes profit
company.makeProfit();
//  action 2: the company bankrupts
company.bankrupt();
//  action 3: the company hires an employee
company.hireEmployee();
//  7)
//  Noun:     family
//  action 1: the family buys a house
family.buyHouse();
//  action 2: the family pays the bills
family.payBills();
//  action 3: the family grows
family.grow();
//  8)
//  Noun:     robot
//  action 1: the robot learns
robot.learn();
//  action 2: the robot process information
robot.processInformation();
//  action 3: the robot dances
robot.dance();
//  9)
//  Noun:     virus
//  action 1: the virus infects
virus.infect();
//  action 2: the virus kills
virus.kill();
//  action 3: the virus mutates
virus.mutate();
//  10)
//  Noun:     phone
//  action 1: the phone vibrates
phone.vibrate();
//  action 2: the phone plays music
phone.playMusic();
//  action 3: the phone connects to internet
phone.connectToInternet();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

// Final Project
// The task of this program is to use the information I have learned through out the semester and use it for a game.
// Robert Calvey
// 30 April 2019

#include <iostream>
using namespace std;

int  main() {
string name;
  int choice;
  const int start =1;
  const int quit =2;
    int path;
    const int path1 =1;
    const int path2 =2;
      // Path 1 variables
      int wolves;
      const int leave=1;
      const int help=2;
        int bridge ;
        const int sprint=8;
        const int turtle=9;
            int banjo;
            const int fight=5;
            const int flight=6;

   // Title screen
  cout << "Doppleganger" << '\n';
  cout << "[1] Start game " << endl;
  cout << "[2] Quit" << endl;
  cout << "Please enter 1 or 2 to make your decision" << endl;
  cin >> choice;

  switch (choice) {
    case quit:
    std::cout << "Thanks for wasting our time." << '\n';
    return 0;
  }

  switch (choice) {
    case start:
    std::cout << "Hello traveler what is your name" << '\n';
    cin >> name;
    std::cout << "Hello " << name << " we are so glad that you are here" << '\n';
    cout << " There is a series of trials in order for us to see your full potential" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "You are faced with two different paths which one will you take" << endl;
    cout << "[1] The first path leads you through a dark forest" << endl;
    cout << "[2] The second path has you following the river" << endl;
    cout << "which one road will you pick" << endl;
    cin >> path;
      //Path one
            switch (path) {
              case path1:

                  cout << "Starting down the path light shimmers through the trees" << endl;
                  cout << "You pass a cave and to your surprise something catches your ear" << endl;
                  cout << "You hear a little girls voice screaming in agony" << endl;
                  cout << "You enter into the cave and see a pack of wolves trying to attack her" << endl;
                  cout << "[1] You can either leave and act like nothing every happened" << endl;
                  cout << "[2] or You can try and fight off the wolves" << endl;
                  cin >> wolves;
                      switch (wolves) {
                        case help:
                        cout << "Though a valiant effort was made the wolves were to much for you" << endl;
                        cout << " You Died" << endl;
                        return 0;
                    }


                      switch (wolves) {
                        case leave:
                        cout <<"though you fled like a child it saved your life the wolves would have used you as an appetizer" << endl;
                        cout << "You continue down the path for quit some time and stop by a stream to catch your breath and get some water" << endl;
                        cout << "you here the sounds of a banjo playing in the distance. It sounds like dueling banjos" << endl;
                        cout << "Walking towards where the sound is coming from you come upon a bridge whose ropes are on the verge of ripping" << endl;
                        cout << "[8] run across the bridge and pray for the best" << endl;
                        cout << "[9] pick up a heavy looking rock and put it on the bridge" << endl;
                          cin >> bridge ;
                              switch (bridge) {
                                case sprint:
                                cout << "you think you are faster than the speed of light but not fast or light enough to make it over the bridge." << endl;
                                cout << "The ropes snap under the small amount of stress and the bridge goes down with you on it" << endl;
                                cout << "Falling into the abyss you try and reach for something just before you hit the floor you suddenly wake up" << endl;
                                cout << "Looking around you realize you are in your room and it was all just a dream" << endl;
                                cout << "Thank you for playing" << endl;
                                return 0;
                              }
                              switch (bridge) {
                                case turtle:
                                cout << "You look around and find a large rock" << endl;
                                cout << "Picking it up and putting down on the bridge you see it start to move" << endl;
                                cout << "thinking it is just the bridge moving you sit and wait. Suddenly a head pops out" << endl;
                                cout << "Noticing that it is actually a turtle you try and save it but are not fast enough the bridge falls and the turtle with it" << endl;
                                cout << "The banjos stop playing and see you trying to get the turtle. Thinking you are throwing it over the edge"<< endl;
                                cout << "They start charging at you screaming" << endl;
                                cout << "are you going to:"<< endl;
                                cout << "[5] stay and fight" << endl;
                                cout << "[6] Run and scream" << endl;
                                      cin >> banjo;
                                    switch (banjo) {
                                      case fight:
                                      cout << "Thinking you can fight off these two men you yell halt" << endl;
                                      cout << "to your surprise they stop in their tracks and ask who you think you are" << endl;
                                      cout << "being naive you say, I am " << name << " killer of hicks" << endl;
                                      cout << "They laugh in your face and without thinking about it you sock them both square in the teeth" << endl;
                                      cout << "loving the way it felt you continue on the dirt path you see a hermit" << endl;
                                      cout << "with the joy of hitting people you getting a running start and drop kick him" << endl;
                                      cout << "word starts to spread and you are found by knights" << endl;
                                      cout << "Being escorted you are brought through the streets and into the town square" << endl;
                                      cout << "you look over at the king sitting on the throne and see yourself. The person you could have become." << endl;
                                      cout << "This was the last thing you saw before the guillitin drops" << endl;
                                      cout << "The End" << endl;
                                      return 0;
                                    }
                                    switch (banjo) {
                                      case flight:
                                        cout << "Trying to flee the would be assailants you trip over your untied shoe lace" << endl;
                                        cout << "The animal loving hicks catch up to you insisting that they make you feel the same pain as the turtle "<< endl;
                                        cout << "they bring you to the cliff where the turle fell and throw you over" << endl;
                                        cout << "Thank you for playing" << endl;
                                        return 0;
}
}
}
}
int choice3;
const int choice4 = 1;
const int choice2 = 2;
  int bush;
  const int look=3;
  const int flee=4;
    int pup;
    const int feed=1;
    const int starve=2;
    switch (path) {
      case path2:
      cout << "Walking by the river you run into bipedal goldfish" << endl;
      cout << "Hello " << name << "we have been expecting you for some time now" << endl;
      cout << "The elders have spoken of the great one who will set us free." << endl;
      cout << "We have a task for you to complete for us are you up to the challenge?" << endl;
      cout << "[1] continue on the quest" << endl;
      cout << "[2] leave " << endl;
      cin >> choice3;
        switch (choice3) {
          case choice2:
          cout << "Why would you do this to us all that we have dreamed of has now been crushed" ;
          cout << "now go on and leave us to wallow by ourselves" << endl;
          return 0;
        }

          switch (choice3) {
            case choice4:
            cout << "Yay we are so thrilled that you will help us" << endl;
            cout << "Now please take this map and find the cave" << endl;
            cout << "the beginning of the quest is smooth sailing the largest enemy you crossed was rock that flew into your boot" << endl;
            cout << "You look at the map and realize you are more than halfway to the cave." << endl;
            cout << "thinking now would be a good time to rest you find a nice tree to lean against" << endl;
            cout << "Waking up to the sound of rustling you look around and realize its coming from the bushes. "<< endl;
            cout << "Will you" << endl;
            cout << "[3] look in the bushes" << endl;
            cout << "[4] flee from the area" << endl;
              cin >> bush;
              switch (bush) {
                case flee:
                cout << "stealthily tring to make your get away you stumble on a rock" << endl;
                cout << "while losing your balance you tumble backwards and into rapids. You are dragged to your death" << endl;
                cout << "The end"<< endl;
                return 0;
              }
              switch (bush) {
                case look:
                cout << "you slowly start to peer into the bushes" << endl;
                cout << "You hear a little bark and you see a wolf pups head pop out" << endl;
                cout << "looking around for the mother. You notice none so you adopt it as your own" << endl;
                cout << "He looks hungry so you cast your fishing rod into the river" << endl;
                cout << "shorlty after you feel a bite and start reeling it in. When it gets to the surface you realize it is one of the bipedal goldfish" << endl;
                cout << "Should you" << endl;
                cout << "[1] feed the wolf" << endl;
                cout << "[2] let the fish go" << endl;
                cin >> pup ;
                  switch (pup) {
                    case starve:
                    cout << "deciding to let the pup straved doomed both of you" << endl;
                    cout << "the goldfish goes back to the town and tells of how the great one was gonna kill him" << endl;
                    cout << "This leads the clan to hunt you down. They find you and kill you by drowning you" << endl;
                    return 0;
                  }
                  switch (pup) {
                    case feed:
                    cout << "You throw the fish to the wolf pup and he eats him in one bite." << endl;
                    cout << "Before the fish died he started cursing your name but you did not care because the pup was fed" << endl;
                    cout << "happily prancing around the pup starts following you and becomes your companion" << endl;
                    cout << "Throughout the adventure the wolf aids you in not becoming some creatures dinner" << endl;
                    cout << "When you reach the cave you are greeted by a wizard" << endl;
                    cout << "He grants you the throne" << endl;
                    cout << "When you sit on the throne with your wolf by your side your a in charge of sentencing a man to death." << endl;
                    cout << "The man is charge with the murder of ten people" << endl;
                    cout << "You see the man brought to the guillitin and notice it is you" << endl;
                    cout << "The end" << endl;
                  }


          }


    }
  }
}
  return 0;

}

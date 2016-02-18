#include <iostream>
#include "irrKlang.h"

using namespace std;
int main()
{
    
    irrklang::ISoundEngine* engine = irrklang::createIrrKlangDevice();
    
    if (!engine) return 1; // could not start engine
    
    engine->play2D("/Users/srinidhi/Downloads/irrKlang-64bit-1.5.0/media/explosion.wav"); // play some mp3 file
    
    cout<<"hello\n";
    
    std::cin.get(); // wait until user presses a key
    
    engine->drop(); // delete engine
    return 0;
}
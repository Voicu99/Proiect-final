
#include "Game_Scenes_.h"
//#include "Game_Utility_.h"



//  Shadows of Eternia
int main()
{
    //TryPlayWawFile("Exploring");



        /*
        std::string wav_name = "Main_Menu";  // Base name of the WAV file
        std::string filename = "../Console_RPG_/Sounds/" + wav_name + ".wav";  // Adjust the path as needed
        WavFile wav = loadWavFile(filename.c_str());  // Pass the C-string to loadWavFile

        ApplyFadeIn(wav, 3000);
        std::atomic<bool> stopFlag(false);
        std::thread soundThread(BackgroundSoundThread, std::ref(wav), std::ref(stopFlag));

            for (int i = 0; i < 10; ++i) {
                std::cout << "Main thread is running: " << i << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(500));
            }

        FadeOutWavFile(wav);
        stopFlag.store(true);
        soundThread.join();
        
        std::cout << "Finish ? " << std::endl;*/

    _Game_Scene_01_();



    /*Game_Intro_* BP_Game_Intro_ = new Game_Intro_();
    BP_Game_Intro_->_BeginIntro();

    Player_Class_* BP_Player_ = new Player_Class_(100, 50, BP_Game_Intro_->_getPlayerName(), BP_Game_Intro_->_getPathName());
    
    
    delete BP_Player_;
    delete BP_Game_Intro_;*/
}


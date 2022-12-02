#include "blankScreen.h"
#include "soundPlay.h"
#include "shutdown.h"
#include <thread>
int main() {
    //inAnh("asset/image/gaiAlime.jpg");

    std::thread nhac(phatNhac);
    std::thread anh(inAnh, "asset/image/windowsError.jpg", 15); // delay 15 giay roi moi tat(cai nay oke roi)
    std::thread sss(shutdown, 21); // delay 21 giay roi moi tat
    
    //nhac.join();
    anh.join();
    sss.join();
}
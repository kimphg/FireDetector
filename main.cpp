#include <QCoreApplication>

#include "common.h"
#include "VideoHandler.h"
#include "FlameDetector.h"
#include "Config.h"

#ifdef TRAIN_MODE
bool trainComplete = false;
#endif

VideoHandler* videoHandler = NULL;
CConfig         m_Config;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    VideoHandler* videoHandler = NULL;

<<<<<<< HEAD
//    VideoHandler handler("C:/clips/IR.avi", true);
    VideoHandler handler("D:/Example.asf", true);
=======
    VideoHandler handler("C:/clips/IR.asf", true);
>>>>>>> origin/master
//    VideoHandler handler("C:/clips/4.avi");
//     VideoHandler handler(0);

    videoHandler = &handler;

    int ret = handler.handle();

    switch (ret) {
        case VideoHandler::STATUS_FLAME_DETECTED:
            cout << "Flame detected." << endl;
            break;
        case VideoHandler::STATUS_OPEN_CAP_FAILED:
            cout << "Open capture failed." << endl;
            break;
        case VideoHandler::STATUS_NO_FLAME_DETECTED:
            cout << "No flame detected." << endl;
            break;
        default:
            break;
        }

    return a.exec();
}

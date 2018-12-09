#include "tellodata.h"
#include <QDateTime>
#include <QDebug>


//sharedData----------------------------
cv::Mat currentFrame;

QString min_control_division_value = "20";

int tello_pitch;
int tello_roll;
int tello_yaw;

int tello_vgx;
int tello_vgy;
int tello_vgz;

int tello_templ;
int tello_temph;

int tello_tof;
int tello_h;
int tello_bat;

float tello_baro;
int tello_time;

float tello_agx;
float tello_agy;
float tello_agz;

int tello_wifiSnr;



//--------------------------------------
void printLog(const QString className, const QString info)
{
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")
            <<className<<info;
}








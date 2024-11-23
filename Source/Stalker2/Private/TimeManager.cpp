#include "TimeManager.h"

UTimeManager::UTimeManager() {
    this->bIsPaused = false;
    this->GameTimeSecondsDouble = 0.00f;
    this->WeatherTimeSeconds = 0.00f;
    this->GameTimeSeconds = 0.00f;
    this->RealTime = 0.00f;
    this->LastTickDeltaTimeNormalized = 0.00f;
    this->CustomDeltaTime = 0.00f;
    this->SpeedFactor = 0.00f;
    this->WeatherSpeedFactor = 1.00f;
    this->FrameRate = 0.00f;
    this->TickCounter = 0;
    this->FixedFPS = 0;
    this->GameHours = 0;
    this->GameMinutes = 0;
    this->GameSecondsClamped = 0.00f;
    this->bDay = true;
    this->UnixTime = 0;
    this->LastUnixTimeUpdateTick = 0;
}



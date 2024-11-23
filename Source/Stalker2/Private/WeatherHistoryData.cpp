#include "WeatherHistoryData.h"

FWeatherHistoryData::FWeatherHistoryData() {
    this->WeatherType = EWeather::Clearly;
    this->BlendWeight = 0.00f;
    this->BlendWeightIncrease = 0.00f;
    this->Cooldown = 0;
    this->MaxRepeatAmount = 0;
    this->RepeatAmount = 0;
    this->bPaused = false;
    this->bAllowInDialogueTransition = false;
}


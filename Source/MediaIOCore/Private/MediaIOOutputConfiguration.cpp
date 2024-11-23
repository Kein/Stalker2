#include "MediaIOOutputConfiguration.h"

FMediaIOOutputConfiguration::FMediaIOOutputConfiguration() {
    this->OutputType = EMediaIOOutputType::Fill;
    this->KeyPortIdentifier = 0;
    this->OutputReference = EMediaIOReferenceType::FreeRun;
    this->ReferencePortIdentifier = 0;
}

